#include<iostream>
#include<vector>
using namespace std;
int firstocc(vector <int> vec, int i, int target){
    if(i==vec.size()){
        return -1;
    }
    if(vec[i]==target){
        return i;
    }
    return firstocc(vec, i+1, target);
}
int lastocc(vector <int> arr, int i, int target){
    if(i==arr.size()) return -1;
    int found=lastocc(arr, i+1, target);
    if (found==-1){
        if (arr[i]==target){
            return i;
        }
    }
    return found;
}
int power(int x, int n){
    if(n==0) return 1;
    int halfpow=power(x, n/2);
    int halfsq=halfpow*halfpow;
    if(n%2!=0){
        return x*halfsq;
    }
    return halfsq;
}
int main(){
    vector <int> vec={1,2,4,4,5,2,4,5,1,6,7};
    cout<<firstocc(vec, 0, 60)<<endl;
    cout<<lastocc(vec, 0, 4)<<endl;
    cout<<power(3, 3);
    return 0;
}