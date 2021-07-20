#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long a[n], m = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<=0) a[i]=0;
		m+=a[i]+abs(a[i]);
	}
	
	cout<<m<<endl;
}
