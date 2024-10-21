#include<iostream>
using namespace std;
int main(){
    int Number, lastNum;

    cout<<"Enter any Number :\n";
    cin>>Number;

    lastNum = Number%10;

    cout<<"The last digit of Entered Number is:\n"<<lastNum;

    while(Number >= 10){
        Number = Number/10;
    }

    cout<<"\nThe first digit of entered number is :\n";
    cout<<Number;

    int sum = Number + lastNum;
    cout<<"\nSum of first digit and last digit of entered number :\n";
    cout<<sum;

}






