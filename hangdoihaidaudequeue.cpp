#include<bits/stdc++.h>
#include<deque>
using namespace std;
void solve(){
	deque <int> a;
	int n;
	string s;
	cin >> n;
	while(n--){
		scanf("\n");
		cin >> s;
		if(s == "PUSHBACK"){
			int x;
			cin >> x;
			a.push_back(x);
		}
		if(s == "PUSHFRONT"){
			int x;
			cin >> x;
			a.push_front(x);
		}
		if(s == "POPFRONT"){
			if(!a.empty()) a.pop_front();
		}
		if(s == "POPBACK"){
			if(!a.empty()) a.pop_back();
		}
		if(s == "PRINTFRONT"){
			if(!a.empty()) cout << a.front() <<endl;
				else cout << "NONE" <<endl;
		}
		if(s == "PRINTBACK"){
			if(!a.empty()) cout << a.back() <<endl;
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


