#include<iostream>
using namespace std;
void calculateFuel(float distance);
main(){
float distance;
cout << "Enter the distance: ";
cin >> distance;
calculateFuel(distance);

}


void calculateFuel(float distance)
{
   float fuel_needed;
   fuel_needed = distance*10;
   cout << "Fuel needed: " << fuel_needed;
   
}