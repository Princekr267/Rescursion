#include<iostream>
using namespace std;
int factorial(int num){
    if (num==0) return 1;
    return num*factorial(num-1);
}
void decrno(int num){
    if (num==0) return;
    cout<<num<<" ";
    decrno(num-1);
}
int sum(int num){
    if (num==1) return 1;
    return num+sum(num-1);
}
int fibb(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //cout<<fibb(n-1)+fibb(n-2)<<" ";
    return fibb(n-1)+fibb(n-2);
}
bool isSorted(int *arr, int size, int i){
    // for(int i=1; i<size; i++){
    //     if(arr[i]<arr[i-1]){
    //         return false;
    //     }
    // }
    // return true;
    if(i==size-1) {
        if(arr[i]<arr[i-1]){
            return false;
        }
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr, size-1, i+1);
}
int main(){
    cout<<factorial(6)<<endl;
    decrno(18);
    cout<<endl;
    cout<<sum(5)<<endl;
    cout<<fibb(7)<<endl;
    int arr[]={1,2,3,4,1};
    int size=sizeof(arr)/sizeof(int);
    cout<<isSorted(arr, size, 0)<<endl;
    return 0;
}