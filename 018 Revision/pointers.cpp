#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int num =9;
    cout<<"address of nums is"<<&num<<endl; //address &

    int *ptr = &num;  //pointing towards the address to get the value
    cout<< *ptr<<endl;

    int a = *ptr;
    // int b = ptr;
    a++;
    cout<<"a is: "<<a<<endl;
    // cout<<"b is: "<<b<<endl;
    cout<<"num is: "<<num<<endl;

    //copying a pointer
    int *q = ptr;
    cout<< *q;

    int arr[10];

    int *arrptr = &arr[0];

    cout<< *arrptr;
    return 0;
}