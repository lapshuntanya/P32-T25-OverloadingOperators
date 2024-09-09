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
}

bool Date::isLeapYear() const
{
    return false;
}

int Date::monthDays() const
{
    return 0;
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
