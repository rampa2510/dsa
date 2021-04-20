#include <iostream>

using namespace std;

int merge(int* a,int s,int e){
  int i = s;
  int m = (s+e)/2;
  int j = m+1;
  int k = s;
  int cnt=0;
  int temp[10000];
  while(i<=m && j<=e){
    if(a[i]<=a[j]){
      temp[k++] = a[i++];
    }else{
      temp[k++] = a[j++];
      cnt += m - i +1;
    }
  }

  while(i<=m) temp[k++] = a[i++];

  while(j<=e) temp[k++] = a[j++];

  for(i=s;i<=e;i++){
    a[i] = temp[i];
  }
  return cnt;
}

int inversionCount(int* a,int s,int e){
  if(s>=e) return 0;
  int m = (s+e)/2;
  int x = inversionCount(a, s, m);
  int y = inversionCount(a, m+1, e);
  int z = merge(a,s,e);
  return x+y+z;
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<inversionCount(a,0,n-1)<<"\n";
  return 0;
}
