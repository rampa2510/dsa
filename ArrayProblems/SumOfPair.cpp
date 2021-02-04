#include <iostream>

using namespace std;

int main(){
    int a[5] = {1,2,3,4,5},s=0,n=5,l=0,r=4,k=7;
    while(l<r){
        s = a[l] + a[r];
        //cout<<s<<"\n";
        if(s==k) break;
        else if(s>k) r--;
        else l++;
    }
    if(l==r) cout<<"No element";
    else cout<<l<<" "<<r<<"\n";
    return 0;
}
