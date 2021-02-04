#include <iostream>
#include <algorithm>
using namespace std;

void inSort(int* a,size_t n){
    for(size_t i=0;i<n-1;i++){
        for(size_t j=i+1;j>=1;j--){
            if(a[j]<a[j-1]) swap(a[j],a[j-1]);
            else break;
        }
    }
}

int main(){
    int a[5] = {5,2,3,0,1};
    inSort(a, 5);
    for(int c:a) cout<<c<<"\n";
    return 0;
}
