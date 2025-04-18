#include<bits/stdc++.h>
#define endl "\n"
#define print(val) cout << val << endl;
#define for1(i,n) for(int i = 0; i < n ; i++)
#define lli long long int
#define all(x) (x).begin(), (x).end()
#define py print("YES")
#define pn print("NO")
#define m1 print("-1")
#define vll vector<lli>
using namespace std;
void solve() {
    string s;
    cin >> s;
    lli n = s.length();
    map<char,lli> map;
    for(char ch : s) {
        map[ch]++;
    } 
    bool ok =  true;
    lli  cnt = 0;
    char ch = '0';
    for(auto i : map) {
        if(i.second & 1) {
            ch = i.first;
        }
        cnt += (i.second & 1);
        ok &= (cnt <= 1);
    }
    if(!ok) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        if(ch != '0') {
            s.at(n/2) = ch;
            lli fr = map[ch];
            --fr;
            lli fr1 = fr/2 , fr2 = fr/2;
            int i = n/2-1;
            int j = n/2+1;
            while(fr1--) s.at(i--) = ch;
            while(fr2--) s.at(j++) = ch;
            map.erase(ch);
        }
        int i = 0;
        int j = n-1;
        for(auto k : map) {
            lli fr = k.second;
            while(fr) {
                s.at(i++) = k.first;
                s.at(j--) = k.first;
                fr -= 2;
            } 
        }
        cout << s << endl;
    }
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);

    lli t;
    //cin >> t;
    t=1;
    while(t--){
        //cout << " tt " << t << endl;
        solve();
    }
    return 0;
}