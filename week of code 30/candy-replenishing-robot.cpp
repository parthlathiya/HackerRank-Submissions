#include <bits/stdc++.h>
using namespace std;

#define forall(i,a,b)                for(int i=a;i<b;i++)
#define ll long long int
#define llu long long unsigned
#define vll vector<ll>
#define vllu vector<llu>
#define sll set<ll>
#define sllu set<llu>
#define pb push_back
#define mll map<ll,ll>
#define mllu map<llu,llu>
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define mod 1000000007

int main()
{

#ifndef ONLINE_JUDGE
	freopen("candy-replenishing-robot_in.txt","r",stdin);
#endif

    int n,t;
    cin >> n>>t;

    int ans=0;
    int cur=n;
    int temp;
    forall(i,0,t)
    {
        cin>>temp;
        cur-=temp;
        if(cur<5 && i!=t-1)
        {
            ans+=n-cur;
            cur=n;
        }
    }
    cout<<ans;
    return 0;
}
