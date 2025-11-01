// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

const int N = 202;
char s[N];
int len;

int isvowel(char a){
	int b = tolower(a);

	if(b == 'a' || b == 'e' || b=='o' || b == 'u' || b =='i'){
		return 1;
	}

	return 0;

}

int vowelcount(int n){
	if(len-1 < n) return 0;

	int count = isvowel(s[n]);

	count += vowelcount(n+1);
	return count;
}

int main() {
   cin.get(s,N);

   len = strlen(s);

   cout << vowelcount(0)<<endl;
   
   return 0;
}
