#include<bits/stdc++.h>
using namespace std;
long long check = 0;
void solve(){
	
	long long n, maxx = 1;
	cin>>n;
	long long a[n + 1], b[n + 1];
	cin >> a[1];
	b[1] = 1;
	for(long long i = 2; i <= n; i++){
		cin>>a[i];
		b[i] = 1;
		for(long long j = 1; j < i; j++){
			if(a[i] > a[j] ) b[i] = max(b[i], b[j] + 1);
		}
		maxx = max(b[i], maxx);
	}
	cout << "Test " << check + 1 <<": ";
	cout<<maxx;
}
int main(){
	long long t;
	cin >>  t;
	while(check != t){
		solve();
		check++;
		cout<<endl;
	}
}


