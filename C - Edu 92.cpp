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
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size(), res = INF;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                int len = 0;
                pan(k,n){
                    if(!(len%2) && s[k] - '0' == i) len++;
                    else if(len%2 && s[k] - '0' == j)  len++;
                }
                if(i != j)
                    if(len%2)
                        --len;
                res = min(res,n-len);
            }
        }
        cout << res << endl;
    }
}
