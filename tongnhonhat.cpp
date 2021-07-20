#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	long long s1 = 0, s2 = 0, n, s;
	cin>>n;
	long long a[n];
	for(int i = 0; i < n; i++) cin>>a[i];
	sort(a, a+n);
	for(int i = 0; i < n - 1; i += 2){
		s1 = s1*10 + a[i];
		s2 = s2*10 + a[i + 1];
		//cout<<s1<<" "<<s2<<endl;
	}
	
	if(n % 2 == 1)
		{
			if(s1 * 10 + a[n - 1] + s2 > s2 * 10 + a[n - 1] + s1) s2 = s2 * 10 + a[n - 1] ;
			else s1 = s1 * 10 + a[n - 1];
		}
	
	cout<<s1+s2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
