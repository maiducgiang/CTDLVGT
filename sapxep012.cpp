#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n + 1];
	for(int i = 1; i <= n; i++) cin>>a[i];
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= n; i++)cout<<a[i]<<" ";
	//if(n % 2 == 1) cout<<a[n/2 + 1];
}
int main(){
	int t;
	cin>>t;
	while(t--){
			   solve();
			   cout<<endl;
   }
}
