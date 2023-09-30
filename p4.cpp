#include<iostream>
using namespace std;

main()

{
   float num1,num2;
   cout << "Enter 1st number: ";
   cin >> num1;
   cout << "Enter 2nd number: ";
   cin >> num2;
   cout << "Enter an operator (+, -, *, /): ";
   char o;
   cin >> o; 
   if( o == '+' )
    {
    float addition;
     addition = num1 + num2;
     cout << "Addition: " << addition;
    }
   if( o == '-' )
    {
    float subtraction;
     subtraction = num1 - num2;
     cout << "Subtraction: " << subtraction;
    }
   if( o == '*' )
    {
      float multiplication;
     multiplication = num1 * num2;
     cout << "Multiplication: " << multiplication;
    }
   if( o == '/' )
    { 
      float division;
      division = num1/num2;
      cout << "Division: " << division;
    }
}


