#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(llu i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define ld long double
#define mod 1000000007



int main()
{

#ifndef ONLINE_JUDGE
	freopen("minimal-distance-to-pi_in.txt","r",stdin);
#endif


    llu l,r;
    ld pii=3.14159265358979323846264338327950288419716939937510;
    cin >>l>>r;
    ld minn=1.0;
    llu d;
    for(ld i=l;i<r+1;i++)
    {
        ld temp=(i*pii)>round(i*pii)?(i*pii)-round(i*pii):round(i*pii)-(i*pii);
        if(temp<minn){
            minn=temp;
            d=i;
        }
    }
    llu n=round(d*pii);

    cout<<n<<"/"<<d<<endl;
    return 0;
}
