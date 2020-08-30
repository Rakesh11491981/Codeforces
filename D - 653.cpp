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
        ll n, k;
        cin >> n >> k;
        ll v;
        map <ll, ll> m;
        ll key = 0, value = 0;
        pan(i,n){
            cin >> v;
            if(v % k)
                m[k - (v % k)]++;
            value = max(value, m[k - (v%k)]);
        }
        for(auto x : m){
            if(x.second == value){
                key = max(key, x.first);
            }
        }
        ll res = (value != 0) ? (k * (value - 1)) + key + 1 : 0;
        cout << res << endl;
    }
}
