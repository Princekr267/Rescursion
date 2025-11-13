#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[], int si, int mid, int ei){
    vector<int> temp;
    int i=si, j=mid+1;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        } else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }
    for(int k=si, x=0; k<=ei; k++){
        arr[k]=temp[x++];
    }
}
void mergeSort(int arr[], int si, int ei){
    if (si>=ei) return;
    int mid=si+(ei-si)/2;
    mergeSort(arr, si, mid);  //left
    mergeSort(arr, mid+1, ei);  //Right
    merge(arr, si, mid, ei);
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={6, 3, 7, 5, 2, 4};
    mergeSort(arr, 0, 5);
    print(arr, 6);
    return 0;
}