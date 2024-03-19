#include<iostream>
using namespace std;
bool ispoeroftwo(int n){
    if(n==1) return true;
    if(n%2==0) return ispoeroftwo(n/2);
    else return false;
}
int main(){
    int a;
    cin>>a;
    if(ispoeroftwo(a)==1) cout<<"yes";
    else cout<<"no";
}