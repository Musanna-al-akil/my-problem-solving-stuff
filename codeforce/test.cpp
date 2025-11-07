// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;


int main() {

  set<int> b;
  b.insert(5);
  b.insert(5);
  b.insert(1);
  b.insert(4);
  b.insert(2);
  b.erase(5);

  for(auto xe:b ){
    cout << xe<<' ';
  }

  set<int>::iterator se = b.find(1);

  cout << *se<<endl;
    se++;
      se++;
  cout << *se<<endl;
   
   
   return 0;
}
