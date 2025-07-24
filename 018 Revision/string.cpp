#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void printV(vector<char> s){
    int n = s.size();
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
}
void printString(string& s){
    int n = s.size();
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
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

void reverseWordsInPlace(vector<char>& s) {
    int start = 0;

    for (int i = 0; i <= s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }
}

char getMaxOccurance(string& s){
    int arr[26]={};
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        int num=0;
        if(ch>='a'&&ch<='z'){
            num = ch -'a';
        }else{
            num =ch -'A';
        }
        arr[num]++;
    }
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            maxi = arr[i];
            ans =i;
        }
    }
    char finalAns = ans + 'a';
    return finalAns;
}
void replaceSpace(string& s){
    char rep ='g';
    int n =s.size();
    for(int i=0;i<n;i++){
        if(s[i] == ' ' ){
            s[i] = rep;
        }
    }
}
void removeAllOccurance(string& s, string& part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part), part.length());
    }
}
int stringCompression(vector<char>& chars){
    int i=0;
    int n =chars.size();
    int ansIndex =0;
    while(i<n){
        int j = i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }

        chars[ansIndex++] = chars[i];

        int count = j-i;
        if(count>1){
            string cnt = to_string(count);
            for(char ch: cnt){
                chars[ansIndex++] = ch;
            }
        }
        i=j;
    }
    return ansIndex;
}  
int main(){
    // char s[20] ;
    string w = "My name is Bhatura";
    // vector<char> s = {'t','h','e',' ','b','l','u','e'};
    // string k ="HelloHell";
//    cin>>s;
    // int len = getLength(s);
    // reverseString(s,len);
    // print(s,len);
    // cout << palindrome(w);
    // reverseWordsInPlace(s);
    // printV(s);
    // cout<<getMaxOccurance(k);
    // char input[100];

    // cout<<"Enter your text"<<endl;
    // cin.getline(input,100); //is a function used to read a line of text (including spaces) from the standard input (cin) into a character array.
    // cout<<input<<endl;
    // //custom delimeter with String
    // char ip[100];

    // cout<<"Enter your text"<<endl;
    // cout<<"Enter your text (use '#' to stop)" <<endl;
    // cin.getline(ip,100,'#');
    // cout<<ip<<endl;

    // //custom delimeter with String
    // string anotherInput;
    // cout<<"Enter your text (use '#' to stop)" <<endl;
    // getline(cin,anotherInput,'#');
    // cout<<anotherInput<<endl;
    // replaceSpace(w);

  
    string g ="daabcbaabcbc";
    string part = "abc";
    removeAllOccurance(g,part);
    printString(g);
    
    return 0;
}