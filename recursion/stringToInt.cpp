#include <iostream>

using namespace std;

void stringToint(string n,int idx,int &r){
  if(n.length()==idx) return;
   r*=10;
   int d = n[idx] - '0';
   r+=d;
  stringToint(n, idx+1, r);
}

void stringToInt2(string n,int idx,int &r){
  if(idx<0) return;
  stringToInt2(n, idx-1, r);
  r*=10;
  int d = n[idx] - '0';
  r+=d;
}

int main(){
  string n;
  int r=0;
  cin>>n;
  stringToInt2(n,n.length()-1,r);
  cout<<r<<"\n";
  return 0;
}
