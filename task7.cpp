#include <iostream>
using namespace std;

void Rent(int cost, int rooms, int days, int tax);

main()
{
    int cost;
    cout << "Enter the cost of Room:";
    cin >> cost;
    int rooms;
    cout << "Enter the rooms booked:";
    cin >> rooms;
    int days;
    cout << "Enter the number of days:";
    cin >> days;
    int tax;
    cout << "Sales Tax:";
    cin >> tax;

    Rent(cost, rooms, days, tax);
}

void Rent(int cost, int rooms, int days, int tax)
{
    if (days <= 3)

    {
        if (rooms < 10)

        {
            float total;
            total=cost*rooms;
            float total2,total3,total4;
            total2=(total*tax)/100;
            total3=total2+total;
            total4=total*days;

            cout<<"----Outputs----"<<endl;
            cout<<"Cost of 1 room is"<<" "<<cost<<endl;
            cout<<"The Discount on Each room is 0% "<<endl;
            cout<<"Number of rooms booked"<<" "<<rooms<<endl;
            cout<<"Number of days for room booked"<<" "<<days<<endl;
            cout<<"The total cost of rooms"<<" "<<total<<endl;
            cout<<"Sales Tax"<<" "<<tax<<"%"<<endl;
            cout<<"Total Billing Amount"<<" "<<total4<<endl;
        }

        if (rooms>=11 && rooms<20)
        {
            float total1,total2,total3,total4,total5,total6,total7;
            total1=cost*rooms;
            total2=(total1*10)/100;
            total3=total1-total2;
            total7=total3*days;
            total4=(total3*tax)/100;
            total5=total3+total4;
            total6=total5*days;

            cout<<"----Outputs----"<<endl;
            cout<<"Cost of 1 room is"<<" "<<cost<<endl;
            cout<<"The Discount on Each room is 10% "<<endl;
            cout<<"Number of rooms booked"<<" "<<rooms<<endl;
            cout<<"Number of days for room booked"<<" "<<days<<endl;
            cout<<"The total cost of rooms after discount"<<" "<<total7<<endl;
            cout<<"Sales Tax"<<" "<<tax<<"%"<<endl;
            cout<<"Total Billing Amount"<<" "<<total6<<endl;

        }

        if(rooms>=21 && rooms<30)
        {
            float total1,total2,total3,total4,total5,total6,total7;
            total1=cost*rooms;
            total2=(total1*20)/100;
            total3=total1-total2;
            total7=total3*days;
            total4=(total3*tax)/100;
            total5=total3+total4;
            total6=total5*days;

            cout<<"----Outputs----"<<endl;
            cout<<"Cost of 1 room is"<<" "<<cost<<endl;
            cout<<"The Discount on Each room is 20% "<<endl;
            cout<<"Number of rooms booked"<<" "<<rooms<<endl;
            cout<<"Number of days for room booked"<<" "<<days<<endl;
            cout<<"The total cost of rooms after discount"<<" "<<total7<<endl;
            cout<<"Sales Tax"<<" "<<tax<<"%"<<endl;
            cout<<"Total Billing Amount"<<" "<<total6<<endl;
        }

        if(rooms>=30)
        {
            float total1,total2,total3,total4,total5,total6,total7;
            total1=cost*rooms;
            total2=(total1*30)/100;
            total3=total1-total2;
            total7=total3*days;
            total4=(total3*tax)/100;
            total5=total3+total4;
            total6=total5*days;

            cout<<"----Outputs----"<<endl;
            cout<<"Cost of 1 room is"<<" "<<cost<<endl;
            cout<<"The Discount on Each room is 30% "<<endl;
            cout<<"Number of rooms booked"<<" "<<rooms<<endl;
            cout<<"Number of days for room booked"<<" "<<days<<endl;
            cout<<"The total cost of rooms after discount"<<" "<<total7<<endl;
            cout<<"Sales Tax"<<" "<<tax<<"%"<<endl;
            cout<<"Total Billing Amount"<<" "<<total6<<endl;
        }
    }

    else
    if(days>3)
    {
        if(rooms<10)
        {
            float total1,total2,total3,total4,total5,total6,total7;
            total1=cost*rooms;
            total2=(total1*5)/100;
            total3=total1-total2;
            total7=total3*days;
            total4=(total3*tax)/100;
            total5=total3+total4;
            total6=total5*days;

            cout<<"----Outputs----"<<endl;
            cout<<"Cost of 1 room is"<<" "<<cost<<endl;
            cout<<"The Discount on Each room is 5% "<<endl;
            cout<<"Number of rooms booked"<<" "<<rooms<<endl;
            cout<<"Number of days for room booked"<<" "<<days<<endl;
            cout<<"The total cost of rooms after discount"<<" "<<total7<<endl;
            cout<<"Sales Tax"<<" "<<tax<<"%"<<endl;
            cout<<"Total Billing Amount"<<" "<<total6<<endl;
        
        }

        if (rooms>=11 && rooms<20)
        {
            float total1,total2,total3,total4,total5,total6,total7;
            total1=cost*rooms;
            total2=(total1*15)/100;
            total3=total1-total2;
            total7=total3*days;
            total4=(total3*tax)/100;
            total5=total3+total4;
            total6=total5*days;

            cout<<"----Outputs----"<<endl;
            cout<<"Cost of 1 room is"<<" "<<cost<<endl;
            cout<<"The Discount on Each room is 15% "<<endl;
            cout<<"Number of rooms booked"<<" "<<rooms<<endl;
            cout<<"Number of days for room booked"<<" "<<days<<endl;
            cout<<"The total cost of rooms after discount"<<" "<<total7<<endl;
            cout<<"Sales Tax"<<" "<<tax<<"%"<<endl;
            cout<<"Total Billing Amount"<<" "<<total6<<endl;

        }

        if (rooms>=20 && rooms<30)
        {
            float total1,total2,total3,total4,total5,total6,total7;
            total1=cost*rooms;
            total2=(total1*25)/100;
            total3=total1-total2;
            total7=total3*days;
            total4=(total3*tax)/100;
            total5=total3+total4;
            total6=total5*days;

            cout<<"----Outputs----"<<endl;
            cout<<"Cost of 1 room is"<<" "<<cost<<endl;
            cout<<"The Discount on Each room is 25% "<<endl;
            cout<<"Number of rooms booked"<<" "<<rooms<<endl;
            cout<<"Number of days for room booked"<<" "<<days<<endl;
            cout<<"The total cost of rooms after discount"<<" "<<total7<<endl;
            cout<<"Sales Tax"<<" "<<tax<<"%"<<endl;
            cout<<"Total Billing Amount"<<" "<<total6<<endl;

        }

        if ( rooms>30)
        {
            float total1,total2,total3,total4,total5,total6,total7;
            total1=cost*rooms;
            total2=(total1*35)/100;
            total3=total1-total2;
            total7=total3*days;
            total4=(total3*tax)/100;
            total5=total3+total4;
            total6=total5*days;

            cout<<"----Outputs----"<<endl;
            cout<<"Cost of 1 room is"<<" "<<cost<<endl;
            cout<<"The Discount on Each room is 35% "<<endl;
            cout<<"Number of rooms booked"<<" "<<rooms<<endl;
            cout<<"Number of days for room booked"<<" "<<days<<endl;
            cout<<"The total cost of rooms after discount"<<" "<<total7<<endl;
            cout<<"Sales Tax"<<" "<<tax<<"%"<<endl;
            cout<<"Total Billing Amount"<<" "<<total6<<endl;

        }
    }
}