#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	long long summ = 0;
	vector < long long> ss;
	for(int i = 0; i < s.length(); i++){
		string check = "";
		for(int j = i; j < s.length(); j++){
			check = check + s[j];
			stringstream sum(check);
			sum >> summ;
			ss.push_back(summ);
		}
	}
	sort(ss.begin(), ss.end());
	summ = ss[0]; 
	for(int i = 1; i < ss.size(); i++) /*if(ss[i] != ss[i - 1])*/ summ += ss[i];
	cout << summ;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


