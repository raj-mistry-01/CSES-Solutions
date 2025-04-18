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


int pos(vector<int> vec , int elem){

    for(int i = 0 ; i < vec.size() ; i++){

        if(vec[i] == elem) return i;
    }

}

int main(){
    raj_01
    int n , t;


    bool flag = false;
    cin >> n >> t;
    vi vec(n);

    map<int,int> map;
    for1(i , n) {
        cin >> vec[i];

        map[vec[i]] = 1;
    }

    for1(i  , n){

        int elem = t - vec[i];

        if(map[elem] == 1) {
            int elempos = pos(vec , elem);
            if( i != elempos) {
                flag =  true;
                cout << i+1 << " " << pos(vec , elem) + 1 << endl;
            break;
            }
        }
    }

    if(!flag) cout << "IMPOSSIBLE" << endl;
    return 0;
}