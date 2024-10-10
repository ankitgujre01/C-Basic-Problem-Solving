#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,10,15,20,25,30};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < len; i++){
        cout<<arr[i]<<"\t";
    }
}
