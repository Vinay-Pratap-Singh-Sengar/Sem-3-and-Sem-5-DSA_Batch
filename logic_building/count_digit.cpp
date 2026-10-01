#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number :" <<endl;
    cin>>num;

    int count = 0;
    while(num > 0){
        num = num / 10;
        count++;
    }
    cout<<"Total digit present in number is : "<< count<<endl;
    return 0;
}