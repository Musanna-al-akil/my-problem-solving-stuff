// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

long long fact(int n){
	if(n==0)return 1;

	return n*fact(n-1);

}


int main() {
   int n;
   cin >> n;

   cout << fact(n)<<endl;
   
   return 0;
}
