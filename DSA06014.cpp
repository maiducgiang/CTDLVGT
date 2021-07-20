#include<bits/stdc++.h>
using namespace std;
vector <int> a(1000001, 1);
int ktnt(long long n){
	if(n < 2) return 0;
	for(int i = 2; i < sqrt(n); i++) if(n % i == 0) return 0;
	return 1;
}
void sang(){
	a[1] = 0;
	for(int i = 2; i <= sqrt(1000000); i++)
	if(a[i] == 1){
		for(int j = 2; j <= 1000000 / i; j++) a[i * j] = 0;
	}
}
void solve(){
	long long n;
	cin>>n;
	for(long long i = 2; i <= n/2 + 1; i++){
		if(a[n - i] == 1 && a[i] == 1){
			cout<<i<<" "<<n - i; 
			return;
		}
	}
	cout<<-1;
	//cout<<endl;
	//for(int i = 2; i <= 100; i++) cout<<i<<" "<<a[i]<<endl;	
}
int main(){
	sang();
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


