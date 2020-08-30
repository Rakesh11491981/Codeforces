#include <bits/stdc++.h>

using namespace std;

#define pan(i,n) for(int i=0;i<n;i++)
#define pans(i,n,a) for(ll i=a;i<n;i++)
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define INF 1000000007
#define PI 3.141592653
#define inf 200007
#define pll pair<ll,ll>
#define pii pair<int,int>

int main() {
    ll n;
    cin >> n;
    ll v[n+4], suf[n+4], g[n+4];
    pans(i,n+1,1)
        cin >> v[i];
    suf[n] = v[n];
    for(ll i = n-1; i > 0; i--){
        suf[i] = __gcd(suf[i+1], v[i]);
    }
    pans(i,n,1)
        g[i] = (v[i]*suf[i+1])/__gcd(v[i], suf[i+1]);
    ll res = g[1];
    pans(i,n,2)
        res = __gcd(res, g[i]);
    cout << res << endl;
}
