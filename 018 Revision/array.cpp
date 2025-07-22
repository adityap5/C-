#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a vector and return a new vector
vector<int> reverse(vector<int> v) {
    
    int s = 0;
    int e = v.size()-1;
    
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}
//Reverse from given position
vector<int> reversePosition(vector<int> vec, int m){
    int s = m;
    int e = vec.size()-1;
    while(s<e){
        swap(vec[s++],vec[e--]);
    }
    return vec;
}

//Merge two sorted array

void merge(int arr1[],int m,int arr2[],int n,int arr3[]){
    int p1 = 0;
    int p2 = 0;
    int k =0;
    while(p1<m && p2<n ){
        if(arr1[p1]<arr2[p2]){
            arr3[k++] = arr1[p1++];
        }else{
            arr3[k++] = arr2[p2++];
        }
    }
    while(p1<m){
        arr3[k++] = arr1[p1++];
    }
    while(p2<n){
        arr3[k++] = arr2[p2++];
    }
}
//print array
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//move zeros

void zeros(int arr[],int n){
    int i=0;
    int j = i+1;

    while(i<n-1 && j < n-1){
        if(arr[i] == 0 && arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }else if(arr[i] == 0 && arr[j]==0){
            j++;
        }else{
            i++;
            j++;
        }
    }
}

//Rotate an array kth position

void rotate(int arr[],int n,int k){
    int arr2[n] ={0,0,0,0,0,0,0};

    for(int i=0;i<n;i++){
            arr[(i+k) % n] =arr[i];
    }
    print(arr2,7);
    arr = arr2;
}
//check array is rotated and sorted
bool checker(int arr[],int n){
    int count =0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]) count++;

    return count <=1;
}
//Add to Array

vector<int>  adder(vector<int> arr1,int n,vector<int> arr2,int m){
    int i=n-1;
    int j=m-1;
    int carry=0;
    vector<int> ans;

    while(i>=0&&j>=0){
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1+val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0){
        int sum = arr1[i]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum = arr1[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
   
    return reverse(ans);
}
int main() {
    // vector<int> arr = {1, 2, 3, 4};
    int arr[7] = {7,1,8,3,4,5,6};
    int arr1[5] = {1,3,5,7,9};
    int arr2[4] = {2,4,6,8};
    int arr3[9] = {0,0,0,0,0,0,0,0,0};
    int m = 1;
    // vector<int> reversedArr = reverse(arr);
    // vector<int> reversedArr = reversePosition(arr,m);
    // merge(arr1,5,arr2,4,arr3);
    // zeros(arr,6);
    // rotate(arr,7,3);
    // cout<< checker(arr,7);
    vector<int> arr4={1,2,3,4};
    vector<int> arr5={6};
    vector<int> result = adder(arr4,4,arr5,1);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    // print(arr,7);

    return 0;
}
