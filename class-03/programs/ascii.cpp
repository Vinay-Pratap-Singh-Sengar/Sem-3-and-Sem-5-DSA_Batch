#include <iostream>
using namespace std;

int main(){
    char alphabet;
    cout<<"Enter a character : ";
    cin>>alphabet;
    // int x = alphabet;
    // cout<<"ascii of character " <<alphabet << " is : "<<x;

    cout<<"ascii of character "<< alphabet << " is : "<<(int)alphabet;

    return 0;
}