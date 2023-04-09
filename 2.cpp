#include<iostream>
using namespace std;

void BGN(int money,string season);

main()
{
    float money;
    string season;
    cout<<"Enter your budjet:";
    cin>>money;
    cout<<"Enter the season:";
    cin>>season;
    BGN( money, season);
}

void BGN(int money,string season)
{
    if(money<=100 && season=="summer")
    {
        float money1,money2;
        money1=(money*30)/100.0;
        
        cout<<"Somewhere in Bulgaria"<<endl;
        cout<<"Camp"<<" "<<money1;
    }

     if(money<=100 && season=="winter")
    {
        float money1,money2;
        money1=(money*70)/100.0;
        
        cout<<"Somewhere in Bulgaria"<<endl;
        cout<<"Hotel"<<" "<<money1;
    }

    if((money>=100 && money<=1000) && season=="summer")
    {
        float money1,money2;
        money1=(money*40)/100.0;
        
        cout<<"Somewhere in Balkans"<<endl;
        cout<<"Camp"<<" "<<money1;
    }

    if((money>=100 && money<=1000) && season=="winter")
    {
        float money1,money2;
        money1=(money*80)/100.0;
        
        cout<<"Somewhere in Balkans"<<endl;
        cout<<"Hotel"<<" "<<money1;
    }

    if(money>1000 || season=="summer")
    {
        float money1,money2;
        money1=(money*90)/100.0;
        
        cout<<"Somewhere in Europe"<<endl;
        cout<<"Hotel"<<" "<<money1;
    }
}