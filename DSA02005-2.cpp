#include<bits/stdc++.h>
using namespace std;
vector <int> a(11, 0);
char b[11];
string s;
int n;
void out(){
	for(int i = 0; i < n; i++) cout<<b[i]; cout<<" ";
}
void code(int i){
	for(int j = 0; j < n; j++)
	{
		if(a[j] == 0){
			b[i] = s[j];a[j] = 1;
			if(i == n - 1)
			{
				out();
			}
			else
			code(i + 1);
			a[j] = 0;
		}
	}
}
void solve(){
	scanf("/n");
	cin>>s;
	n = s.length();
	code(0);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


