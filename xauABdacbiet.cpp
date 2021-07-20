#include<bits/stdc++.h>
using namespace std;
int n, k;
vector <int> a;
vector <string> ss;
void quaylui(int t){
	if(t > n ){
		int code = 0, b[20] = {a[0]};
		for(int i = 1; i < a.size(); i++) 
		{
			if(a[i] != 0) b[i] = b[i - 1] + a[i];
			code = max(code, b[i]);
		}
		if(code == k){
			string sss = "";
			for(int i = 0; i < a.size(); i++) sss += (a[i] == 0)? 'B' : 'A';
			ss.push_back(sss);
		}		
		return;
	}
	else{
		for(int i = 0; i <= 1; i++){
			a.push_back(i);
			quaylui(t + 1);
			a.pop_back();
		}
	}
}
void solve(){
	
	cin >> n >> k;
	quaylui(1);
	cout << ss.size()<<endl;
	for(int i = ss.size() - 1; i >= 0;  i--) cout << ss[i]<<endl;
}
int main(){
	solve()
}


