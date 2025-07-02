#include<bits/stdc++.h>
#define endl "\n"
#define for1(i,n) for(int i = 0; i < n ; i++)
#define lli long long int
#define all(x) (x).begin(), (x).end()
#define py print("YES")
#define pn print("NO")
#define m1 print("-1")
#define print(val) cout << val << endl;
#define print_all(a) for(lli i=0;i<(lli)a.size();i++) cout<<a[i]<<" ";cout<<endl;
#define vll vector<lli>
using namespace std;
//#include<ext/pb_ds/tree_policy.hpp>
//#include<ext/pb_ds/assoc_container.hpp>
//template<class T> using oset=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
//using namespace __gnu_pbds;
void solve() {
    lli n;
    cin>>n;
    vll a(n);
    for1(i,n) cin>>a[i];
    sort(all(a));
    lli sum=1;
    for1(i,n) {
        if(sum<a[i]) {
            cout<<sum<<endl;
            return;
        }
        sum+=a[i];
    }
    cout<<sum<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //cout << fixed << setprecision(7);
    lli t;
    t=1;
    //cin >> t;
    while(t--){
        //cout << " tt " << t << endl;
        solve();
    }
    return 0;
}