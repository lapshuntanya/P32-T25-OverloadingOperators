#include "Date.h"
#include <ctime>

Date::Date()
{
    time_t now = time(0);
    tm* info = new tm;

    localtime_s(info, &now);

    year = 1900 + info->tm_year;
    month = 1 + info->tm_mon;
    day = info->tm_mday;

    delete info;
}

Date::Date(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}

bool Date::isLeapYear() const
{
    return year%4 == 0&& year%100 != 0 || year%400 == 0;
}

int Date::monthDays() const
{
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        return 31;
    else if (month == 2)
        return isLeapYear() ? 29 : 28;
    return 30;
}

void Date::nextDate()
{
}

void Date::prevDate()
{
}

void Date::showDate() const
{
}

bool Date::valid() const
{
    return false;
}

void Date::setYear(int year)
{
}

int Date::getYear() const
{
    return 0;
}

void Date::setMonth(int month)
{
}

int Date::getMonth() const
{
    return 0;
}

void Date::setDay(int day)
{
}

int Date::getDay() const
{
    return 0;
}
