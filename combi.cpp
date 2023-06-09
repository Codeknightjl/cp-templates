#include <bits/stdc++.h>
using namespace std;

struct Combi
{
    vector<int> fact;
    vector<int> ifact;
    vector<int> inv;
    vector<int> pow2;
    const int MOD = (1e9 + 7);
    int add(int a, int b)
    {
        a+=b;
        while(a>=MOD) a-=MOD;
        return a;
    }
    void radd(int &a, int b)
    {
        a=add(a,b); 
    }
    int mult(int a, int b)
    {
        return (a*1LL*b)%MOD;
    }
    void rmult(int &a, int b)
    {
        a=mult(a,b);
    }
    int modpow(int a, int b)
    {
        int r=1;
        while(b)
        {
            if(b&1) r=mult(r,a);
            a=mult(a,a);
            b>>=1;
        }
        return r;
    }
    int choose(int a, int b)
    {
        if(a<b) return 0;
        if(b==0) return 1;
        if(a==b) return 1;
        return mult(fact[a],mult(ifact[b],ifact[a-b]));
    }
    int inverse(int a)
    {
        return modpow(a,MOD-2);
    }
    void init(int _n)
    {
        fact.clear(); ifact.clear(); inv.clear(); pow2.clear();
        fact.resize(_n+1);
        ifact.resize(_n+1);
        inv.resize(_n+1);
        pow2.resize(_n+1);
        pow2[0]=1;
        ifact[0]=1;
        fact[0]=1;
        for(int i=1;i<=_n;i++)
        {
            pow2[i]=add(pow2[i-1],pow2[i-1]);
            fact[i]=mult(fact[i-1],i);
            //ifact[i]=mult(ifact[i-1],inv[i]);
        }
        ifact[_n] = inverse(fact[_n]);
        for(int i=_n-1;i>=1;i--)
        {
            ifact[i] = mult(ifact[i + 1], i + 1);
        }
        for(int i=1;i<=_n;i++)
        {
            inv[i] = mult(fact[i-1],ifact[i]);
        }
    }
};