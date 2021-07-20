#include<bits/stdc++.h>
#include <sstream>
#include<string>
using namespace std;
void solve(){
	string s, s1;
	scanf("\n");
	int a[21] = {};
	getline(cin, s);
	scanf("\n");
	getline(cin, s1);
	s = s + " " + s1;
	for(int i = s.length() - 3; i >= 2; i--) 
	if(s[i] == 'x'){
		int dem = 0, check = 1, j = i - 2;
		while(s[j] <= '9' && s[j] >= '0' && j >= 0) {
			dem = dem + (s[j] - '0') * check;
			check *= 10;
			j--;
		}
		
		int dem2 = 0, check2 = 1;
		j = i + 2;
		while(s[j] <= '9' && s[j] >= '0' && j < s.length()) {
			dem2 = dem2 * check2 + (s[j] - '0');
			check2 *= 10;
			j++;
		}
		a[dem2] += dem;
	}
	string s2 = "";
	for(int i = 20; i >= 0; i--)
	if(a[i] != 0) {
		string aa = to_string(a[i]);
		string aaa = to_string(i) ;
		s2 = s2 + aa + "*x^" + aaa + "+";
	}
	s2.erase(s2.length()-1, 1);
	cout << s2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


