#include<bits/stdc++.h>
using namespace std;
long long n, x, y, z;
void quaylui(int n){
	
}
void solve(){
	cin >> n >> x >> y >> z;
	long long a[n + 1];
	a[1] = x;
	for(int i = 2; i <= n; i++){
		a[i] = x * i;
		for(int j = 1; j < i; j++){
			long long check = 0;
			if(j * 2 > i ) check = a[j] + z + (j * 2 - i) * y;
			else if(j * 2 < i) check = a[j] + z + (i - j*2) * x;
			else check = a[j] + z;
			
			a[i] = min(a[i - j] + a[j], min(a[i], check));
		}
		
	}
	cout << a[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


