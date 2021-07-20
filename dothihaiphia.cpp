#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> a[1004];
int color[1004];

bool BFS(int u){
    queue <int> q;
    q.push(u);
    color[u] = 1;
    while(q.size()){
        int s = q.front(); q.pop();
        for(auto z : a[s]){
            if(z == s)
                return false;
            if(color[z] == -1){
                color[z] = 1 - color[s];
                q.push(z);
            }
            else if(color[z] == color[s])
                return false;
        }
    }
    return true;
} 

bool check(){
    for(int i = 1 ; i <= n ; i++){
        if(color[i] == -1){
            if(BFS(i) == false)
                return false; 
        }
            
    }
    return true;
}

int main ()
{
    int T;
    cin>>T;
    while(T--){
        cin>>n>>m;
        for(int i = 1 ; i <= n ; i++){
            a[i].clear();
        }
        memset(color,-1,sizeof(color));
        for(int i = 0,x,y; i < m ; i++){
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        if(check()) cout << "YES"<<endl;
        else cout <<"NO"<<endl;
    }
    return 0;
}
