#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define pll std::pair<ll, ll> 
#define ppll std::pair<pll, ll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::unordered_map<ll, ll> 
#define mpll std::unordered_map<pll, ll>
#define mppll std::unordered_map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define len length()
#define sz size()
const ll mod = 1e9 + 7;
const ll INF = 0x7FFFFFFFFFFFFFFF>>1;

/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/

ll sg[8123456];
ll sg1[8123456];

void build(ll idx,ll l,ll r)
{
    if(l==r){
        sg[idx]=LLONG_MIN;
        return;
    }
    ll mid=(l+r)/2;
    build(idx*2,l,mid);
    build(idx*2+1,mid+1,r);
    // re(i,2000002)
    //     sg[i]=-1;
    sg[idx]=max(sg[idx*2],sg[idx*2+1]);
}

void update(ll idx,ll l,ll r,ll id,ll val)
{
    if(l==r){
        sg[idx]=val;
        return;
    }
    ll mid=(l+r)/2;
    if(id<=mid)
        update(idx*2,l,mid,id,val);
    else
        update(idx*2+1,mid+1,r,id,val);

    sg[idx]=max(sg[idx*2],sg[idx*2+1]);
}

ll query(ll idx,ll l,ll r,ll s,ll e)
{
    if(e<l || r<s)
        return LLONG_MIN;
    if(s<=l && r<=e)
       return sg[idx];
    ll mid=(l+r)/2;
    return max(query(idx*2,l,mid,s,e),query(idx*2+1,mid+1,r,s,e));
    
}

void build1(ll idx,ll l,ll r)
{
    if(l==r){
        sg[idx]=LLONG_MIN;
        return;
    }
    ll mid=(l+r)/2;
    build1(idx*2,l,mid);
    build1(idx*2+1,mid+1,r);
    sg1[idx]=max(sg1[idx*2],sg1[idx*2+1]);
}

void update1(ll idx,ll l,ll r,ll id,ll val)
{
    if(l==r){
        sg1[idx]=val;
        return;
    }
    ll mid=(l+r)/2;
    if(id<=mid)
        update1(idx*2,l,mid,id,val);
    else
        update1(idx*2+1,mid+1,r,id,val);

    sg1[idx]=max(sg1[idx*2],sg1[idx*2+1]);
}

ll query1(ll idx,ll l,ll r,ll s,ll e)
{
    if(e<l || r<s)
        return LLONG_MIN;
    if(s<=l && r<=e)
       return sg1[idx];
    ll mid=(l+r)/2;
    return max(query1(idx*2,l,mid,s,e),query1(idx*2+1,mid+1,r,s,e));
    
}

ll p[312345];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("B_in.txt","r",stdin);
    
        ll ttt,bkkk;
        cin>>ttt;
        bkkk=ttt;
        while(ttt--) {
            cout<<"Testcase - "<<bkkk-ttt<<"\n";
    #endif

//--------------------------------------------------------------------------------------

    s(n);
    re(i,n){
        cin>>p[i];
        p[i]+=1000001;
    }
    build(1,1,2000001);
    build1(1,1,2000001);
    // if(p[0/
        update(1,1,2000001,p[0],p[0]);
    rep(i,2,n)
    {
        // if(p[i]<0)
        //     update1(1,1,n,-p[i],-p[i]);
        // else 
        // cout<<p[i]<<endl;
            update1(1,1,2000001,p[i],p[i]);
    }
    ll ans=LLONG_MIN;
    rep(j,1,n-1)
    {
        ll i;
        // if(p[j]<0)
        //     i=query(1,1,n,0,-(p[j]-1));
        // else 
            i=query(1,1,2000001,1,p[j]-1);
        ll k;
        // if(p[j]<0)
        //     k=query1(1,1,n,-(p[j]+1),2000000);
        // else 
            k=query1(1,1,2000001,p[j]+1,2000001);
        // cout<<i<<" "<<p[j]-1000000<<" "<<k<<endl;
        // if(i>=1000000)
            i-=1000001;
        // els
        //     i=-i;
        // if(k>=1000000)
            k-=1000001;
        // else
            // 999997

        //     k=-k;
        cout<<i<<" "<<p[j]-1000001<<" "<<k<<endl;
        if(-1000000<=i && i<=1000000 && -1000000<=k && k<=1000000)
            ans=max(ans,i*(p[j]-1000001)*k);
        // if(p[j]<0)
        //     update(1,1,n,-p[j],-p[j]);
        // else 
            update(1,1,2000001,p[j],p[j]);
        // if(p[j]<0)
        //     update1(1,1,n,-p[j],-1000005);
        // else 
            update1(1,1,2000001,p[j],-1);
    }
    if(ans==LLONG_MIN)
        cout<<-1;
    else
        cout<<ans;


//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}