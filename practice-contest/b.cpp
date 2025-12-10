// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
    	string s;

    	cin >> s;
    	int size = s.size();
    	if(size ==1){
    		cout << 1 << '\n';
    		continue;
    	}
    	auto star = s.find("**") ;
    	auto a1 = s.find(">*");
    	auto a2 =  s.find("*<");
    	auto a3 = s.find("><");
    	if(star!= string::npos || a1 != string::npos || a2 != string::npos || a3!= string::npos){
    		cout << -1<<'\n';
    		continue;
    	}

    	int lt1 = 0;
    	int rt = 0;
    	int maxlt = 0;
    	int maxrt = 0;
    	for(int i = 0;i <size-1;i++){
    		if(s[i]=='<' and (s[i+1]=='<' or s[i+1]=='*') ){
    			lt1++;
    			maxlt = max(maxlt,lt1+1);
    		}else{
    			lt1 = 0;
    		}
    		if((s[i]=='>' or s[i]=='*') and s[i+1]=='>'){
    			rt++;
    			maxrt = max(maxrt,rt+1);
    		}else{
    			rt=0;
    		}
    	}
    	int maxcheck = max(maxlt,maxrt);
    	if(maxcheck>0){
    		cout << maxcheck<<'\n';
    		continue;
    	}else{
    		cout<< 1 << '\n';
    	}

    	// cout << 'p'<<'\n';
    }
    
    return 0;
}
