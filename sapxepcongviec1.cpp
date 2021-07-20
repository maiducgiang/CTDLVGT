#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a[100005],b[100005];
        
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        vector<pair<int,int> > vect;
        for(int i=0;i<n;i++)
            vect.push_back(make_pair(b[i],a[i]));
        sort(vect.begin(),vect.end());
        int kt = vect[0].first;
        int dem=1;
        for(int i=1;i<vect.size();i++){
            if(vect[i].second >=  kt){
                dem++;
                kt = vect[i].first;
            }
        }
        cout<<dem<<endl;
        vect.clear();
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	solve();
    }   
}
