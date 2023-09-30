#include<iostream>
using namespace std;
void discount(string day, float purchase);
main(){
float purchase;
string day;
cout << "Enter the day of purchase: ";
cin >> day;
cout << "Enter the total purchase amount: $";
cin >> purchase;
discount(day,purchase);

}


void discount(string day, float purchase)
{
   
   if (day == "Sunday"||"sunday")
   {
     float discounted_value;
     discounted_value = purchase*0.1;
     float payable_amount = purchase - discounted_value;
     cout << "Payable Amount: $" << payable_amount;
  }
   else if (day != "Sunday"||"sunday")
      cout << "Payable Amount: $" << purchase;
}