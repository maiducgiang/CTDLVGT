#include<bits/stdc++.h>
#include<string>
using namespace std;

int a[11][11], n, dem, p;

char s[20];

void test(int i, int j, int k){
	if(a[i][j] == 0) return;
	if(i == n - 1 && j == n - 1)
	{
		dem = 1;
		for(int t = 0; t < 2 * n - 2; t++) cout<<s[t];
			
		cout<<" "; return;
	}
	if(a[i + 1][j] == 1 || a[i][j + 1] == 1)
	{
		
		if(a[i + 1][j] == 1 && i < n - 1 && j < n)
		{
			s[k] = 'D';
			test(i + 1, j, k + 1);
			
		}
		if(a[i][j + 1] == 1 && i < n && j < n - 1)
		{
			s[k] = 'R';
			test(i, j + 1, k + 1);
			
		}	
		
	}
	else
	{
		return;
	}
}

void solve(){
	cin>>n;
	dem = 0;
	p = 2 * n - 2;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) cin>>a[i][j];
	test(0, 0, 0);
	if(dem == 0) cout<<"-1";
		
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


