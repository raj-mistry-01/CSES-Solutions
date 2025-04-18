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
    

    int n , x;

    cin >> n >> x;

    vector<int> nums(n);

    for1(i,n) cin >> nums[i];


    // vector<vector<int>> dp(n , vector<int> (x+1 , INT_MAX));
    vector<long long int> prev(x+1 , INT_MAX) , curr(x+1 , INT_MAX);


    for(int target = 0 ; target <= x ; target++) {
        if(target % nums[0] == 0) {
            prev[target] = target / nums[0];
        }
    }

    for(int index = 1 ; index  < n ; index++){

        for(int target = 0 ; target <= x ; target++){

            long long int take = INT_MAX , nottake = INT_MAX;

            if(nums[index] <= target) take = 1+curr[target-nums[index]];
            nottake = 0 + prev[target];

            curr[target] = min(take , nottake);
        }

        prev = curr;
    }

    // cout << prev[x] << endl;
    if(prev[x] == INT_MAX) cout << -1 << endl;
    else {
        cout << prev[x] << endl;
    }
    return 0;
}