// https://codeforces.com/problemset/problem/742/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;
   if(n==0){
   	cout << 1<<endl;
   	return 0;
   }

   if(n%4 != 0){
   	cout << 8/(n%4) <<endl;
   }else{
   	cout << 6 <<endl;
   }
   
   return 0;
}
