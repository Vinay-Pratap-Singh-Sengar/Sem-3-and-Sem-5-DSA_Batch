#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 15;
    int c = 12;

    if(a > b && a > c){
        cout<<a <<" is greater"<<endl;
    }
    else if(b > a && b > c){
        cout<<b<<" B is greater"<<endl;
    }
    else{
        cout<<c<<" C is greater"<<endl;
    }
    return 0;
}