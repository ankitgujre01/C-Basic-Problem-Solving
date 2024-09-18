//Wap to check whether a character is alphabet, digit or special character

#include<iostream>
using namespace std;
int main(){
    char ch;

    cout<<"enter character :"<<"\n";
    cin>>ch;

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout<<ch<<" = is an Alphabet \n";
    }else if (ch >= '0' && ch <= '9')
    {
        cout<<ch<<" = is a Digit \n";
    }else{
        cout<<ch<<" =is a special character";
    }
    return 0;
}