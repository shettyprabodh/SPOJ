#include <bits/stdc++.h>
using namespace std;
#define ll 			long long int
#define lu 			unsigned long long int
#define si(x) 		scanf("%d",&x)
#define sl(x) 		scanf("%lld",&x)
#define ss(s) 		scanf("%s",s)
#define pii			pair<int,int>
#define pll			pair<ll,ll>
#define vpi 		vector< pii >
#define vpll 		vector< pll >
#define vl 			vector<ll>
#define vi 			vector<int>
#define vvl 		vector< vl >
#define vvi 		vector< vi >
#define pb 			push_back
#define mp 			make_pair
#define rep(i,n,x) 	for(i=x;i<n;i++)
#define f(i,n) 		rep(i,n,0)
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();++it)
#define all(a)		a.begin(),a.end()
#define sortall(a) 	sort(all(a))
#define mem(a,x) 	memset(a,x,sizeof(a))
#define MOD 		1000000007
#define PI 			3.1415926535897932384626
#define F 			first
#define S 			second
#define endl		'\n'
#define all(c) c.begin(), c.end()

int dp[10000];
int a[10000];

long long int d2zero(int* a, int n)
{
  int i;
  for(i = 0; i < n + 1; i++)
  {
    
  }
}

int main()
{
  dp[0] = 0;
  int t, n;
  scanf("%d\n",&t);
  while(t--)
  {
    scanf("%d",&n);
    for(i = 0; i < n;i++)
      scanf("%d",&a[i]);
  }

	return 0;
}
