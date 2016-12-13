#include "stacktp.h"
#include<iostream>
#include<string>
int main() {
  using namespace std;
  Stack<int> s1;
  Stack<int> s2;
  s1.push(3);
  s1.push(2);
  s1.show();
  int n = 15;
  while(n != 0) {
     while(n != 0) {
       s2.push(n%2);
       n /= 2;
     }
     cout << "the num binary is: ";
     while(!s2.isEmpty()) {
       s2.pop(n);
       cout << n;
     }
     cout << endl;
     cout << "input num:(0 end) ";
     cin >> n;

  }
  return 0;
}
