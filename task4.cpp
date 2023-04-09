#include<iostream>
using namespace std;

main()
{
    int netPrice;
    int copiesSold;
    cout<<"Enter the net Price of book:";
    cin>>netPrice;
    cout<<"Emter the copies sold:";
    cin>>copiesSold;


    int total;
    total=netPrice*copiesSold;
    

    if(copiesSold<=4000)
    {
        int price1=2500;
        cout<<"a"<<" "<<price1<<endl;


        int total1;
        total1=(12.5*total)/100;
        cout<<"b"<<" "<<total1<<endl;

        int total2;
        total2=(10*total)/100;
        cout<<"c"<<" "<<total2<<endl;

        if(price1>total1&&price1>total2)
        {
            cout<<"This opotion is best"<<" "<<price1;
        }
        else if(total1>price1&&total1>total2)
        {
             cout<<"This opotion is best"<<" "<<total1;
        }

        else if(total2>price1&&total2>total1)
        {
             cout<<"This opotion is best"<<" "<<total2;
        }
    }

    else if(copiesSold>4000)
    {
        int price11=25000;
        cout<<"a"<<" "<<price11<<endl;


        int total11;
        total11=(12.5*total)/100;
        cout<<"b"<<" "<<total11<<endl;

        int tot,tot1,tot2;
        tot=copiesSold-4000;
        tot1=(tot*14*netPrice)/100;

        int total22;
        total22=(10*4000*netPrice)/100;
        tot2=tot1+total22;

        cout<<"c"<<" "<<tot2<<endl;

        if(price11>total11&&price11>tot2)
        {
            cout<<"This opotion is best"<<" "<<price11;
        }
        else if(total11>price11&&total11>tot2)
        {
             cout<<"This opotion is best"<<" "<<total11;
        }

        else if(tot2>price11&&tot2>total11)
        {
             cout<<"This opotion is best"<<" "<<tot2;
        }
    }
}