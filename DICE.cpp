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

int main()
{

  int t, n, k, i, j, sum_1, sum_2, sum_3, sum_4, sum_5, sum_6;
  int dp[n + 1][k + 1];
  float frac;

  scanf("%d\n",&t);
  while(t--)
  {
    scanf("%d %d",&n, &k);
    for(i = 0;i < n + 1;i++)
    {
      for(j = 0;j < k + 1;j++)
      {
        if(i == 0 || j == 0)
          dp[i][j] = 0;

        if(i - 1 <= 0)
        {
          sum_1 = 0;
        }
        else
        {
          sum_1 = dp[i - 1][j - 1];
        }

        if(i - 2 <= 0)
        {
          sum_2 = 0;
        }
        else
        {
          sum_2 = dp[i - 2][j - 1];
        }

        if(i - 3 <= 0)
        {
          sum_3 = 0;
        }
        else
        {
          sum_3 = dp[i - 3][j - 1];
        }

        if(i - 4 <= 0)
        {
          sum_4 = 0;
        }
        else
        {
          sum_4 = dp[i - 4][j - 1];
        }

        if(i - 5 <= 0)
        {
          sum_5 = 0;
        }
        else
        {
          sum_5 = dp[i - 5][j - 1];
        }

        if(i - 6 <= 0)
        {
          sum_6 = 0;
        }
        else
        {
          sum_6 = dp[i - 6][j - 1];
        }

        dp[i][j] = sum_1 + sum_2 + sum_3 + sum_4 + sum_5 + sum_6;
      }
    }

    frac = (float)((float)dp[n][k]/pow(6,k));
    printf("%f\n",frac*100);
  }

	return 0;
}
