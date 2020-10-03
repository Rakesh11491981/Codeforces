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


void solve(){
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vl fq(26);
    pan(i,n)
        fq[s[i]-'a']++, fq[t[i]-'a']++;
    ll flag = 1;
    pan(i,26)
        flag &= (!(fq[i]&1));
    if(flag&1){
        vector<pll> v;
        pan(i,n){
            if(s[i] != t[i]){
                pans(j,n,i+1){
                    if(s[j] == s[i]){
                        v.pb({j+1,i+1});
                        swap(s[j], t[i]);
                        break;
                    }
                }
                if(s[i] != t[i]){
                    pans(j,n,i+1){
                        if(t[j] == s[i]){
                            v.pb({j+1, j+1});
                            swap(s[j], t[j]);
                            v.pb({j+1, i+1});
                            swap(s[j] , t[i]);
                            break;
                        }
                    }
                }
            }
        }
        cout << "YES\n";
        cout << v.size() << endl;
        for(auto x : v)
            cout << x.first << " " << x.second << endl;
    }
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tst = 1;
    cin >> tst;
    while(tst--)
        solve();
    return 0;
}

