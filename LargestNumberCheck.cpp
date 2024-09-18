//WAP TO find the largest number among three
#include<iostream>
using namespace std;
int main(){
    double Num1, Num2, Num3;

    cout<<"Enter three Numbers : \n";
    cin>>Num1>>Num2>>Num3;

    if (Num1 >= Num2 && Num1 >= Num3)
    {
        cout<<Num1<<" is the Largest Number.";
    }else if (Num2 >= Num1 && Num2 >= Num3)
    {
        cout<<Num2<<" is the Largest Number.";
    }else 
    {
        cout<<Num3<<" is the Largest Number.";

}
}