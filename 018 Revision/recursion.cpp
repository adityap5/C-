#include <iostream>
using namespace std;


//factorial
int factorial(int n){
    if(n==1) return 1;
    return n * factorial(n-1);
   
}

//Power of 2
int powerOfTwo(int n){
    if(n==0) return 1;
    return 2* powerOfTwo(n-1);
}

//count printing

void countPrinting(int n){
    if(n==0) return ;
    cout<< n<<endl;
    countPrinting(n-1);
   
}

//fibonacci 

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1) + fib(n-2);
}

// climbing stairs
int climbStairs(int n){
    if(n<0) return 0;
    if(n==1) return 1;
    return climbStairs(n-1) + climbStairs(n-2);
}

int main(){
    cout<<"Recursion"<<endl;
    // int ans = factorial(5);
    // int ans = powerOfTwo(5);
    // countPrinting(5);
    int n;
    cin>>n;
    // int ans = fib(n);
    int ans = climbStairs(n);
    cout<< ans << endl;
    return 0;
}