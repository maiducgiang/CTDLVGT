#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, maxx = 1;
	cin>>n;
	int a[n + 1], b[n + 1];
	cin >> a[1];
	b[1] = 1;
	for(int i = 2; i <= n; i++){
		cin>>a[i];
		int max = 1;
		for(int j = 1; j < i; j++){
			if(a[i] > a[j] && max < b[j]) max = b[j];
		}
		b[i] = max + 1;
		//cout<<max<<endl;
		if(maxx < b[i]) maxx = b[i];
	}
	cout<<maxx;
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}


