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
	freopen("melodious-password_in.txt","r",stdin);
#endif
	// freopen("melodious-password_out.txt","w",stdout);

    int n;
    cin >> n;
    char v[5]={'a','e','i','o','u'};
    char c[20]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};

    char a1,a2,a3,a4,a5,a6;

    forall(i,0,5)
    {
        a1=v[i];
        if(n>1)
        {
            forall(j,0,20)
            {
                a2=c[j];
                if(n>2)
                {
                    forall(k,0,5)
                    {
                        a3=v[k];
                        if(n>3)
                        {
                            forall(l,0,20)
                            {
                                a4=c[l];
                                if(n>4)
                                {
                                    forall(m,0,5)
                                    {
                                        a5=v[m];
                                        if(n>5)
                                        {
                                            forall(o,0,20)
                                            {
                                                a6=c[o];
                                                cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
                                            }
                                        }
                                        else
                                        {
                                            a6='\0';
                                            cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
                                        }
                                    }
                                }
                                else
                                {
                                    a5='\0';a6='\0';
                                    cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
                                }
                            }
                        }
                        else
                        {
                            a4='\0';a5='\0';a6='\0';
                            cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
                        }
                    }
                }
                else
                {
                    a3='\0';a4='\0';a5='\0';a6='\0';
                    cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
                }
            }
        }
        else
        {
            a2='\0';a3='\0';a4='\0';a5='\0';a6='\0';
            cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
        }
    }

    forall(i,0,20)
    {
        a1=c[i];
        if(n>1)
        {
            forall(j,0,5)
            {
                a2=v[j];
                if(n>2)
                {
                    forall(k,0,20)
                    {
                        a3=c[k];
                        if(n>3)
                        {
                            forall(l,0,5)
                            {
                                a4=v[l];
                                if(n>4)
                                {
                                    forall(m,0,20)
                                    {
                                        a5=c[m];
                                        if(n>5)
                                        {
                                            forall(o,0,5)
                                            {
                                                a6=v[o];
                                                cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
                                            }
                                        }
                                        else
                                        {
                                            a6='\0';
                                            cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
                                        }
                                    }
                                }
                                else
                                {
                                    a5='\0';a6='\0';
                                    cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
                                }
                            }
                        }
                        else
                        {
                            a4='\0';a5='\0';a6='\0';
                            cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
                        }
                    }
                }
                else
                {
                    a3='\0';a4='\0';a5='\0';a6='\0';
                    cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
                }
            }
        }
        else
        {
            a2='\0';a3='\0';a4='\0';a5='\0';a6='\0';
            cout<<a1<<a2<<a3<<a4<<a5<<a6<<endl;
        }
    }
    return 0;
}
