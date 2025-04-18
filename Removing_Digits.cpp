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

int f(int n){
    if( n < 10) return 1;

    int mx = INT_MAX;

    string s = to_string(n);
    for(char ch : s) {
        int dig = ch - '0';
        if(dig > 0) mx = 1+min(mx , f(n-dig));
    }

    return mx;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;

    cin >> n;

    // cout << f(n) << endl;

    vector<int> dp(n+1 , 1e9);

    dp[0] = 0;
    for(int i = 1 ; i < 10 ; i++) dp[i] = 1;

    for(int i = 10 ; i <= n ; i++){
            string s = to_string(i);
            for(char ch : s) {
                int dig = ch - '0';
                if(dig > 0) dp[i] = min(dp[i] ,1+dp[i-dig]);
            }
    }
    // return dp;
    cout << dp[n] << endl;


    return 0;
}