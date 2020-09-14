#include <iostream> //header file
using namespace std;
class addition
{

  int a,b;
  public:
  addition(int, int); // initilising constructor: it has same name as class
  ~addition();  // initilising destructor: it has same name as class
  int add()
  {
    return (a+b);
  }
};
addition::addition(int x,int y)  //defining constructor
{

  a=x;
  b=y;

}
addition::~addition()  //for destructor
{
cout<<"memory dislocation is done\n";
}

int main()
{
  addition obj(3,4);
  cout<<"sum is: "<<obj.add()<<"\n";
  return 0;
}
