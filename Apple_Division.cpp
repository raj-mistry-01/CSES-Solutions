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

void f(lli i , vll &a , lli &mn , lli cur) {
    if(i == a.size()) {
        mn = min(mn , abs(cur));
        return;
    }
    f(i+1 , a , mn , cur+a[i]);
    f(i+1 , a , mn , cur-a[i]);
}

void solve() {
    lli n;
    cin >>  n;
    vll a(n);
    for(lli &i:a)cin>>i;
    lli mn = INT_MAX;
    lli cur = 0;
    lli i = 0;
    f(i , a , mn , cur);
    cout << mn << endl;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);

    lli t;
    // cin >> t;
    t=1;
    while(t--){
        //cout << " tt " << t << endl;
        solve();
    }
    return 0;
}