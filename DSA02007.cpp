#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
void solve(){
	int n, i;
	cin>>n;
	string s = "";
	//scanf("\n");
	cin>>s;
	int l = s.length();
	int a[l];
	for(i = 0; i < l; i++) a[i] = s[i] - '0';	
	sort(a, a + l);
	i = l - 1;
	if(n >= l) for(int j = i; j >= 0; j--) cout<<a[i];
	else{
			while(n--){
				if(i < 0) break;
				//cout<<n<<endl;
				int x = l - 1, y = 0;
				while(s[x] - '0' != a[i] && x >= 0) x--;
				while(s[y] - '0' != a[i] && y <  l) y++;
				if(s[l - i - 1] == s[x]) n++;
				else
				{
					if(x > l - 1 - i)
					{
						char m = s[x];
						s[x] = s[l - 1 - i];
						s[l - 1 - i] = m;
						//cout<<s[x]<<" "<<s[l - i - 1]<<" "<<s<<"\n";
					}
					else break;
				}
				i--; 
		}
		cout<<s;
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
