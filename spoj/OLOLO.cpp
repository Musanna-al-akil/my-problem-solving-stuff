// https://www.spoj.com/problems/OLOLO/en/

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int x = 0;

    for(int i = 0;i<t;i++){
    	int temp;cin>>temp;

    	x ^= temp;
    }
    
    cout << x<<endl;
    return 0;
}
