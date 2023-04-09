#include <iostream>
using namespace std;

void time(int start,int start2,int arrival,int arrival2);

main()
{
    int start;
    cout << "Enter the Exam starting time in hour:";
    cin >> start;
    int start2;
    cout << "Enter the Exam time in minutes:";
    cin >> start2;
    int arrival;
    cout << "Enter the time you reached in hour:";
    cin >> arrival;
    int arrival2;
    cout << "Enter the time you reached in minutes:";
    cin >> arrival2;

    time( start, start2, arrival, arrival2);
}


void time(int start, int start2, int arrival, int arrival2)
{
    int cal1,cal2,cal3,cal4,cal5,cal6;
    cal1=(start*60)+start2;
    cal2=(arrival*60)+arrival2;

    if(cal1>cal2)
    {
        
        cal3=cal1-cal2;
        cal4=cal3%60;
        cal5=cal3/60;
        cout<<"Early"<<" "<<cal5<<":"<<cal4<<" "<<"before the start";
    }

    if(cal1<cal2)
    {
        cal3=cal2-cal1;
        cal4=cal3%60;
        cal5=cal3/60;
        cout<<"Late"<<" "<<cal5<<":"<<cal4<<" "<<"after the start";
    }
}