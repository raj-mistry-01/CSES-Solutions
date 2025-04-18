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
    


    lli n;

    cin >> n;


    vector<lli> vec(n);

    map<lli,lli> map;

    lli cnt = 0;

    map[0] = 1;
    

    for1(i,n) {
        cin >> vec[i];
        if(i > 0) vec[i]  += vec[i-1];
        lli rem = vec[i] % n;
        if(rem < 0) rem += n;
        if(map[rem] != 0) cnt += map[rem];
        map[rem]++;
    }

    cout << cnt << endl;
    return 0;
}