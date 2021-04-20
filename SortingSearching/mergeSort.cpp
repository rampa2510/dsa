#include <iostream>

using namespace std;

void merge(int* a,int s,int e){
  int midpoint = (s+e)/2; // this is the midpoint
  int i = s; // pointer to first location of 1st array
  int j = midpoint+1; // this is the pointer to 1st location of 2nd array
  int k = s; // this is the pointer to index of temp array
  int temp[100];

  while(i<=midpoint && j<=e){
    /* if(a[i]>a[j]) temp[k++] = a[j++]; */
    /* else temp[k++] = a[i++]; */
    temp[k++] = a[i]>a[j]?a[j++]:a[i++];
  }
  while(i<=midpoint)
    temp[k++] = a[i++];


  while(j<=e)
    temp[k++] = a[j++];
  
  for(int l=s;l<=e;l++){
    a[l] = temp[l];
  }
}

void mergeSort(int* a,int s,int e){
  if(s>=e) return;
  int m = (s+e)/2;
  mergeSort(a, s, m);
  mergeSort(a, m+1, e);

  merge(a,s,e);
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  mergeSort(a,0,n-1);
  for(auto z:a){
    cout<<z<<"\n";
  }
  return 0;
}
