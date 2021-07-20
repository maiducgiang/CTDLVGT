#include<bits/stdc++.h>
#include <vector>
#include <string>
#include<math.h>
using namespace std;
int n, a[100][100] = {}, b[100][100] = {0};
char c[3][3] = {' ', 'U', ' ', 'L', ' ', 'R', ' ', 'D', ' '};
string aa;
vector <string>s;
void quaylui(int x, int y){
	if(x == n && y == n){
		s.push_back(aa);
		return;
	}
	else{
		for(int i = 1; i >= -1; i--)
			for(int j = 1; j >= -1; j--)
			if(abs(i) != abs(j)){
				if(x + i >= 1 && x + i <= n && y + j >= 1 && y + j <= n 
				&& a[x+i][y+j] == 1 && b[x+i][y+j] == 0  ){
					b[x+i][y+j] = 1;
					aa.push_back(c[i + 1][j + 1]);
					quaylui(x+i, y+j);
					b[x+i][y+j] = 0;
					aa.pop_back();
				}
			}
	}
}
void solve(){
	s.clear();
	cin >> n;
	memset(a, sizeof(a), 0);
	for(int i = 1; i <= n; i++)for(int j = 1; j <= n; j++) cin >> a[i][j];
	b[1][1] = 1;
	quaylui(1, 1);
	if(s.size() == 0) cout << -1;
	else{
		sort(s.begin(), s.end());
		for(int i = 0; i < s.size(); i++) cout << s[i] <<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


