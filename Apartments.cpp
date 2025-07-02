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
    lli n,m,k;
    cin>>n>>m>>k;
    lli ans=0;
    vll a(n),b(m);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    sort(all(a));
    sort(all(b));
    lli ptr1=n-1,ptr2=m-1;
    while(ptr1>=0&&ptr2>=0){
        ans+=(a[ptr1]-k<=b[ptr2]&&b[ptr2]<=a[ptr1]+k);
        ptr2-=((a[ptr1]-k<=b[ptr2]&&b[ptr2]<=a[ptr1]+k)||());
        ptr1--;
    }
    cout<<ans;
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