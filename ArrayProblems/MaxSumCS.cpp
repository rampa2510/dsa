#include <iostream>

using namespace std;

int main(){
    int cs[6],a[6] = {1,2,-4,5,6,-1},n=6,currSum=0,ms=0,l=-1,r=-1;

    cs[0] = a[0];
    // calculate cumualative sum for arr a which is cs[i] = cs[i-1] + a[i]
    for(size_t i=1;i<n;i++) cs[i] = cs[i-1] + a[i];


    for(size_t i=0;i<n;i++){
        for(size_t j=i;j<n;j++){

            // this is the main formula
            currSum = cs[j] - cs[i-1];

            if(ms<currSum){
                ms = currSum;
                l = i;
                r = j;
            }
        }
    }


    for(size_t i =l;i<=r;i++) cout<<a[i];

    return 0;
}
