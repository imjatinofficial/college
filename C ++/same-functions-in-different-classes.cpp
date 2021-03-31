#include<iostream>
using namespace std;
class car
{
    char car_company_name;
    int car_model_number;
    int car_model_year;
    void display
    {
        cout<<"Enter the name car company :";
        gets(car_cocmpany_name);
    }
    void model()
    {
       cout<<"Enter the model number of the car :";
       cin<<car_model_number;
       cout<<"Enter the year of manufacture :";
       cin<<car_model_year;
    }
};
class bike
{
    char bike_company_name;
    int bike_model_number;
    int bike_model_year;
    void model()
    {
       cout<<"Enter the model number of the bike :";
       cin<<bike_model_number;
       cout<<"Enter the year of manufacture :";
       cin<<bike_model_year;
    }
};
int main()
{
    car car1, car2;
    car1.display();
}
