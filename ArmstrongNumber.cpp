//WAP to find the given number is Armstrong or not.
#include<iostream>
using namespace std;
int main(){
    int num;
    int sum = 0;

    cout<<"Enter Numbers : \n";
    cin>>num;          //153

    int temp = num;

    while (num != 0)
    {
        int reminder = num % 10;
        sum = sum + reminder*reminder*reminder;
        num /= 10;   //num = num/10;
    }

    if (temp == sum)
    {
        cout<<"Armstrong Number : "<<sum;
    }else{
        cout<<"Not Armstrong Number : "<<sum;
    }
    
    
}