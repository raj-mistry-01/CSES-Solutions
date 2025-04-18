#include<bits/stdc++.h>
#define endl "\n"
#define print(val) cout << val << endl;
#define for1(i,n) for(int i = 0; i < n ; i++)
#define lli long long int
#define all(x) (x).begin(), (x).end()
#define py print("YES")
#define pn print("NO")
#define printcontainer(i,container) for1(i,container.size()) print(container[i])
#define vll vector<lli>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);
    
    lli n;
    cin >> n;
    vll a(n);
    for(lli &i : a) cin >> i;
    sort(all(a));
    vll pr;
    lli cs = 0;
    sort(all(a));
    lli cnt = 1;
    map<lli,lli> map;
    lli pr = 0;
    map[0] = 1;
    for(lli &i : a) {
        pr += i;
        lli need = pr - cnt;
        if(map[])
    }
    return 0;
}