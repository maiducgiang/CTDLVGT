#include<bits/stdc++.h>
using namespace std;
string s;
void solve(){
	stack <char> a;
	
	getline(cin, s);
	int i = 0, j = s.length() - 1;
	while(i < j)
	{
		if(s[i] == '(')
		{
			if(s[j] == ')')
			{
				a.push('(');
				a.push(')');
				i++;
				j--;
			}
			else j--;
		}
		else i++;
	}
	if(a.size() >= 2) cout<< a.size();
	else
	cout<<1;
	
}
int main(){
	int t;
	cin>>t;
	getline(cin, s);
	while(t--){
		solve();
		cout<<endl;
	}
}


