//WAP to check alphabets using conditional operator
#include<iostream>
using namespace std;
int main(){
    char ch;

    cout<<"enter any character : \n";
    cin>>ch;

    ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? cout<<"alphabet" : cout<<"not alphabet";
        // cout<<ch<<" = is an alphabet \n";
    
}