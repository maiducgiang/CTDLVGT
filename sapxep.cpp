#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	long long a[n], b[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a+n);
	int i = 0, j = n - 1;
	while(a[i] == b[i]) i++;
	while(a[j] == b[j]) j--;
	cout << i + 1 <<" "<<j + 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}



