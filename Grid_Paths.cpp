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

int f(int x , int y , int &n , vector<vector<char>> &grid) {
    if(x == n-1 && y == n-1) return 1;

    int r = 0 , d = 0;

    if(y < n-1 && grid[x][y+1] != '*') r = f(x , y+1 , n , grid);

    if(x < n-1 && grid[x+1][y] != '*') d = f(x+1 ,y , n , grid);

    return r+d;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin >> n;
    vector<vector<char>> grid(n , vector<char> (n , '0'));


    int mod = 1e9+7;
    for1(i,n) {
        for1(j,n) cin >> grid[i][j];
    }
    // cout << f(0 , 0 , n , grid) << endl;

    if(grid[0][0] == '*' || grid[n-1][n-1] == '*'){
        cout << 0 << endl;
        return 0;
    }


    vector<vector<int>> dp(n , vector<int> (n , 0));


    dp[n-1][n-1] = 1;


    for(int x = n-1 ; x >= 0 ; x--){
        for(int y = n-1 ; y >= 0 ; y--){

            int r = 0 , d = 0;

            if(y < n-1 && grid[x][y+1] != '*') r = dp[x][y+1];

            if(x < n-1 && grid[x+1][y] != '*') d = dp[x+1][y];

            if(x != n-1 || y != n-1)dp[x][y] = (r+d) % mod;
        }
    }

    cout << dp[0][0] << endl;
    return 0;
}