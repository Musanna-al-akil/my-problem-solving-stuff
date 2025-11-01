// https://codeforces.com/problemset/problem/318/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   long long n, k;
   cin >> n >> k;
   if(n%2==0){
	   if((n/2)>=k){
	   	cout << (k*2)-1<<endl;
	   }else{
	   	cout << 2*(k-((n/2)))<<endl;
	   }
	}else{
	   if((n/2)+1>=k){
	   	cout << (k*2)-1<<endl;
	   }else{
	   	cout << 2*(k-((n/2)+1))<<endl;
	   }
   }
   
   return 0;
}
