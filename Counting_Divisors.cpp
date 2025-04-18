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


    while(t--){

        int n;
        cin >> n;

        int res = 1;

        for(int i = 2 ; i * i <= n ; i++) {
            if(n%i == 0) {
                int cnt = 0;
                while(n%i==0) {
                    n/=i;
                    cnt++;
                }
                res *= (cnt+1);
            }
        }
        if( n   > 1 ) res *= 2;
        cout << res << endl;

    }
    return 0;
}