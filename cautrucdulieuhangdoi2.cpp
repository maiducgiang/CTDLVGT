#include<bits/stdc++.h>
#include<queue>
using namespace std;
void solve(){
	queue <int> a;
	int n;
	string s;
	cin >> n;
	while(n--){
		scanf("\n");
		cin >> s;
		if(s == "PUSH"){
			int x;
			cin >> x;
			a.push(x);
		}
		if(s == "POP"){
			if(!a.empty()) a.pop();
		}
		if(s == "PRINTFRONT"){
			if(!a.empty()) cout << a.front() <<endl;
				else cout << "NONE" <<endl;
		}
	}
	
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}


