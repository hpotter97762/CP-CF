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
//#define e 2.7182818284590452353602874713526624977572


using namespace std;
const ll mod=1e9+7,phimod=1e9+6;

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
vector<vi> adj;
vi lev,vis;

void dfs(ll a,ll b){
    if(b==lev.size())
        lev.push_back(1);
    else
        lev[b]++;
    vis[a]=1;
    for(auto i:adj[a]){
        if(!vis[i])
            dfs(i,b+1);
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n=rl(),a,b;
    adj.resize(n);
    vis.resize(n,0);
    for(int i=0;i<n-1;++i){
        a=rl()-1,b=rl()-1;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(0,0);
    ll odd=0,even=0;
    for(int i=0;i<lev.size();++i){
        if(i%2)
            odd+=lev[i];
        else
            even+=lev[i];
    }
    cout<<(odd*even)-n+1<<'\n';
    return 0;
}