#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;

ll ar[3];            
ll I[3][3], T[3][3]; 

void mul(ll A[3][3], ll B[3][3], int dim) {
    ll res[3][3] = {0};
    for (int i = 1; i <= dim; i++) {
        for (int j = 1; j <= dim; j++) {
            res[i][j] = 0;
            for (int k = 1; k <= dim; k++) {
                res[i][j] = (res[i][j] + (A[i][k] * B[k][j]) % MOD) % MOD;
            }
        }
    }
    for (int i = 1; i <= dim; i++) {
        for (int j = 1; j <= dim; j++) {
            A[i][j] = res[i][j];
        }
    }
}

ll getFib(ll n) {
    if (n <= 2) return ar[n];
    
    I[1][1] = I[2][2] = 1;
    I[1][2] = I[2][1] = 0;

    T[1][1] = 0;
    T[1][2] = 1;
    T[2][1] = 1;
    T[2][2] = 1;

    n -= 1;
    while (n > 0) {
        if (n % 2 == 1){
            mul(I, T, 2);
            n--;
        }
        else {
            mul(T, T, 2); 
            n>>=1;
        }
    }

    return (ar[1] * I[1][1] + ar[2] * I[2][1]) % MOD;
}

int main() {
    ar[1] = 0; // F1
    ar[2] = 1; // F2
    
    ll n;
    cin >> n;
    n++;
    
    ll x = getFib(n);
    cout << x << endl;
    return 0;
}
