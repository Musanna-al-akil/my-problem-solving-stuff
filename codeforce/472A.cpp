// https://codeforces.com/problemset/problem/472/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    if(t%2==0){
    	cout << 8 << ' '<<t-8<<endl;    
    }else{
    	cout << 9 << ' '<<t-9<<endl;    

    }


    
    return 0;
}
