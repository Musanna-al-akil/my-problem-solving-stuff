// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int is = 0;

    for(int i = 0; i<s.size();i++){
    	if(s[i]=='0' && !is){
    		is = 1;
    		continue;
    	}else if(!is && s.size()-1 == i){
    		continue;
    	}
    	else{
    		cout << s[i];
    	}
    }
    
    return 0;
}
