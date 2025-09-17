#include <iostream>
using namespace std;

int main (){

    //arrays introduction

    int numbers[5];

    //input
    cout<<"Enter the five digits : "<<endl;
    for(int i=0;i<5;i++){
        cin>>numbers[i];
    }
    //output
    cout<<"The numbers entered are : "<<endl;
    for(int i=0;i<5;i++){
        cout<<numbers[i]<<" "<<endl;
    }
    return 0;
}