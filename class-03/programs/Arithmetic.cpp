#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"Enter num1 : "<<endl;
    cin>>num1;

    cout<<"Enter num2 : "<<endl;
    cin>>num2;

    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    int rem = num1 % num2;

    cout<<"Addition is : "<<sum<<endl;
    cout<<"Subtraction is : "<<sub<<endl;
    cout<<"Multiplication is : "<<mul <<endl;
    cout<<"Division is : "<<div<<endl;
    cout<<"Remainder is : "<<rem <<endl;


    return 0;
}