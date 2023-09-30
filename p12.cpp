#include<iostream>
using namespace std;
void discount(string day, float purchase);
main(){
system("cls");
while(1)
{
float purchase;
string day;
cout << "Enter the day of purchase: ";
cin >> day;
cout << "Enter the total purchase amount: $";
cin >> purchase;
discount(day,purchase);
cout << endl;
}
}


void discount(string day, float purchase)
{
   
   if (day == "sunday")
   {
     float discounted_value;
     discounted_value = purchase*0.1;
     int payable_amount = purchase - discounted_value;
     cout << "Payable amount $" << payable_amount;
  }
   else if (day != "sunday")
     {
      float discount_value;
      discount_value = purchase*0.05;
      int  AmountToBePaid = purchase - discount_value;
      cout << "Payable amount: $" <<  AmountToBePaid;
     }


}