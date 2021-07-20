#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n, k;
	cin>>n>>k;
	int x = 1, y = n, code = 0;
	int a[n + 1];
	for(int i = 1; i <= n; i++) cin>>a[i];
	for(int i = 1; i < n; i++)
		for(int j = i + 1; j <= n; j++)
		if(a[i] + a[j] == k) code++;
	cout<<code;
}
int main(){
	int t;
	cin>>t;
	while(t--){
			   solve();
			   cout<<endl;
   }
}
