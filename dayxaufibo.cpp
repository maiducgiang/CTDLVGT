#include<bits/stdc++.h>
using namespace std;
long long a[100];
char quaylui(long long n, long long k){
	//cout<<n<<" "<<k<<endl;
	if(n == 1 && k == 1) return 'A';
	else if(n == 2 && k == 1) return 'B';
	else{
		if(k <= a[n - 2]) return quaylui(n - 2, k);
		else return quaylui(n - 1, k - a[n - 2]);
	}
}

void solve(){
	long long n, k;
	a[1] = 1;a[2] = 1;
	for(long long i = 3; i <= 92; i++) a[i] = a[i - 1] + a[i - 2];
	//cout<<a[92];
	cin>>n>>k;
	cout<<quaylui(n, k);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
