#include <iostream>
#include <vector>
using namespace std;

void print(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseString(char s[],int n){
    int st=0;
    int e = n-1;
    while(st-e){
        swap(s[st++],s[e--]);
    }
}
int getLength(char name []) {
    int count = 0;
    for (int i = 0; name [i] !='\0';i++){
        count++;
    }
    return count;
}  

bool palindrome(string s){
        int start =0;
        int end = s.size()-1;

        while(start<=end){
            if(!isalnum(s[start])) start++;
            else if(!isalnum(s[end])) end--;
            else if(tolower(s[start])!=tolower(s[end])) return false;
            else start++,end--;
        }
        return true;
}

int main(){
    // char s[20] ;
    string w = "A man, a plan, a canal: Panama";
//    cin>>s;
    // int len = getLength(s);
    // reverseString(s,len);
    // print(s,len);
    cout << palindrome(w);
    return 0;
}