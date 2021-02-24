#include<iostream>

using namespace std;

void selSort(int* a,int n){
    int m,t;
    for(size_t i=0;i<n;i++){
        m = i;
        for(size_t j=i+1;j<=n;j++){
            if(a[m]>a[j]) m = j;
        }
        t = a[m];
        a[m] = a[i];
        a[i] = t;
    }
}

int main(){

    //int a[5] = {5,4,3,2,1};

    int a[5] = {5,2,3,0,1};

    selSort(a, 4);

    for(int c:a){
        cout<<c<<"\n";
    }

    return 0;
}
