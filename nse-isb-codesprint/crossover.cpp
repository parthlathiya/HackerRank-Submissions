#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define pb push_back
#define mod 1e9+7

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("crossover_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int n;
    cin>>n;
    int t=300,g=60;
    double a[n],s[n],l[n];
    rep(i,0,n)
    {
        cin>>a[i];
    }
    s[t-1]=0;
    rep(i,t-g,t)
    s[t-1]+=a[i];
    s[t-1]/=60.0;
    l[t-1]=0;
    rep(i,0,t)
    l[t-1]+=a[i];

    l[t-1]/=300.0;
    rep(i,t,n)
    {
        s[i]=s[i-1]+(a[i]/60.0)-(a[i-g]/60.0);
        l[i]=l[i-1]+(a[i]/300.0)-(a[i-t]/300.0);
    }
    s[t-1]=roundf(s[t-1] * 100) / 100; 
    l[t-1]=roundf(l[t-1] * 100) / 100; 
    
    rep(i,t,n)
    {
        s[i]=roundf(s[i] * 100) / 100; 
        //cout<<l[i];
        l[i]=roundf(l[i] * 100) / 100; 
        //cout<<l[i];
        if( (s[i-1]>l[i-1] && s[i]<=l[i]) || (s[i-1]<l[i-1] && s[i]>=l[i]) || (s[i-1]==l[i-1] && s[i]!=l[i]) )
            cout<<i+1<<fixed<<std::setprecision(2)<<" "<<s[i]<<" "<<l[i]<<endl;
    }

//  --------------------------------------------------------------------------------------

return 0;
}
