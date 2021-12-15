#ifndef DAYS_H
#define DAYS_H

struct DAY {
    int day;
    int month;
    int year;
};

int days(struct DAY dateA, struct DAY dateB);

#endif