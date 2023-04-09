#include <iostream>
#include <cmath>
using namespace std;

void Revenue(int acres, int vegetables);

main()
{
    int acres, vegetables;
    cout << "Enter the total farm area in Acres:";
    cin >> acres;
    cout << "Enter the number of vegaetables:";
    cin >> vegetables;
    Revenue(acres, vegetables);
}

void Revenue(int acres, int vegetables)
{

    if (vegetables == 1)
    {
        int seedCost, PlantationCost, FertilizingCost, LaborCost, SellPerAcre1;

        cout << "Enter the seed cost per acre:";
        cin >> seedCost;
        cout << "Enter the plantation cost per acre:";
        cin >> PlantationCost;
        cout << "Enter the fertilization cost per acre:";
        cin >> FertilizingCost;
        cout << "Enter the labour cost per acre:";
        cin >> LaborCost;
        cout << "Enter the selling price per acre:";
        cin >> SellPerAcre1;

        int revenue;
        revenue = (SellPerAcre1)*acres;
        cout << "Your revenue is"
             << " " << revenue << endl;

        int cost;
        cost = (seedCost + PlantationCost + FertilizingCost + LaborCost) * acres;

        cout << "Your cost is"
             << " " << cost << endl;

        if (cost > revenue)
        {
            cout << "Loss!!!!";
        }
        else
        {
            cout << "Profit!!!!";
        }
    }

    if (vegetables == 2)
    {
        int area1, area2, seedCost, PlantationCost, FertilizingCost, LaborCost, SellPerAcre1, SellPerAcre2;
        cout << "Enter the area of vegetable1:";
        cin >> area1;
        cout << "Enter the area of vegetable2:";
        cin >> area2;
        cout << "Enter the seed cost per acre:";
        cin >> seedCost;
        cout << "Enter the plantation cost per acre:";
        cin >> PlantationCost;
        cout << "Enter the fertilization cost per acre:";
        cin >> FertilizingCost;
        cout << "Enter the labour cost per acre:";
        cin >> LaborCost;
        cout << "Enter the selling price for acre1:";
        cin >> SellPerAcre1;
        cout << "Enter the selling price for acre2:";
        cin >> SellPerAcre2;

        int revenue;
        revenue = (SellPerAcre1 + SellPerAcre2) * acres;
        cout << "Your revenue is"
             << " " << revenue << endl;

        int cost;
        cost = (seedCost + PlantationCost + FertilizingCost + LaborCost) * acres;

        cout << "Your cost is"
             << " " << cost << endl;

        if (cost > revenue)
        {
            cout << "Loss!!!!";
        }
        else
        {
            cout << "Profit!!!!";
        }
    }
}