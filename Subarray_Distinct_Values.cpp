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
    

    int n , k;
    cin >> n >> k;

    vector<int> vec(n);

    for1(i,n) cin >> vec[i];

    int i = 0 , j = 0;


    lli cnt = 0;
    set<int> set;
    while(j < n) {
        set.insert(vec[j]);
        if(set.size() == k) {
            cnt += (1LL * (k) * (k+1) / 2);
            while(set.size() == k) {
                set.erase(vec[i]);
                i++;
            }
        }
        j++;
    }

    cout << cnt << endl;

    return 0;
}