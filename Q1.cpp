#include<iostream>
using namespace std;
int findsum(int curr,int last){
    if(curr>last) return 0;
    if(curr%2==0) return findsum(curr+1,last);
    return curr+findsum(curr+2,last);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<findsum(a,b);
}