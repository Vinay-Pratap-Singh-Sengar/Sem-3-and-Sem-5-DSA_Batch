#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
    cout<<"Before swapping "<<endl;
    cout<<"Value of A is : "<< a <<endl;
    cout<<"Value of B is : "<< b <<endl;

    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping "<< endl;
    cout<<"Value of A is : "<< a <<endl;
    cout<<"Value of B is : "<< b <<endl;   

    return 0;
}