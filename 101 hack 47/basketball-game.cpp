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

double dis(double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("basketball-game_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int t;
    cin>>t;
    while(t--)
    {
        int xh,yh,xc,yc,sc;
        cin>>xh>>yh>>xc>>yc>>sc;
        int x[5],y[5],s[5];
        rep(i,0,5)
            cin>>x[i]>>y[i]>>s[i];
        if(xh!=xc)
        {
            double m=(yh-yc)/(xh-xc);
            int flag=1;
            double c=yh-m*xh;
            rep(i,0,5)
            {
                double A=sc+(sc*m*m)-s[i]-(s[i]*m*m);
                double B=-sc*2*x[i]-sc*2*m*(y[i]-c)+2*s[i]*xc+2*s[i]*m*(yc-c);
                double C=sc*x[i]*x[i]+sc*(y[i]-c)*(y[i]-c)-s[i]*xc*xc-s[i]*(yc-c)*(yc-c);

                if(B*B<4*A*C)continue;
                else{
                    double del=sqrt((B*B)-(4*A*C));
                    // cout<<A<<B<<C<<"ff"<<del<<"f";
                    double xf;
                    if(A==0)
                        xf=-C/B;
                    else
                        xf=max((-B+del)/2*A,(-B-del)/2*A);
                    double yf=m*xf+c;
                    if(dis(xf,yf,xc,yc)<dis(xh,yh,xc,yc) && dis(xf,yf,xh,yh)<dis(xh,yh,xc,yc))
                        {flag=0;break;}
                }
            }
                if(flag)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
        }
        
        else
        {
                int flag=1;
                rep(i,0,5)
                {
                    double A=s[i]-sc;
                    double B=-s[i]*2*yc+2*sc*y[i];
                    double C=s[i]*yc*yc-sc*x[i]*x[i]+2*sc*x[i]*xc-sc*xc*xc-sc*y[i]*y[i];

                    if(B*B<4*A*C)continue;
                    else{
                        double del=sqrt((B*B)-(4*A*C));
                        // cout<<A<<B<<C<<"ff"<<del<<"f";
                        double yf;
                        if(A==0)
                            yf=-C/B;
                        else
                            yf=max((-B+del)/2*A,(-B-del)/2*A);
                        double xf=xh;
                        if(dis(xf,yf,xc,yc)<dis(xh,yh,xc,yc) && dis(xf,yf,xh,yh)<dis(xh,yh,xc,yc))
                            {flag=0;break;}
                    }
                }
                if(flag)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;

        }
  }


//  --------------------------------------------------------------------------------------

return 0;
}
