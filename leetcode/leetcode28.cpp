#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
  for(int i:v){
    cout<<i<<' ';
  }
  cout<<'\n';
}

void printM(vector<vector<int>> m){
  for(vector<int> v:m){
    printV(v);
  }
}

int strStr(string h, string n) {
  int hl=h.length(), nl=n.length();
  for(int i=0;i<hl-nl+1;i++){
    string tmp=h.substr(i,nl);
    if(tmp == n){
      return i;
    }
  }
  return -1;
}

int main()
{
  string h="abcadfa", n="cadfa";
  cout<<strStr(h,n);
  return 0;
}
