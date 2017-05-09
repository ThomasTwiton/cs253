// file main.cpp
#include <cstdlib>
#include <iostream>
#include "Time.h"
using namespace std;

const int MAX_HOURS = 23;
const int MAX_MIN_SECS = 59;

void Time::setTime (int newHour, int newMinute, int newSecond)
{
   hour = newHour;
   minute = newMinute;
   second = newSecond;
}

void Time::getTime (int& currHour, int& currMinute, int& currSecond)
{
   currHour = hour;
   currMinute = minute;
   currSecond = second;
}

void Time::incrementTime (void)
{
   ++second;
}

int main (void)
{
   Time currTime;  // object that stores the current time
   int hr;         // current hour obtained from currTime
   int min;        // current minute obtained from currTime
   int sec;        // current second obtained from currTime

   currTime.setTime(-55, 99, 1025);
   currTime.getTime(hr, min, sec);
   cout << "The current military time is set to: "
        << hr << ":" << min << ":" << sec << endl;

   currTime.incrementTime();
   currTime.getTime(hr, min, sec);
   cout << "After incrementing the time, the current military time is: "
        << hr << ":" << min << ":" << sec << endl;

   return EXIT_SUCCESS;
}