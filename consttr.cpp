
#include<iostream>
using namespace std;
class versa
{
    public:
        versa(string region){
                setName(region);
    }

    void setName(string s){

        newR = s;
    }

    string getName(){
        return newR;
    }

    private:
        string newR;
};

int main(){
    versa v("Lucknow\n");
    cout<<v.getName();
    versa w("Kanpur");
    cout<<w.getName();

}
