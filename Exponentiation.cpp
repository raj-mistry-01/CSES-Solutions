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

        lli a , b;
        cin >> a >> b;
        // cout << powerModulo(a , b , mod) << endl;

        lli res = 1;

        while(b){
            if(b&1) {
                (res *= a) %= mod;
                b--;
            }
            else {
                (a*=a) %= mod;
                b/=2;
            }
        }

        cout << res << endl;
    }
    return 0;
}