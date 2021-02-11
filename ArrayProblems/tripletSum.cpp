#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[1000],n,k,l,r,s;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	sort(a,a+n);
	for(int i=0;i<n-1;i++){
		l = i+1;
		r = n-1;
		while(l<r){
			s = a[i] + a[l] + a[r];
			if(s==k){
				cout<<a[i]<<", "<<a[l]<<" and "<<a[r]<<endl;
				l++;
				r--;
			}else if(s>k) r--;
			else l++;
		}
	}
	return 0;
}
