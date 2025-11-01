// https://codeforces.com/problemset/problem/236/B

// Author: Musanna Al Akil


#include <bits/stdc++.h>
using namespace std;

const long long mod = 1073741824;
const int max = 100;

const int maxmax = 100* 100 * 100;


int main() {
	vector<int> div(maxmax,0);


	for(int i = 1; i<=maxmax;i++){
		for (int j = i; j<=maxmax;j += i){
			div[j]++;
		}
	}


   int a,b,c;
   cin >> a>>b>>c;

   long long result = 0;

   for(int i = 1;i<=a;i++){
	   	for(int j = 1;j<=b;j++){
		   	for(int k = 1;k<=c;k++){
		   		result = ((div[i*j*k]%mod) + (result%mod))%mod;

		   }
	    }
    }

    cout << result<<endl;

   
   return 0;
}
