#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string* str= new string;
    cout<<"Enter string you want to be reversed: ";
    cin>>*str;
    string ReverseStr= *str;
    reverse(ReverseStr.begin(), ReverseStr.end());
    cout<<ReverseStr;
    return 0;
}