#include<bits/stdc++.h>
using namespace std;
long long  n, ff = 1000000007;
vector < vector <  long long > > a (11, 11);
vector < vector < long long > > b(11, 11);
vector < vector <long long> > c(11, 11, 0);
void binhphuong(){
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			long long sum = 0;
			for(int x = 1; x <= n; x++) sum += (a[i][x] * a[x][j]%ff;
			c[i][j] = sum % ff;;
		}
}
void tichba(){
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			long long sum = 0;
			for(int x = 1; x <= n; x++) sum += a[i][x] * a[x][j]
			c[i][j] = sum;
		}
}
void solve(){
	long long n, k;
	cin >> n >> k;
	for(int i = 1; i <= n; i++) 
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(i == j) b[i][j] = 1;
			else b[i][j] = 0;
		} 
	while(k != 1){
		if(k % 2 == 0){
			binhphuong();
			a = c;
			k /= 2;
		}
	}
	for(int i = 1; i <= n; i++) 
		{
			for(int j = 1; j <= n; j++) cout << a[i][j] <<" ";
			cout << endl;
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


