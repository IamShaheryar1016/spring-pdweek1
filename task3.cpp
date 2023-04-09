#include<iostream>
using namespace std;


main()
{
    int angle1,angle2,angle3;
    cout<<"Enter the angle of one side:";
    cin>>angle1;
    cout<<"Enter the side of angle 2:";
    cin>>angle2;
    cout<<"Enter the ide of angle3:";
    cin>>angle3;

    int result;
    result=angle1+angle2+angle3;

    if(result==180)
    {
        cout<<"Valid triangle:";
    }
    else{
        cout<<"Wrong credentials:";
    }
}