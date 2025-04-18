#include<bits/stdc++.h>
#define endl "\n"
#define print(val) cout << val << endl;
#define for1(i,n) for(int i = 0; i < n ; i++)
#define lli long long int
#define all(x) (x).begin(), (x).end()
#define py print("YES")
#define pn print("NO")
#define printcontainer(i,container) for1(i,container.size()) print(container[i])
using namespace std;



int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;

    cin >> t;

    int mod = 1e9+7;

    while(t--) {

        lli a , b , c;
        cin >> a >> b >> c;

        raj


        lli res = 1;

        while(c){
            if(c&1) {
                (res *= b) %= mod;
                c--;
            }
            else {
                (b*=b) %= mod;
                c/=2;
            }
        }

        lli res1  = 1;

        while(res) {
            if(res&1){
                (res1 *= a) % mod;
                res--;
            }
            else {
                (a *= a) %= mod;
                res /= 2;
            }
        }
        cout << res1 << endl;
    }
    return 0;
}