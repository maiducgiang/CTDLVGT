#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	vector <int> a(2, 0);
	cin >> n;
	cin>>a[1];
	for(int i = 2; i <= n; i++){
		int b;
		cin>>b;
		if(b < 0) a.push_back(b);
		else{
			if(a[a.size() - 1] > 0) a[a.size() - 1] += b;
			else a.push_back(b);
		}
	}
	int max = a[2];
	for(int i = 1; i < a.size(); i++) a[i] = a[i] + a[i - 1];
	for(int i = 1; i < a.size() - 1; i++)
		for(int j = i + 1; j < a.size(); j++)
		if(max < a[j] - a[i]) max = a[j] - a[i];
	cout<<max;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


