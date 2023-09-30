#include<iostream>
using namespace std;
void howManyStickers(int side_length);
main()

{
   int side_length;
   cout << "Enter the side length of the Rubik's Cube: ";
   cin >> side_length;
   howManyStickers(side_length);

}

void howManyStickers(int side_length)
{
  int stickers;
  stickers = side_length*side_length*6;
  cout << "Number of stickers needed: " << stickers ;
   
}
