#include <iostream>
using namespace std;

main()
{
    string day;
    cout << "Enter your day:";
    cin >> day;

    if ((day == "sunday") || (day == "monday") || (day == "tuesday"))
    {
        cout << "Off:";
    }

    if ((day == "wednesday") || (day == "thursday") || (day == "friday") || (day == "saturday"))
    {
        string time;
        cout << "Enter your time:";
        cin >> time;
        if (time == "morning")
        {
            cout << "Go to uni";
        }
        else if (time == "evening")
        {
            cout << "Off";
        }
    }
}