//WAP To calculate the total marks ,percentage, division student based on subjects
#include<iostream>
using namespace std;
int main(){
    float Maths, Physics, Chemistry, English, Hindi;

    cout<<"Enter Maths Marks : \n";
    cin>>Maths;

    cout<<"Enter Physics Marks : \n";
    cin>>Physics;

    cout<<"Enter Chemistry Marks : \n";
    cin>>Chemistry;

    cout<<"Enter English Marks : \n";
    cin>>English;

    cout<<"Enter Hindi Marks : \n";
    cin>>Hindi;

    float totalMarks = Maths + Physics + Chemistry + English + Hindi;
    float percentage = totalMarks / 5;

    if (percentage <= 100 && percentage >= 80)
    {
        cout<<"1st Division = "<<percentage;
    }else if (percentage < 80 && percentage >= 60)
    {
        cout<<"2nd Division = "<<percentage;
    }else{
        cout<<"fail = "<<percentage;
    }
    
    
}