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
    
    int n;
    int in;

    cin >> n;

    map<int,int> map;

    int mx = INT_MIN , ik = 0;
    for(int i = 0 ; i < n ; i++){

        cin >> in;

        if(map[in] >= 1) {
            int sz =  map.size();
            mx = max(mx , sz);
        }
        else {
            map[in]++;
            int sz =  map.size();
            if(i == n-1) mx = max(mx , sz);
        }

    }
    cout << mx << endl;
    return 0;
}