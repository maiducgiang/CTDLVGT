#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int a[n + 1][n + 1];
	for(int i = 1; i <= n; i++) cin>>a[1][i];
	for(int i = 2; i <= n; i++)
		for(int j = 1; j <= n - i + 1; j++) a[i][j] = a[i - 1][j + 1] + a[i - 1][j];
	for(int i = 1; i <= n; i++)
	{
		cout<<"[";
		for(int j = 1; j <= n - i + 1; j++) if(j != n - i + 1) cout<<a[i][j]<<" ";
			else cout<<a[i][j];
		cout<<"]"<<endl;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
		cout << endl;
	}
}


