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

struct s
{
	ll l;
	ll w;
};


bool mf(s a,s b)
{
	return a.l<b.l;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("poles_in.txt","r",stdin);
#endif
	ll n,k;
	cin>>n>>k;

	s a[n];
    ll dp[n+1][k+1];	

    forall(i,0,n)
		cin>>a[i].l>>a[i].w;
    
	sort(a,a+n,mf);

    if(k>=n)
    {
        cout<<"0";
        return 0;
    }
    
    //cout<<a[1].l;
    
//   forall(q,1,n+1)
 //  {   
 //      dp[q][q]=0;
 //  }
    
    dp[1][1]=0;
   // cout<<a[1].l;

    forall(i,2,n+1)
    {
        dp[i][1]=dp[i-1][1]+a[i-1].w*(a[i-1].l-a[0].l);  
     //   cout<<"ff"<<dp[i][1]<<"dd"<<endl;
    }
    forall(i,2,k+1)
    {
        forall(j,i+1,n+1)
        {
        		ll we=0;
	//			cout<<" ssc"<<i<<j<<endl;
				ll tw=a[j-1].w;
				ll ans = dp[j-1][i-1];
	//			cout<<"1"<<ans<<endl;
                forall(p,1,j-i)
				{
					we += tw*(a[j-p].l-a[j-1-p].l);
 //                   cout<<"sss"<<we<<" "<<i<<j<<dp[j-1-p][i-1]<<endl;
					ans=miN(ans,we+dp[j-1-p][i-1]);
  //                  cout<<"2"<<we+dp[j-1-p][i-1]<<endl;
					
                    tw += a[j-1-p].w;
			    }
            		we += tw*(a[i].l-a[i-1].l);
 //                   cout<<"sss"<<we<<" "<<i<<j<<dp[j-1-p][i-1]<<endl;
					ans=miN(ans,we);
            
				dp[j][i]=ans;
        }
    }
    
//    forall(i,1,n+1)
//    {    forall(j,1,k+1)
//        {cout<<dp[i][j]<<" ";}
//    cout<<endl;}
    cout<<dp[n][k];
    
    return 0;
}