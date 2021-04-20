#include<iostream>
#include <algorithm>

using namespace std;

void insSort(int* a,int n){
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j>=0;j--){
      if(a[j]<a[j-1]) swap(a[j], a[j-1]) ;
      else break;
    }
  }
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  insSort(a, n);
  for(auto z:a){
    cout<<z<<"\n";
  }
  return 0;
}
