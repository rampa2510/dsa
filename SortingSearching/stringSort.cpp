#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool compare(string s1,string s2){
	int l1 = s1.length()-1;
	string sub = s2.substr(0,l1);
	if(sub==s1) return true;
  
}

int main() {
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	sort(a,a+n,compare);
	for(auto z:a)
		cout<<z;
	return 0;
}
