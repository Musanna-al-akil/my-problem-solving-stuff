// https://codeforces.com/problemset/problem/632/C

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<string> vec;

    for(int i = 0;i<t;i++){
    	string temp;

    	cin>> temp;

    	vec.push_back(temp);
    }

    sort(vec.begin(),vec.end(),[](string x,string y){
    	return x+y<y+x;
    });

    for(auto xe: vec){
    	cout << xe <<' ';
    }
    
    return 0;
}
