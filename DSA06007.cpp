#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector <int> a(n, 0);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector <int> b = a;
	sort(b.begin(), b.end());
	int i = 0, j = n - 1;
	while(a[i] == b[i] && i < n) i++;
	while(a[j] == b[j] && j >= 0) j--;
	cout<<i + 1<<" "<<j + 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


