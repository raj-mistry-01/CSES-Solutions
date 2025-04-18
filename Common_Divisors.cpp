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
    cin >> n;

    vector<lli> vec(n);
    map<lli,lli> map;
    for1(i,n) {
        cin >> vec[i];
        for(lli j = 2; 1LL * j * j <= vec[i] ; j++){
            if(vec[i] % j == 0){
                while()
            }
        }

        // n root n log n
    }

    lli mx = 1 , mxgcd = 1;

    for(auto i : map){
        if(i.second >= 2) {   
            mx = i.second;
            mxgcd = i.first;
        }
    }

    cout << mxgcd << endl;
    return 0;
}