#include "days.h"

#define ABS(a)    (a < 0 ? -a : a)
#define MIN(a, b) (a < b ? a : b)

int julianCorrection(int epoch) {
    return epoch <= 577737 ? 0 : MIN(epoch - 577737, 10);
}

int leapYearCorrection(struct DAY *date) {
    return (date->year % 4 == 0 && (date->year % 100 != 0 || date->year < 1582)) || date->year % 400 == 0;
}

int toEpoch(struct DAY date) {
    static const int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int result = 0;

    if (date.month > 2)
        result += leapYearCorrection(&date);

    result += date.day - 1;

    while (--date.month != 0)
        result += days_in_month[date.month - 1];

    while (--date.year != 0)
        result += 365 + leapYearCorrection(&date);

    result -= julianCorrection(result);
    return result;
}

int days(struct DAY dateA, struct DAY dateB) {
    int epoch = toEpoch(dateA) - toEpoch(dateB);
    return ABS(epoch);
}