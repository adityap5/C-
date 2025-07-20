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
int main() {
    vector<int> arr = {1, 2, 3, 4};
    int m = 1;
    // vector<int> reversedArr = reverse(arr);
    vector<int> reversedArr = reversePosition(arr,m);
    for (int i : reversedArr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
