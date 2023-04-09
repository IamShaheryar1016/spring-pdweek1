#include <iostream>
using namespace std;

main()
{
    string gender;
    cout << "Enter your gender:";
    cin >> gender;

    if (gender == "male")
    {
        float bodyweight;
        float wristM;
        float total1;
        float total2;
        float total3;
        float bodyfat;
        float BodyfatResult;

        cout << "Enter the body weight:";
        cin >> bodyweight;
        cout << "Enter the wrist measurment:";
        cin >> wristM;

        total1 = (bodyweight * 1.082) + 94.42;
        // cout<<total1<<endl;
        total2 = wristM * 4.15;
        // cout<<total2<<endl;;
        total3 = total1 - total2;
        // cout<<total3<<endl;
        bodyfat = bodyweight - total3;
        BodyfatResult = bodyfat * 100 / bodyweight;
        cout << "Your body fat is:" << BodyfatResult;
    }

    if (gender == "female")
    {
        float bodyweight1;
        cout << "Enter bodyweight:";
        cin >> bodyweight1;
        float wristM1;
        cout << "Enter wrist:";
        cin >> wristM1;
        float waistM;
        cout << "Enter waist :";
        cin >> waistM;
        float hipM;
        cout << "Enter hipM :";
        cin >> hipM;
        float forearmM;
        cout << "Enter forearmM :";
        cin >> forearmM;
        float bodyfat1;

        float bodyfatP1;

        float total1;
        float total2;
        float total3, total4, total5, total6;

        total1 = (bodyweight1 * 0.732) + 8.987;
        cout << total1 << endl;
        total2 = wristM1 / 3.140;
        cout << total2 << endl;
        total3 = waistM * 0.157;
        cout << total3 << endl;
        total4 = hipM * 0.249;
        cout << total4 << endl;
        total5 = forearmM * 0.434;
        cout << total5 << endl;
        total6 = total1 + total2 - total3 - total4 + total5;
        cout << total6 << endl;
        bodyfat1 = bodyweight1 - total6;
        cout << bodyfat1 << endl;
        bodyfatP1 = (bodyfat1 * 100) / 100;
        cout << bodyfatP1;
    }
}