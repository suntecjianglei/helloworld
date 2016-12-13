#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
int main() {
   using namespace std;
   srand((unsigned int)time(NULL));
   //srand(1);
   const int NUM = 10;
   int a;
   for(int i = 0; i < NUM; i++) {
      a = rand()%101+200;
      cout << a << " ";
   }
   cout << endl;
   return 0;
}
