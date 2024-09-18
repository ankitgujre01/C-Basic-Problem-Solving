//WAP to print the reverse natural numbers.
#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"enter Number : ";
    cin>>num;

    for (int i = num; i > 0; i--)
    {
        cout<<i<<"\t";
    }
    
}