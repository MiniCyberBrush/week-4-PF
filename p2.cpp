#include<iostream>
using namespace std;
void inchesToFeet(float inches);
main()

{
   float inches;
   cout << "Enter the measurement in inches: ";
   cin >> inches;
   inchesToFeet(inches);

}

void inchesToFeet(float inches)
{
  float measurement_feet;
  measurement_feet = inches/12;
  cout << "Equivalent in feet: " << measurement_feet ;
   
}
