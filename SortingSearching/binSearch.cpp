#include <iostream>

using namespace std;

bool binSearch(int* a,int h,int l,int k){
    int m;
    while(h>l){
        m = (h+l)/2;
        if(a[m]==k) return true;
        else if(a[m]>k){
            h = m-1; 
        }else{
            l = m+1;
        }
    }

    return false;

}

int main(){
    int a[5] = {1,2,3,4,5};

    bool b = binSearch(a,4,0,6);
    cout<<b;
    return 0;
}
