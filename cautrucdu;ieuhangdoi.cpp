#include<bits/stdc++.h>
#include<queue>
using namespace std;
void solve(){
	queue <int> a;
	int n, check;
	cin >> n;
	while(n--){
		cin >> check;
		switch(check){
			case 1:
				cout << a.size() << endl;
				break;
			case 2:
				if(a.empty()) cout <<"YES" <<endl;
				else cout << "NO" <<endl;
				break;
			case 3:
				int x;
				cin >> x;
				a.push(x);
				break;
			case 4:
				if(!a.empty()) a.pop();
				break;
			case 5:
				if(a.empty()) cout << -1 << endl;
				else cout << a.front() << endl;
				break;
			case 6:
				if(a.empty()) cout << -1 <<endl;
				else cout << a.back() << endl;
				break;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


