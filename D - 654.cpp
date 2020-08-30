#include <bits/stdc++.h>

using namespace std;

#define pan(i,n) for(int i=0;i<n;i++)
#define pans(i,n,a) for(int i=a;i<n;i++)
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define INF 1000000007
#define PI 3.141592653
#define inf 100007
#define pll pair<ll,ll>
#define pii pair<int,int>
ll gcd(ll a, ll b) { return a % b == 0 ? b : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n][n];
        memset(a, 0, sizeof(a));
        int p = 0, q = 0;
        for(int i = 0; i < k; i++){
            a[p][q] = 1;
            p++, q = (q+1)%n;
            if(!(p % n)){
                p = 0, q = (q+1)%n;
            }
        }
        if( k % n == 0){
            cout << 0 << endl;
            pan(i,n){
                pan(j,n)
                    cout << a[i][j] ;
                cout << endl;
            }
        }
        else{
            cout << 2 << endl;
            pan(i,n){
                pan(j,n)
                    cout << a[i][j];
                cout << endl;
            }
        }
    }
}
