#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(){
	int n;
	string s, s1, s3[100];
	cin>>n;
	int a[n + 1][n + 1];
	
	for(int i = 1; i <= n; i++){
		scanf("\n");
		getline(cin, s);
		s3[i] = s;
		int j = 0;
		stringstream ss(s);
		while(ss>>s1){
			stringstream str2num(s1);
			str2num>>a[i][++j];
		}
		a[i][0] = j;
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= a[i][0]; j++) if(a[i][j] > i) cout<<i<<" "<<a[i][j]<<endl;
	}
		
	
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}


