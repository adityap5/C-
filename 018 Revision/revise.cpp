#include <iostream>
using namespace std;

//linear search

int linearSearch(int arr[],int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i; 
        }
    }
    return -1;
}
//binary search

int binarySearch(int arr[], int start,int n ,int key){
    int st = start;
    int end = n-1;

    while(st<=end){
        int mid = st + (end - st)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid]<key){
            st = mid+1;
        }else{
            end = mid -1;
        }
    }
    return -1;
}

int pivotSearch(int arr[],int n){
    int st = 0;
    int end = n-1;
    while(st<end){
        int mid = st + (end - st)/2;
        if(arr[mid] >= arr[0]){
            st = mid +1;
        }else {
            end = mid;
        }
    }
    return st;
}
//Search in a rotated & Sorted array
int SearchRotated(int arr[],int n,int k){
    int p = pivotSearch(arr,n);
    if(k >= arr[p]){
        return binarySearch(arr,p-1,n,k);
    }else{
        return binarySearch(arr,0,p-1,k);
    }
}
//Square root

int sqrt(int x){
    int s = 0;
    int e = x-1;
    long long int ans = 0;
    while(s<=e){
        long long int mid = s +( e-s) /2;
        if(mid*mid < x){
            ans = mid;
            s = mid + 1;
        }else if(mid*mid > x){
            e = mid -1;
        }else{
            return mid;
        }
    }
    return ans;
}

int main() {
    // int arr[] = {10, 25, 30, 45, 50};
    int arr[] ={7,9,1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 50;

    // int index = linearSearch(arr, n, key);
    // int index = binarySearch(arr,0, n, key);
    // int ele = pivotSearch(arr,n);
    int ele = sqrt(8);

    cout<<ele<<endl;

    return 0;
}
