//WAP To check leap year or not
#include<iostream>
using namespace  std;

int main(){

    int year;

    cout<<"Enter year : \n";
    cin>>year;

    (year % 4 == 0)||(year % 4 != 0) ? cout<<"is leap year" : cout<<"is not leap year";
    }
