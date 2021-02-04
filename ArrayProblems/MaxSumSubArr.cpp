#include <iostream>

using namespace std;

int main(){
    int a[6] = {1,2,3,4,5,-1},n=6,l=-1,r=-1,ms=0,currSum=0;

    for(size_t i=0;i<n;i++){
        for(size_t j=i;j<n;j++){
            currSum=0;
            for(size_t k=i;k<=j;k++) currSum+=a[k];
            if(currSum>ms){
                ms = currSum;
                l = i;
                r = j;
            }
        }
    }
    

    for(size_t i =l;i<=r;i++) cout<<a[i];

    return 0;
}

