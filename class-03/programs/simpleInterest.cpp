#include<iostream>
using namespace std;

int main(){
    int p = 8888;
    int r = 5;
    int t = 2;

    // float si = p * r * t / 100.0;

    float si = (float) p * r * t / 100;

    cout<<"simple interest is : "<<si;
    return 0;
 
}