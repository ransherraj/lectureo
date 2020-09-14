#include<iostream>
using namespace std;
void printNumber(int x){
    cout<<"Im printing integer value ie "<<x<<endl;

}
void printNumber(float x){
    cout<<"Im printing float value ie "<<x<<endl;

}
int main(){
    int a = 100;
    float b = 120.345;
    printNumber(b);
    printNumber(a);
}
