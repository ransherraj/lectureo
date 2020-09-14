//class class_name
//public/private/protected-access specifiers

#include <iostream>
using namespace std;
class square
{
  int x;
  public:
  int area(int);
};
int square :: area(int a)
{
  x=a;
  return x*x;
}
int main()
{
  square sqr;
  cout<<"Area of square is:"<< sqr.area(4) <<"\n";
  return 0;
}
//how to run this code in cmd??
//see here.........
//type the two lines below one by one in cmd 
//g++ class.cpp -o class
//class.exe
