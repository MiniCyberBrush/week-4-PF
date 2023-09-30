#include<iostream>
using namespace std;
void calculateFuel(float distance);
main(){
int distance;
cout << "Enter the distance: ";
cin >> distance;
calculateFuel(distance);

}


void calculateFuel(float distance)
{
   float fuel_needed;
   fuel_needed = distance*10;
   if (fuel_needed < 100)
   cout << "Fuel needed: 100";
   if (fuel_needed > 100)
   cout << "Fuel needed: " << fuel_needed;
   
}