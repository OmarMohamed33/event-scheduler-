#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_SECURE_NO_WARNINGS
#include "Event.h"
#include <iostream>
#include "Admin_controler.h"
#include "Time_Date_Maneger.cpp"
using namespace std;

tm Event::saveDate(int day, int month, int year, int hour, int minutes)
{
    tm timeinfo;
    timeinfo.tm_year = year;
    timeinfo.tm_mon = month;
    timeinfo.tm_mday = day;
    timeinfo.tm_hour = hour;
    timeinfo.tm_min = minutes;
    return timeinfo;
}
void Event::setName(string name)
{
    this->name = name;
}

void Event::setStartDate(int day, int month, int  year, int  hour, int minutes)
{
    this->startDate = saveDate(day, month, year, hour, minutes);
}

void Event::setEndDate(int day, int month, int  year, int  hour, int minutes)
{

    this->endDate = saveDate(day, month, year, hour, minutes);
}

void Event::setReminder(int day, int month, int  year, int  hour, int minutes)
{
    this->reminderDate = saveDate(day, month, year, hour, minutes);
}

void Event::setDone(int done)
{
    this->done = done;
}

void Event::setPlace(string place)
{
    this->place = place;
}

tm Event::getStartDate()
{
    return this->startDate;
}

tm Event::getReminderDate()
{
    return this->reminderDate;
}

tm Event::getEndDate()
{
    return this->endDate;
}

string Event::getName()
{
    return this->name;
}

string Event::getPlace()
{
    return this->place;
}

bool Event::getDone()
{
    if (Time_Date_Maneger::compTime(this->endDate, Time_Date_Maneger::getDateTime()) == -1)
        this->done = true;
    return this->done;
}
bool Event::getReminded()
{
    return this->reminded;
}

void Event::setReminded()
{
    this->reminded = true;
}
void Event::getInfo()
{
    cout << "Event: " << this->getName() << endl;
    cout << "Place: " << this->getPlace() << endl;

    cout << "Start Date: " << this->getStartDate().tm_mday << "/" << this->getStartDate().tm_mon << "/" << this->getStartDate().tm_year << endl;
    cout << "Start Time: " << this->getStartDate().tm_hour << ":" << this->getStartDate().tm_min << endl;

    cout << "End Date: " << this->getEndDate().tm_mday << "/" << this->getEndDate().tm_mon << "/" << this->getEndDate().tm_year << endl;
    cout << "End Time: " << this->getEndDate().tm_hour << ":" << this->getEndDate().tm_min << endl;

    cout << "Reminder Date: " << this->getReminderDate().tm_mday << "/" << this->getReminderDate().tm_mon << "/" << this->getReminderDate().tm_year << endl;
    cout << "Reminder Time: " << this->getReminderDate().tm_hour << ":" << this->getReminderDate().tm_min << endl;
}