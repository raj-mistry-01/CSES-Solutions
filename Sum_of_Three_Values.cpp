#include<bits/stdc++.h>
#define lli long long int

using namespace std;


int main(){
    lli n , sum;
    cin >> n >> sum;

    vector<lli> vec(n);

    map<lli,lli> map;
    for(int i = 0 ; i < n ; i++){
        cin >> vec[i];
        map[vec[i]] = i+1;
    }

    bool done = false;

    for(int i = 0 ; i < n ; i++){

        map[vec[i]]--;

        for(int j = i+1 ; j < n ; j++){
            map[vec[j]]--;
            lli need = sum -  vec[i] - vec[j];
            if(map[need]) {
                done = true;
                cout << i+1 << " " << j+1 << " " << map[need] << endl;
                break;
            }

            map[vec[j]]++;
        }
        if(done) break;

        map[vec[i]]++;
    }

    if(!done) cout << "IMPOSSIBLE" << endl;
    return 0;
}