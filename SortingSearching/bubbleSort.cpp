#include <iostream>

using namespace std;

void swapEle(int *a,size_t i){
    int t = a[i];
    a[i] = a[i+1];
    a[i+1] = t;
}

void bubbleSort(int* a,size_t n){
    for(size_t i=0;i<n;i++){
        for(size_t j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]) swapEle(a,j);
        }
    }
}

int main(){
    //int a[5] = {5,4,3,2,1};
    int a[5] = {5,2,3,0,1};
    bubbleSort(a,5);
    for(int c:a) cout<<c<<"\n";
    return 0;
}
