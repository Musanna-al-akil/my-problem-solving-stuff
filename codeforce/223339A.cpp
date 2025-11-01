// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

void recursion(int n){

	if(n==0){
		return;
	}else{
		recursion(n-1);
	}

	cout << "I love Recursion"<<endl;
	return;
}


int main() {
   int n;
   cin >> n;

   recursion(n);
   return 0;
}
