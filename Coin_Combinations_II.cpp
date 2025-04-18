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


    
    const int mod = 1e9+7;


    int n , k;

    cin >> n >> k;

    vector<int> nums(n);
    for1(i,n) cin >> nums[i];

    // vector<vector<int>> dp(n , vector<int> (k+1  , 0));
    vector<lli> prev(k+1 , 0) , curr(k+1 , 0);

    for(int target = 0 ; target <= k ; target++){
        if(target % nums[0] == 0) prev[target] = 1;
    }

    for(int index = 1 ; index < n ; index++){

        for(int target = 0 ; target <= k ; target++){

            int take = 0 , nottake = 0;

            if(nums[index] <= target) take = curr[target-nums[index]];

            nottake = prev[target];


            curr[target] = (take +  nottake) % mod;
        }

        prev = curr;
    }

    cout << prev[k] << endl;
    return 0;
}