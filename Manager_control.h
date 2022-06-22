#pragma once
#ifndef __fManager__
#define __fManager__
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_NONSTDC_NO_DEPRECATE
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Event.h"
#include "user.h"
#include <windows.h>
#include <direct.h>
using namespace std;
class Manager_control
{
public:
    static bool   dirExists(string dirName_in);
    static string openF(string userName);
    static void   readEvents(vector<Event>& events, string userName);
    static void   writeEvents(vector<Event>& events, string userName);
    static void   readUsers(vector<user>& users);
    static void   writeUsers(vector<user>& users);
};
#endif

