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
#define inf 200007
#define pll pair<ll,ll>
#define pii pair<int,int>
ll gcd(ll a, ll b) { return a % b == 0 ? b : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi rooms(n, 0);
        vl v(n);
        pan(i,n)
            cin >> v[i];
        pan(i,n)
            rooms[ (i + (v[i] % n) + n) % n]++;
        bool res = true;
        pan(i,n){
            if(rooms[i] == 0 || rooms[i] > 1){
                res = false;
                break;
            }
        }
        if(res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
