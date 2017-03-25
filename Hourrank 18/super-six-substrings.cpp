#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007






int main()
{

#ifndef ONLINE_JUDGE
	freopen("super-six-substrings_in.txt","r",stdin);
#endif

    string s;
    cin>>s;

    ll a[s.length()];
    a[0]=(int)s[0];
    forall(i,1,s.length())
    {
        a[i]=a[i-1]+s[i];
    }
    ll ans=0;
    forall(i,0,s.length())
    {
        if(s[i]=='0' || s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8')
        {
            if(a[i]%3==0 && s[0]!='0')
                ans++;

            forall(j,0,i)
            {
                if((a[i]-a[j])%3==0 && s[j+1]!='0')
                    ans++;
            }
        }
        if(s[i]=='0')ans++;
    }

    cout<<ans;

    return 0;
}
