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

map<lu, lu> dp;

lu max_dollar(lu n)
{
  lu a,b,c;
  if( dp.find((lu)(n/2)) != dp.end() )
  {
    a = dp[(lu)(n/2)];
  }
  else
  {
    a = max_dollar((lu)(n/2));
    dp[(lu)(n/2)] = a;
  }


  if( dp.find((lu)(n/3)) != dp.end() )
  {
    b = dp[(lu)(n/3)];
  }
  else
  {
    b = max_dollar((lu)(n/3));
    dp[(lu)(n/3)] = b;
  }


  if( dp.find((lu)(n/4)) != dp.end() )
  {
    c = dp[(lu)(n/4)];
  }
  else
  {
    c = max_dollar((lu)(n/4));
    dp[(lu)(n/4)] = c;
  }

  if(n >= (a + b + c))
    return n;
  else
    return (a + b + c);
}

int main()
{

  dp[0] = 0;
  dp[1] = 1;

  lu N;
  while(scanf("%lld", &N) == 1)
  {
  lu result = max_dollar(N);
  printf("%lld", result);
  printf("\n");
  }

	return 0;
}
