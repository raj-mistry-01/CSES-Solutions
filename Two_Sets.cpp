#include<bits/stdc++.h>
#define raj_01 ios::sync_with_stdio(false);cin.tie(0);
#define speed1 cin.tie(0);
#define speed2 cout.tie(0);
#define print(val) cout << val << endl;
#define for1(i,n) for(int i = 0; i < n ; i++)
#define fork(i,n,k) for(int i = 0; i < n ; i+=k)
#define printcontainer(i,container) for1(i,container.size()) print(container[i])
#define INF 1e18
#define INIT_MATRIX(rows, cols, value) \
int matrix[rows][cols];            \
for (int i = 0; i < rows; ++i)     \
for (int j = 0; j < cols; ++j) \
cin >> matrix[i][j]
#define MOD 1000000007
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<lli>
#define pii pair<int, int>
#define vvi vector<vi>
#define all(x) (x).begin(), (x).end() 
#define endl "\n"
#define py print("YES")
#define pn print("NO")
#define debug(x) cout << #x << " = " << x << endl
#define debug2(x, y) cout << #x << " = " << x << #y << " = " << y << endl
#define debug3(x, y, z) cout << #x << " = " << x << #y << " = " << y << #z << " = " << z << endl
using namespace std;
int main(){
    raj_01
    
    lli n ;

    cin >> n;

    lli sum = 1LL * (n) *(n+1)/2;

    if(sum & 1) pn
    else {
        py

        // 1 2 3 4 5 6 7 8 9 10 11

        if(n&1){
            cout << n/2 << endl;
            int cnt1 = (n/2)/2;
            int i = 1; 
            for(;i <= cnt1 ; i++){
                cout << i << " ";
            }
            int j = i , k = i , jclone = j;
            for(int j = n ; k != 0 ; j-- , k--){
                cout << j << " ";
            }
            cout << endl;
            cout << n/2+1 << endl;
            for(;i<=n-jclone ; i++){
                cout << i << " ";
            }
        }
        else {
            cout << n/2 << endl;
            int i = 1 , cnt1 = (n/2)/2 , j = n;
            while(cnt1--) {
                cout << i++ << " " << j-- << " ";
            }
            cout << endl;
            j++;
            cout << n/2 << endl;
            while(i != j) {
                cout << i << " ";
                i++;
            }
            cout << endl;
        }
        
    }
    return 0;
}