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
    lli n , k;
    cin >> n >> k;
    vll a(n+1);
    for(lli i = 1 ;  i <= n ; i++) {
        lli x ;
        cin >> x;
        a[i] = x;
    }
    
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);

    lli t;
    //cin >> t;
    t=1;
    while(t--){
        //cout << " tt " << t << endl;
        solve();
    }
    return 0;
}