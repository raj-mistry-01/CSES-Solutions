#include<bits/stdc++.h>
#define endl "\n"
#define print(val) cout << val << endl;
#define for1(i,n) for(int i = 0; i < n ; i++)
#define lli long long int
#define all(x) (x).begin(), (x).end()
#define py print("YES")
#define pn print("NO")
#define m1 print("-1")
#define vll vector<lli>
using namespace std;
void solve() {
    lli n;
    cin>>n;
    lli cur=0;
    map<lli,lli> map;
    for1(i,n){
        lli u,v;
        cin>>u>>v;
        map[u]++;
        map[v]--;
    }
    lli mx=0LL;
    for(auto x:map){
        cur+=x.second;
        mx=max(mx , cur);
    }
    cout<<mx;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);

    lli t;
    t=1;
    //cin >> t;
    while(t--){
        //cout << " tt " << t << endl;
        solve();
    }
    return 0;
}