#ifndef __Admin_controler__
#define __Admin_controler__
#include <vector>
#include "user.h"

using namespace std;

class Admin_controler
{
public:
    user usr;
    vector<user> users;

public:
    Admin_controler(vector<user>& users);
    ~Admin_controler();
    void Login();
    void driver();
    int mainMenu();
    void Register();
    void landingPage();
    void add_event();
    void del_event();
    void disp_event();
    void disp_done_event();
    void update_event();
    bool check_date(int day, int month, int year, int minutes, int hours);
};
#endif