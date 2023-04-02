#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
 
using namespace std; 
using namespace __gnu_pbds;
 
typedef long long ll;
typedef double db;
typedef long double ld;
typedef string str;
 
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef pair<db, db> pdb;
typedef pair<ld, ld> pld;
typedef pair<str, str> pstr;
 
typedef vector<int> vi; 
typedef vector<ll> vll; 
typedef vector<db> vdb; 
typedef vector<ld> vld;
typedef vector<str> vstr; 
typedef vector<pi> vpi;
typedef vector<pll> vpll; 
typedef vector<pdb> vpdb; 
 
#define fi first
#define se second
#define mp make_pair
#define pf push_front 
#define pb push_back
#define ins insert 
#define eb emplace_back 
#define fbo find_by_order
#define ook order_of_key
#define rsz resize
#define lb lower_bound 
#define ub upper_bound 

#define len(s) (int)s.length()
#define sz(v) (int)v.size()
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))

#define rep(a, b, c) for(int a=b; a<c; a++) 
#define per(a, b, c) for(int a=b; a>c; a--) //do not include boundaries on the right
#define repn(a, b, c) for(int a=b; a<=c; a++) 
#define pern(a, b, c) for(int a=b; a>=c; a--) //include boundaries on the right
 
#define yes cout << "YES"<< "\n" 
#define no cout << "NO" << "\n" 
#define out(x) cout << x << "\n"
#define outs(x) cout << x << " "
#define el cout << "\n"

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)    
#define INF (ll) 3e18
const ll mod = 1e9+7;
const double eps = 1e-9;