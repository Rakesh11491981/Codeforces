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

bool check(){
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vl v(n), b(n);
        int x = 0, y = (n > 1) ? 0 : 1;
        pan(i,n){
            cin >> v[i];
            if(v[i] == k) b[i] = 1, x = 1;
            else if(v[i] < k) b[i] = 0;
            else b[i] = 2;
        }
        if(x){
            pan(i,n-1){
                if(b[i] > 0 && b[i+1] > 0)
                    y = 1;
            }
            if(!y){
                pan(i,n-2)
                    if(b[i] > 0 && b[i+2] > 0)
                        y = 1;
            }
            if(y)
                cout << "yes\n";
            else
                cout << "no\n";
        }
        else
            cout << "no\n";
    }
}
