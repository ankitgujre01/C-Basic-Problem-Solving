#include<iostream>
using namespace std;
//Wap to print swap two numbers.
int main(){
    int num1, num2, temp;

    cout<<"enter first number : \n";
    cin>>num1;

    cout<<"enter seecond number : \n";
    cin>>num2;

    cout<<"Befor Swapping \n"<<num1<<"\t"<<num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"\n After Swapping \n"<<num1<<"\t"<<num2;

}