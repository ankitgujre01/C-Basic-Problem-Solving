#include<iostream>
using namespace std;
//Wap to print swap three numbers.
int main(){
    double num1, num2, num3, temp;

    cout<<"enter first number : \n";
    cin>>num1;

    cout<<"enter seecond number : \n";
    cin>>num2;

    cout<<"enter third number : \n";
    cin>>num3;

    cout<<"Befor Swapping \n"<<num1<<"\t"<<num2<<"\t"<<num3;

    temp = num1;
    num1 = num2;
    num2 = num3;
    num3 = temp;

    cout<<"\n After Swapping \n"<<num1<<"\t"<<num2<<"\t"<<num3;

}