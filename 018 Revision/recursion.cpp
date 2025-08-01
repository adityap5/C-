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

//is sorted
bool isSorted(int arr[],int size){
    if(size==0 || size==1) return true;
    if(arr[0]>arr[1]) return false;
    else{
        return isSorted(arr+1,size-1);
    }
}
//array sum
int arraysum(int arr[],int size){
    if(size==0)return 0;
    int ans = arr[0] + arraysum(arr+1,size-1);
    return ans;
}
//linear search
int linearsearch(int arr[],int size,int key){
    if(size==0)return false;
    if(arr[0]==key)return true;
    else{
        return linearsearch(arr+1,size-1,key);
    }
}
//binary search
bool binarysearch(int arr[],int s,int e,int key){
    if(s>e)return false;
    int mid = s + (e-s)/2;
    if(arr[mid]==key)return true;
    if(arr[mid]<key)return binarysearch(arr,mid+1,e,key);
    else return binarysearch(arr,s,mid-1,key);
}
int main(){
    cout<<"Recursion"<<endl;
    // int ans = factorial(5);
    // int ans = powerOfTwo(5);
    // countPrinting(5);
    // int n;
    // cin>>n;
    // int ans = fib(n);
    // int ans = climbStairs(n);
    // cout<< ans << endl;


    int arr[5] = {1,2,6,4,5};
    int size = 5;
    // bool ans = isSorted(arr,size);
    // cout<< ans << endl;
    // int ans = arraysum(arr,size);
    // cout<< ans << endl;
    int key = 6;
    // bool ans = linearsearch(arr,size,key);
    bool ans = binarysearch(arr,0,size-1,key);
    cout<< ans << endl;

    return 0;
}