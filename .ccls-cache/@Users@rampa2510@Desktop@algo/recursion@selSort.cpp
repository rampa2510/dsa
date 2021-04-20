#include <iostream>
#include <algorithm>

using namespace std;

void selSort(int* a,int n){
  if(n==1) return;
  int idx = 0;
  for(int i=1;i<n;i++){
    if(a[idx]<a[i]) 
      idx = i;  
    
  }
  /* swap(a[idx],a[n-1]); */
  if(idx!=n-1){
  a[idx] = a[idx] ^ a[n-1];
  a[n-1] = a[idx] ^ a[n-1];
  a[idx] = a[idx] ^ a[n-1];
  }
  /* for(int i=0;i<4;i++) cout<<a[i]<<endl; */
  selSort(a,n-1);
}

int main(){
  int n;
  cin>>n;
  int a[n];

  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  selSort(a,n);
  for(auto z:a){
    cout<<z<<"\n";
  }

  return 0;
}
