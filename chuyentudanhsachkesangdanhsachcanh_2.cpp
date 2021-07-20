#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector <vector <long long> > a(n + 1);
	scanf("\n");
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		int number;
		while(ss >> number){
			a[i].push_back(number);
		}
	} 
	for(int i = 1; i <= n; i++) 
		for(int j = 0; j < a[i].size(); j++)
		if(a[i][j] > i) cout << i << " "<<a[i][j]<<endl;
		
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}



