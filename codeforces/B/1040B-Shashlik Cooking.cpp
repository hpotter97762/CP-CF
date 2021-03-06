#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define fs first
#define sc second
#define INIT std::ios_base::sync_with_stdio(0);cin.tie(0);cout<<fixed<<setprecision(25);
#define pi 3.141592653589793238462643383279502884197
//#define e 2.7182818284590452353602874713526624977572

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vi;
typedef std::vector<bool> vb;
typedef std::vector<char> vc;
typedef std::pair<ll,ll> pii;
typedef std::vector<pii> vii;

using namespace std;
using namespace __gnu_pbds;

const int RANDOM = chrono::high_resolution_clock::now().time_since_epoch().count();
struct chash {
    int operator()(int x) const { return (x ^ RANDOM); }
};
gp_hash_table<ll,ll,chash> aBetterHashMap;
const ll mod=1e9+7;

int main(){
    INIT
    ll n,k;
    cin>>n>>k;
    cout<<(ll)ceil(n*1.0/(2*k+1))<<'\n';
    ll st;
    if(n%(2*k+1)<=k&&n%(2*k+1)!=0)
        st=1;
    else
        st=k+1;
    while(st<=n){
        cout<<st<<' ';
        st+=2*k+1;
    }
    return 0;
}
