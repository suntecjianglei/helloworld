#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<stdlib.h>
using namespace std;
typedef int KeyType;
typedef pair<KeyType,string> Pair;
typedef multimap<KeyType,string> MapCode;
int main() {
   MapCode codes;
   codes.insert(Pair(415,"san"));
   codes.insert(Pair(510,"oak"));
   codes.insert(Pair(718,"broo"));
   codes.insert(Pair(718,"std"));
   codes.insert(Pair(415,"ra"));
   codes.insert(Pair(510,"qw"));
   cout << "number of city with code is 415: " << codes.count(415) << endl;
   cout << "number of city with code is 718: " << codes.count(718) << endl;
   cout << "number of city with code is 510: " << codes.count(510) << endl;
   MapCode::iterator iter;
   for(iter = codes.begin(); iter != codes.end(); ++iter) {
      cout << iter->first << "," << iter->second << endl;
   }
   pair<MapCode::iterator,MapCode::iterator> range;
   range = codes.equal_range(718);
   cout << "city with 718 is:" << endl;
   for(iter = range.first; iter != range.second; ++iter) {
      cout << iter->second << endl;
   }
   return 0;
}
