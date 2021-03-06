#include <algorithm>
#include <iostream>
#include <cassert>
#include <climits>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <complex>
#include <cctype>
#include <cstdio>
#include <bitset>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <list>
#include <map>
#include <set>
using namespace std;
template<class T> inline void checkmin(T &a, const T &b) { if(a > b) a = b; }
template<class T> inline void checkmax(T &a, const T &b) { if(a < b) a = b; }
typedef long long LL;
typedef long double LD;
#define sz size()
#define mp make_pair
#define pb push_back
#define x first
#define y second
typedef pair<int,int> PII;
typedef pair<LL,int> PLI;
typedef pair<LL,LL> PLL;
template<class T> inline T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template<class T> T lcm(const T &a,const T &b) { return a*(b/gcd(a,b)); }
template<class T> inline T sqr(T X) { return X * X; }
const long double PI=acos(-1.0L);
#define SET(t,v) memset((t), (v), sizeof(t))
#define ALL(c) (c).begin(), (c).end()
#define RALL(c) (c).rbegin(), (c).rend()
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define UNIQUE(c) (c).resize(unique(ALL(c))-(c).begin())
typedef vector<int> VI;
typedef vector<LD> VLD;
typedef vector<LL> VLL;
typedef vector<PII> VPII;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
#define Dhelper(X) " " << #X << "='" << (X) << "'"
#define D(X) {cerr << __LINE__ << ":" << Dhelper(X) << endl;}
#define D2(X,Y) {cerr << __LINE__ << ":" << Dhelper(X) << Dhelper(Y) << endl;}
#define D3(X,Y,Z) {cerr << __LINE__ << ":" <<Dhelper(X)<<Dhelper(Y)<<Dhelper(Z)<< endl;}
#define D4(X,Y,Z,W) {cerr << __LINE__ << ":" <<Dhelper(X)<<Dhelper(Y)<<Dhelper(Z)<<Dhelper(W)<< endl;}
#define D5(X,Y,Z,W,V) {cerr << __LINE__ << ":"<<Dhelper(X)<<Dhelper(Y)<<Dhelper(Z)<<Dhelper(W)<<Dhelper(V)<< endl;}
#define Dv(X) {cerr << __LINE__ << ":  " << #X << " = {"; for(int __i=0;__i<(X).size();__i++) cerr<<" "<<(X)[__i];cerr<<" }"<<endl;}
#define Da(X,n) {cerr << __LINE__ << ":  " << #X << " = {"; for(int __i=0;__i<(n);__i++) cerr<<" "<<(X)[__i];cerr<<" }"<<endl;}
#define Rep(i, n) for(int i = 0; i < (n); ++i)
#define Repe(i, n) for(int i = 0; i <= (n); ++i)
#define For(i,a,b) for(int i=(a); i<(b); i++)
#define Fore(i,a,b) for(int i=(a); i<=(b); i++)
#define Ford(i,a,b) for(int i=(a); i>=(b); i--)
#define Foreach(it,X) for(__typeof((X).begin())it=(X).begin();it!=(X).end();++it)
template<class T> bool isprime(T n) { if(n<2) return false; if(n%2 == 0)return n==2; for(T i=3;i*i<=n;i+=2) if (n%i==0) return false; return true; }
template<class T> inline T iabs(T a) { if(a<0) return -a; return a; }
template<class T> T Dist(T x1,T y1,T x2,T y2) { return sqrt(sqr(x1-x2)+sqr(y1-y2)); }
template<class T> T DistSqr(T x1,T y1,T x2,T y2) { return sqr(x1-x2)+sqr(y1-y2); }
#define iss istringstream
#define oss ostringstream
template<class T> string toString(T n) { oss ost; ost<<n; return ost.str(); }
int toInt(string s){int r=0; iss sin(s); sin>>r; return r; }
LL toLL(string s){ LL r=0; iss sin(s); sin>>r; return r; }
double toDouble(string s){double r=0;iss sin(s);sin>>r;return r;}
LD toLD(string s){LD r=0; iss sin(s); sin>>r; return r; }
template<class T> void stoa(const string &s, T A[], int &n) { n=0; iss sin(s); for(T v; sin>>v; A[n++]=v); }
template<class T> string atos(T A[],int n) { oss sout; for(int i=0;i<n;i++) { if(i>0) sout<<' '; sout<<A[i]; } return sout.str(); }
template<class T> vector<T> atov(T A[], int n) { vector<T> v(n); for (int i=0;i<n;i++) v[i]=A[i]; return v; }
template<class T> void vtoa(vector<T> vi,T A[],int &n) { n=vi.size(); for (int i=0;i<n;i++) A[i]=vi[i]; }
template<class T> vector<T> stov(string s) { vector<T> vi; iss sin(s); for(T v;sin>>v;vi.push_back(v)); return vi; }
template<class T> string vtos(vector<T> vinput) { oss sout; for (int i=0;i<vinput.size();i++) { if(i>0) sout<<' '; sout<<vinput[i]; } return sout.str(); }
#define present(c,X) ((c).find(X) != (c).end())
#define cpresent(c,X) (find(ALL(c),(X)) != (c).end())
#define two(X) (1<<(X))
#define contains(S,X) (((S)&two(X))!=0)
#define twoL(X) (((long long)(1))<<(X))
#define containsL(S,X) ((S&twoL(X))!=0)
#define ones(X) (two(X)-1)
#define onesL(X) (twoL(X)-1)
template<class T> inline int countones(T n) { int c = 0; for(;n;c++) n &= (n-1); return c; }
template<class T> inline T lowbit(T n) { return (n^(n-1))&n; }
#define ForSubset(a,b) for(long long (a) = (b); (a)!=0; (a) = ((b) & ((a)-1)))
template<class T> inline T getmod(T n, T m) {return (n%m+m)%m;}
template<class T> inline T multiplymod2(T a,T b,T m){ return (T)((((LL)(a)*(LL)(b)%(LL)(m))+(LL)(m))%(LL)(m));}
template<class T> inline T powermod2(T p,int e,T m) {if(e==0)return 1%m;else if(e%2==0){T t=powermod2(p,e/2,m);return multiplymod2(t,t,m);} else return multiplymod2(powermod2(p,e-1,m),p,m);}
template<class T> T multiplymod(T a, T b, T c){ T X = 0,Y=a%c; while(b > 0){ if(b%2 == 1) X = (X+Y)%c; Y = (Y*2)%c; b /= 2; } return X%c; }
template<class T> T powermod(T a, T b, T c){ T res=1; while(b > 0){ if(b&1) res=multiplymod(res,a,c); a = multiplymod(a,a,c); b /= 2; } return res%c; }
template<class T> T powermod3(T a, T b, T c){ long long X=1; for(int i=0;i<b;i++) X = (X*a)%c; return X%c; }
bool isleap(int year) { return (year%400==0) || ((year%4 == 0) && (year%100 != 0)); }
template<class T> T ipow(const T &m, const T &n) { if(n==0)return 1; T a=pow(m,n/2); return (n&1)?a*a*m:a*a; }

const int MAXN = 100 * 1000 + 10;

struct node
{
	int left,right,parent;
	int value;
} T[MAXN];


#define Lch(x)    T[x].l
#define Rch(x)    T[x].r
#define Par(x)    T[x].p
#define Val(x)    T[x].val
#define Sum(x)    T[x].sum
#define Lms(x)    T[x].lms
#define Rms(x)    T[x].rms
#define Ms(x)    T[x].ms
#define Size(x)    T[x].size



int main()
{
	
	return 0;
}
