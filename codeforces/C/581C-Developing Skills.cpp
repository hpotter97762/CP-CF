#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define vi vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<ll,ll>
#define vii vector<pair<ll,ll> >
#define fs first
#define sc second
#define pi 3.141592653589793238462643383279502884197
#define exp 2.7182818284590452353602874713526624977572

using namespace std;
const int mod=1000000007;

inline int ri(){
    int res=0,neg=0;
    char c=getchar();
    while((c<'0'||c>'9')&&c!='-')c=getchar();
    if(c=='-')neg=1,c=getchar();
    while(c>='0'&&c<='9'){res=(res<<1)+(res<<3)+c-48;c=getchar();}
    return neg?-res:res;
}

inline ll rl(){
    ll res=0,neg=0;
    char c=getchar();
    while((c<'0'||c>'9')&&c!='-')c=getchar();
    if(c=='-')neg=1,c=getchar();
    while(c>='0'&&c<='9'){res=(res<<1)+(res<<3)+c-48;c=getchar();}
    return neg?-res:res;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n=rl(),k=rl();
    ll a[n];
    ll ans=0;
    for(int i=0;i<n;++i){
        a[i]=rl();
        ans+=a[i]/10;
        a[i]=(10-a[i]%10)%10;
    }
    sort(a,a+n);
    for(int i=0;i<n&&k>=a[i];++i){
        k-=a[i];
        if(a[i])
            ++ans;
    }
    if(k){
        ans=min(10*n,ans+k/10);
    }
    cout<<ans<<'\n';
    return 0;
}

