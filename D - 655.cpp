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
    int n;
    cin >> n;
    vl v(n), arr1, arr;
    pan(i,n)
        cin >> v[i];
    ll res = 0;
    for(int i = 0; i < n; i += 2)
        arr1.pb(v[i]);
    for(int i = 1; i < n; i += 2)
        arr1.pb(v[i]);
    pan(i,(int)arr1.size())
        arr.pb(arr1[i]);
    pan(i,(int)arr1.size())
        arr.pb(arr1[i]);
    ll pts = 0;
    pan(i,(n+1)/2)
        pts += arr[i];
    res = max(res, pts);
    pans(i,(int)arr.size(), (n+1)/2){
        pts += arr[i];
        pts -= arr[i-((n+1)/2)];
        res = max(res, pts);
    }
    cout << res << endl;
}
