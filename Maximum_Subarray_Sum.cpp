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


    lli mx = INT_MIN , sum = 0;
    lli in;
    for1(i,t) {

        cin >> in;

        sum += in;

        if(mx < sum) {
            mx = sum;
        }

        if(sum < 0) sum = 0;
    }
    print(mx)
    return 0;
}