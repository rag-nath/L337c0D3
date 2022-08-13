#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
  int ans = 0;
  int sign = (x<0) ? -1 : 1;
  x = abs(x);
  
  while (x>0){
    ans = ans*10 + x%10;
    x /= 10;
  }
  return sign*ans;
}

struct Node
{
  int data;
  struct Node *next;
};

int main(){
  int x = -123;
  cout << reverse(x);
  return 0;
}
