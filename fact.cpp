
#include<iostream>
using namespace std;

long long int factorial(int x){
    if(x==1)
        return 1;
    else
        return x*factorial(x-1);

}
int main(){
    int n;
    cout<<"Give a positive integer or zero to exit : ";
    cin>>n;
    while(n>=0){
        if(n==0){
            cout<<"Factorial of given number : "<<n<<endl;
            break;
        }
        cout<<"Factorial of given number : "<<factorial(n)<<endl;
        cout<<"Enter positive integer to continue or zero or negative to exit : ";
        cin>>n;

    }
    if(n<=0){
        cout<<"Exiting...";
    }
}
