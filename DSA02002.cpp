#include<bits/stdc++.h>
using namespace std;
int a[101][101];
void quaylui(int n, int k, int dem){
	/*if(k == n)
	{
		dem = 1;
		return;
	}
	else{*/
		if(k == 0) return;
		for(int i = 1; i <= n - k; i++) a[k+1][i] = a[k][i] + a[k][i - 1];
		quaylui(n, k - 1, dem);
		
	//}
	//if(dem == 1) 
	//{
		cout<<"[";
		for(int i = 1; i <= n - k; i++) if(i == n - k) cout<<a[k+1][i]<<" ";
		else cout<<a[k - 1][i];
		cout<<"]"<<endl;
		if(k == 1) return;
	//}
}
void solve()
{
	int n, dem = 0, k = 1;
	cin >> n;
	for(int i = 1; i <= n; i++) cin>>a[1][i];
	quaylui(n, k, 0);
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


