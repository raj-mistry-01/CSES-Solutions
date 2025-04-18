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

int f(int index , int x , vector<int> &price , vector<int> &page){
    if(index == 0) {
        if(price[index] <= x) return page[index];
        else return 0;
    }

    int take = 0 , nottake = 0;


    if(price[index] <= x) take = page[index] + f(index-1 , x-price[index] , price , page);

    nottake = f(index-1 , x , price , page);

    return max(take , nottake);
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);
    
    lli n , x;

    cin >> n >> x;

    vector<lli> price(n) , page(n);
    for1(i,n) cin >> price[i];
    for1(i,n) cin >> page[i];

    vector<lli> prev(x+1 , 0);

    for(int p = 0 ; p <= x ; p++) {
        if(price[0] <= p) prev[p] = page[0];
    }

    for(int index = 1 ; index < n ; index++){

        for(int p = x ; p >= 0  ; p--){
            int take = 0 , nottake = 0;


            if(price[index] <= p) take = page[index] + prev[p-price[index]];

            nottake = prev[p];

            prev[p] =  max(take , nottake);
        }
    }

    cout << prev[x] << endl;


    return 0;
}