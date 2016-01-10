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

int no_of_rec(int n)
{
	int i, cnt, j;
	for(i = 1; i < n + 1;i++)
	{
		cnt = 0;
		for(j = 1; j <= sqrt(i); j++)
		{
			if(i % j == 0)
				cnt++;
		}
		dp[i] = dp[i - 1] + cnt;
	}
	return dp[n];
}

int main()
{

    dp[0] = 0;
	int n, result, i;
	scanf("%d",&n);
	result = no_of_rec(n);
	printf("%d\n",result);
	//for(i = 0; i< n + 1;i++)
     //   printf("%d : %d \n",i,dp[i]);

	return 0;
}
