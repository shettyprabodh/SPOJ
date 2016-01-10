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

int dp[6101][6101];

int LCS(char *X,char *Y,int m, int n)
{
  //int dp[m + 1][n + 1];
  int result, i, j;

  result = 0;

  for(i = 0;i < m + 1;i++)
  {
    dp[0][i] = 0;
  }

  for(i = 0;i < n + 1;i++)
  {
    dp[i][0] = 0;
  }

  for(i = 1;i < m + 1;i++)
  {
    for(j = 1;j < n + 1;j++)
    {
      if(X[i - 1] == Y[j - 1])
      {
        dp[i][j] = 1 + dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  result = dp[m][n];
  return result;
}

int main()
{

  int result, m, n, t, len1, len2, i;
  char *first, *second;
  first = (char *)malloc(sizeof(char)*6101);
  second = (char *)malloc(sizeof(char)*6101);
  scanf("%d\n",&t);
  while(t--)
  {
    //i = 0;
    //printf("Length:\n");
    //scanf("%d %d",&m, &n);
    //first = (char *)malloc(sizeof(char)*6101);
    //second = (char *)malloc(sizeof(char)*6101);
    //printf("First String:\n");
    scanf("%s",first);
    //printf("Second String:\n");
    //scanf("%s",second);
    //second = first;
    i = strlen(first) - 1;
    while(i >= 0)
    {
        second[strlen(first) - i - 1] = first[i];
        i--;
    }
    //second[i + 1] = "\0";
    //strrev(first);
    //second = " ";
    len1 = strlen(first);
    printf("%d\n%d\n",len1,strlen(second));
    len2 = strlen(second);
    printf("%s\n%s\n",first,second);
    result = LCS(first ,second ,len1 ,len1);
    printf("Result:%d\n",result);
    printf("%d\n",len1 - result);
  }

	return 0;
}
