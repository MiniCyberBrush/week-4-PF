#include<iostream>
using namespace std;
void test_score(int score);
main(){
int score;
cout << "Enter your score: ";
cin >> score;
test_score(score);

}


void test_score(int score)
{
if (score > 50)
  cout << "Pass" ;
if (score <= 50)
  cout << "Fail";

   
}