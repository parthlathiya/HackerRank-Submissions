#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(llu i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long
#define llu long long unsigned
#define ld long double
#define mod 1000000007

llu convert(llu l)
{

    string s=to_string(l);
    int i=0;
    while(i<s.length() && (s[i]=='2' || s[i]=='3' || s[i]=='5' || s[i]=='7'))
        i++;
    if(i<s.length())
    {
        s[i]=s[i]<='2'?'2':s[i]<='3'?'3':s[i]<='5'?'5':s[i]<='7'?'7':'x';
        int smart=i;
        bool carry=false;
        if(s[i]=='x')
        {
            s[i]='2';
            carry=true;
            while(carry && i>0)
            {
                i--;
                s[i]=s[i]<'2'?'2':s[i]<'3'?'3':s[i]<'5'?'5':s[i]<'7'?'7':'x';
                if(s[i]=='x')
                {
                    s[i]='2';
                    carry=true;
                }
                else
                    carry=false;
            }
        }
        forall(j,smart+1,s.length())
            s[j]='2';

        string::size_type sz = 0;
        llu temp=stoull(s,&sz,10);
        if(carry)
            temp=pow(10,s.length())*2+temp ;
        return temp;
    }
    else
            return l;
}

ld nextnum(ld n)
{
    llu l=(llu)n;
    bool carry=false;
    int smart=0;
    ld ans=0;
    int d;
    while(l)
    {
        d=l%10;
        l/=10;
        if(carry || smart==0)
        {
            if(!carry)
            {
                d=d==2?3:d==3?5:d==5?7:-1;
                if(d==-1)
                {
                    d=2;
                    carry=true;
                }
            }
            else
            {
                d=d==2?3:d==3?5:d==5?7:-1;
                if(d==-1)
                {
                    d=2;
                    carry=true;
                }
                else
                    carry=false;
            }
        }
        ans= ans+ pow(10,smart++)*d;
    }
    if(carry)
        ans+= pow(10,smart++)*2;
    return ans;
}


bool isprime(ld n)
{
    llu nn = (llu) n;
    if (nn <= 1)
        return false;
    if (nn <= 3)
        return true;

    if((nn+1)%6!=0 && (nn-1)%6!=0)
        return false;
    if (nn%2 == 0 || nn%3 == 0)
        return false;

    for(llu i=5; i*i<=nn; i=i+6)
        if (nn%i == 0 || nn%(i+2) == 0)
           return false;
    return true;
}

int main()
{
    llu l,r;
    cin>>l>>r;
    ld n=convert(l);
    llu ans=0;
    while(n<=r)
    {
        if(isprime(n))
            ans++;
        n=nextnum(n);
    }
    cout<<ans;
    return 0;
}
