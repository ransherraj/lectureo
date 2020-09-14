#include <iostream>
#include <string>
using namespace std;
class Boss{
public:
   Boss(string x){
        SetName(x);
    }
    void SetName(string y){
        name = y;
    }

    string getName(){
        return name;
    }
    private:
        string name;
};
int main()
{
    Boss boss("Raj Singh\n\n");
    Boss boss2("Raj bjhar");

    cout<<boss.getName();
    cout<<boss2.getName();
    return 0;
}
