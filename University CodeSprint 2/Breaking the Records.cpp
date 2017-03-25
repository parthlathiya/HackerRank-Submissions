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
	freopen("in.txt","r",stdin);
#endif


		int N;
        cin >> N;
        ll t;
        cin >> t;
        ll ma=t,mi=t;
        ll ans1=0,ans2=0;
        forall(i,1,N)
        {
            cin >> t;
            if(t<mi)
            {
            mi=t;
            ans1++;
            }
            if(t>ma)
            {
            ma=t;
            ans2++;
            }
        }
                cout << ans2 << " " << ans1 << endl;

return 0;
}
