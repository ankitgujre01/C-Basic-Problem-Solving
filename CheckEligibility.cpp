#include<iostream>
//WAP to check eligible for vote or not
using namespace std;
int main(){
    int age;

    cout<<"Enter your Age : \n";
    cin>>age;

    if (age < 18)
    {
        cout<<"You are not Eligible for Voting";
    }else{
        cout<<"You are Eligible for vote.";
    }
    
}