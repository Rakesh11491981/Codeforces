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

vi adj[1050];

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vl a(n) , m(k);
        pan(i,n) cin >> a[i];
        pan(i,k) cin >> m[i];
        sort(a.begin(), a.end(), greater<ll>());
        sort(m.begin(), m.end());
        ll res = 0;
        for(int j = 0; j < k; j++){
            res += a[j];
            if(m[j] == 1) res += a[j];
        }
        int i = k-1;
        for(int j = 0 ; j < k; j++){
            if(m[j] > 1){
                i += (m[j] - 1);
                res += a[i];
                //cerr << " i : " << i << endl;
                //cerr << " a[i] : " << a[i] << endl;
                //cerr << " m[j] : " << m[j] << endl;
            }
        }
        cout << res << endl;
    }
}
