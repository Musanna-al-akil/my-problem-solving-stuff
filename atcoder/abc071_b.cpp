// https://atcoder.jp/contests/abc071/tasks/abc071_b

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<int> vec(26,0);

    for(int i = 0;i<s.size();i++){
    	vec[s[i]-'a']++;
    }

    for(int i = 0; i<26;i++){
    	if(vec[i]==0){
    		cout<<(char)('a'+i)<<endl;
    		return 0;
    	}
    }

    cout << "None"<<endl;
    
    return 0;
}
