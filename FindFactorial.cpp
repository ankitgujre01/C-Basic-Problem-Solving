//WAP to find factorial of number.

#include<iostream>
using namespace std;
int main(){
    long num;
    long factorial = 1;

    cout<<"Enter the Number to Calculate factorial : ";
    cin>>num;

    while (num >= 1)
    {
        factorial = factorial * num;
        num = num - 1;
    }
    cout<<"Factorial = "<<factorial;
}