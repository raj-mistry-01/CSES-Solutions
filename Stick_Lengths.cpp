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
    lli md1 = a[n/2];
    lli md2 = md1+1;
    lli md3 = md1-1;
    lli op1 = 0 , op2 = 0 , op3 = 0;
    for(lli &i : a) {
        op1 += (abs(md1-i));
        op2 += (abs(md2-i));
        op3 += (abs(md3-i));
    }
    cout << min({op1  , op2 , op3}) <<  endl;
    return 0;
}