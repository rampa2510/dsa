#include <iostream>

using namespace std;

void printWords(string num,int n,string wordsArr[]){
  if(n==num.length()) return;
  cout<<wordsArr[ (num[n]) - '0' ]<<"\n";
  printWords(num, n+1,wordsArr);
}

void printWords2(string num,int n,string wordsArr[]){
  if(n<0) return;
  printWords2(num, n-1, wordsArr);
  cout<<wordsArr[ (num[n]) - '0' ]<<"\n";
}

int main(){
  string num;
  string wordsArr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  cin>>num;
  printWords2(num,num.length(),wordsArr);
  return 0;
}
