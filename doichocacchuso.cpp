#include<bits/stdc++.h>
using namespace std;
void solve(){
	int k;
	string a;
	cin >> k;
	cin >> a;
	for(int i = 0; i < a.size() - 1 ; i++){
		int check = i + 1;
		for(int j = i + 2; j < a.size(); j++) if(a[j] >= a[check]) check = j;
		if(a[i] < a[check] && k > 0){
			swap(a[i], a[check]);
			k--;
		}
		if(k == 0) break;
	}
	cout << a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


