#include<iostream>
using namespace std;
long mu(long long n)
{
	if(n==1) return 2;
	if(n==0) return 1;
	long long t=mu(n/2);
	if(n&1) return ((t%123456789)*(t%123456789)*2)%123456789;
	else return ((t%123456789)*(t%123456789))%123456789;
}
main()
{
	int test;
	cin >> test;
	while(test--){
	long long n;
	cin>>n;
	cout<<mu(n-1)<<endl;}
}
