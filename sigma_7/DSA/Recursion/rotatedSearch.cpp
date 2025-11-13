#include<iostream>
using namespace std;
// int search(int arr[], int si, int ei, int target){
//     if(si>ei) return -1;
//     int mid=si+(ei-si)/2;
//     if(arr[mid]==target) return mid;
//     if(arr[si]<=arr[mid]){
//         if(arr[si]<=target && target<=arr[mid]){
//             search(arr, si, mid-1, target);
//         } else{
//             search(arr, mid+1, ei, target);
//         }
//     } else{
//         if(arr[mid]<=target && target<=arr[ei]]){
//             search(arr, mid+1, ei, target);
//         } else{
//             search(arr, si, mid-1, target);
//         }
//     }
// }

int rotatedSearch(int arr[], int si, int  ei, int tar){
    if(si>ei) return -1;
    int mid=si+(ei-si)/2;
    if(arr[mid]==tar) return mid;
    if (arr[si]<=arr[mid]){
        if(arr[si]<=tar && tar<=arr[mid]){
            rotatedSearch(arr, si, mid-1, tar);
        } else{
            rotatedSearch(arr, mid+1, ei, tar);
        }
    } else{
        if(arr[mid]<=tar && tar<=arr[ei]){
            rotatedSearch(arr, mid+1, ei, tar);
        } else{
            rotatedSearch(arr, si, mid-1, tar);
        }
    }
}
int main(){
    int arr[]={4,5,0,1,2};
    cout<<rotatedSearch(arr, 0, 4, 0);
    return 0;
}