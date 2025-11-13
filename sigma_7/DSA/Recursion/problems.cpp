#include<iostream>
#include<cstring>
using namespace std;
int tilingProb(int n){ //2 x n
    if (n==0 || n==1) return 1;
    int ans_1=tilingProb(n-1);
    int ans_2=tilingProb(n-2);
    int finalAns=ans_1+ans_2;
    return finalAns;
}
void removeDuplicates(string str, string ans, int i, int map[26]){
    if(i==str.size()){
        cout<<"ans: "<<ans<<endl;
        return;
    }
    int mapIdx=str[i]-'a';
    if(map[mapIdx]==true){
        removeDuplicates(str, ans, i+1, map);
    } else{
        map[mapIdx]=true;
        removeDuplicates(str, ans+str[i], i+1, map);
    }
}
int friendsPairing(int n){
    if(n==1 || n==2) return n;
    
    return friendsPairing(n-1)+(n-1)*friendsPairing(n-2);
}
void binaryString(int n, int lastplace, string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(lastplace!=1){
        binaryString(n-1, 0, ans+"0");
        binaryString(n-1, 1, ans+"1");
    } else{
        binaryString(n-1, 0, ans+"0");
    }
}
int main(){
    cout<<tilingProb(5)<<endl;
    string str="aaabbbbb";
    string ans="";
    int map[]={false};
    removeDuplicates(str, ans, 0, map);

    cout<<friendsPairing(4)<<endl;

    binaryString(3, 0, ans);
    return 0;
}