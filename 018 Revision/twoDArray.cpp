#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool linearSearchinTwoDArray(int arr[][3],int target ){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == target) return true;
        }
    }
    return false;
}
vector <int> rowSum(int arr[][3]){
    vector <int> ans;
    int sum = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+= arr[i][j];
        }
        ans.push_back(sum);
        sum =0;
    }
    return ans;
}
int largestRowSum(int arr[][3]){
    int ans = 0;
    int sum = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+= arr[i][j];
        }
        ans = max(ans, sum);
        sum =0;
    }
    return ans;
}
void printV(vector<int> s){
    int n = s.size();
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
}

vector <int> spiralPrint(vector<vector<int>> matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> ans;
    int startingRow =0;
    int count = 0;
    int total = row*col;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;
    while(count<total){
        for(int i = startingCol; count < total && i<=endingCol; i++) {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        for(int i = startingRow; count < total && i<=endingRow; i++) {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        for(int i = endingCol; count < total && i>=startingCol; i--) {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        for(int i = endingRow; count < total && i>=startingRow; i--) {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;

}

vector<int> wavePrint(int arr[][3]){
    vector<int> ans;
    for(int i=0;i<3;i++){
        if (i % 2 == 0) {
            for(int j=0;j<3;j++){
                ans.push_back(arr[j][i]);
            }
        } else {
        
            for(int j=3-1;j>=0;j--){
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}
int main(){
    int arr[3][3] ={};
    
    //taking input row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>> arr[i][j];
        }
    }
    // //taking input col wise
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>> arr[j][i];
    //     }
    // }

    //print 
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<< arr[i][j]<< " ";
    //     }
    //     cout<< endl;
    // }
    // vector<int> rowSumAns = rowSum(arr);
    // printV(rowSumAns);
    // cout << linearSearchinTwoDArray(arr,4);
    // cout<< largestRowSum(arr);
    vector<int> wave = wavePrint(arr);
    printV(wave);
    // cout << (1 % 2 == 0) << endl;
    return 0;
}