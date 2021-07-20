#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++) cin>>a[i];
	sort(a, a+n);
	int min = a[0], i = 1;
	while(a[i] == a[i - 1] && i < n - 1) i++;
	if(a[i] == min) cout<<-1;
	else cout<<min<<" "<<a[i];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


