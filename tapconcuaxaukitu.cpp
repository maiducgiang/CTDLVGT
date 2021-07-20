#include <bits/stdc++.h>
#include<set>
#include <string>
using namespace std;

int n,a[100];
string s;
set<string> ss;
void quaylui(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			string kiemtra ="";
			for(int k=1;k<=n;k++){
				if(a[k]==1)
					kiemtra += s[k-1];
			}
			if(kiemtra.length()>0)
				ss.insert(kiemtra);
		}
		else
			quaylui(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ss.clear();
		cin>>n;
		scanf("\n");
		cin>>s;
		quaylui(1);
		set<string> :: iterator p;
		string sss = "";
		p = ss.begin();
		while(p!=ss.end()){
			sss = sss + (*p) +" ";
			p++;
		}
		cout<<sss<<endl;
	}
}

