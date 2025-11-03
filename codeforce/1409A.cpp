// https://codeforces.com/problemset/problem/1409/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;

   while(t--){
   	int a,b;

   	cin>> a>>b;

   	int diff = abs(a-b);

   	int count = ceil(diff/10.0);

   	cout << count<<endl;
   }
   
   return 0;
}
