#include <iostream>
using namespace std;
class circle
{

  int r;
  public:
  float perimeter(float);
};
float circle:: perimeter(float a)
{
  float pi=3.14;
  a=r;
  return 2*pi*a;

}
int main()
{
  circle cir;
  cout<<"the perimeter of circle is:"<< cir.perimeter(2.2)<<"\n";
  return 0;
}
