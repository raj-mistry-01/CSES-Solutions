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

int f(int n) {
    if( n == 0) return 1;
    if( n < 0) return 0;
    int ans = 0;

    for(int i = 1 ; i <= 6 ; i++) ans += f(n-i);

    return ans;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);
    int mod = 1e9+7;


    int n;cin >> n;
    // cout << f(n) << endl;

    vector<int> dp(n+1 , 0);
    dp[0] = 1;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= 6 && i-j >= 0 ; j++) (dp[i] += dp[i-j]) %= mod;
    }
    
    cout << dp[n] << endl;
    return 0;
}