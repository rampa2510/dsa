#include <iostream>

using namespace std;

int main(){

    int a[10] = {-4,1,3,-2,6,2,-1,-4,-7},n=sizeof(a)/sizeof(a[0]),cs=0,ms=0;
    for(size_t i=0;i<=n;i++){
        cs+= a[i];
        if(cs<0) cs = 0;
        else if(cs>ms) ms = cs;
    }

    cout<<ms;
    return 0;
}
