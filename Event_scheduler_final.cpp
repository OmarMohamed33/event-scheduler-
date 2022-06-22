#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_NONSTDC_NO_DEPRECATE
#include <vector>
#include "Event.h"//event
#include "Time_Date_Maneger.cpp"//datetimemaneger
#include "Manager_control.cpp"//filemaneger.
#include "Admin_controler.h"//console

using namespace std;
int main()
{
    //preprocessing
    vector<user> users;
    Manager_control::readUsers(users);

    //main program
    Admin_controler c(users);

    //save data
    Manager_control::writeEvents(c.usr.events, c.usr.getName());

}