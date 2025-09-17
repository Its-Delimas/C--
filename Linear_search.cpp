#include <iostream>
using namespace std;

int LinearSearch (int arr[],int n,int key){
    for (int i=0;i<n;i++){
        if (arr[i]==key) return 1;
    }

    return -1; //not found
}

int main(){

    int arr[]={10,20,30,40,50};
    int n=5, key=30;

    int pos=LinearSearch(arr,n,key);
    if(pos != -1){
        cout<<"Found at index "<<pos<<endl;
    }else{
        cout<<"Not found "<<endl;
    }

    return 0;
}

/*
In Linear Search, we iterate over all the elements of the array and check if it the current element is equal to the target element.
If we find any element to be equal to the target element, then return the index of the current element.
Otherwise, if no element is equal to the target element, then return -1 as the element is not found.
Linear search is also known as sequential search.


*/