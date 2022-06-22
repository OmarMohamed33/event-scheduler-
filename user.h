#ifndef __Event__
#define __Event__

#include <string>
#include <vector>
#include <stack>
#include "Event.h"
using namespace std;
class user
{
   

    string userName, password;

public:
    vector<Event> events;
    stack<Event> doneEvents;
    void addEvent(Event e);
    void deleteEvent(int idx);
    void updateEvent(Event& e);
    void displayDoneEvents(stack<Event> s);
    void displayEvents();
    void setName(string name);
    void setPassword(string password);
    string getName();
    string getPassword();

    void checkDoneEvents();
    void checkReminders();
};
#endif