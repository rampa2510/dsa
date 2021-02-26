/* #include <iostream> */
/* #include<cmath> */

/* using namespace std; */

/* long long int power(long long int n, long long int k) { */
/*   long long int r = n; */

/*   while (k != 1) { */
/*     r *= n; */
/*     cout << r << "\n"; */
/*     k--; */
/*   } */
/*   return r; */
/* } */

/* long long int kRoot(long long int n, long long int k) { */
/*   long long int s = 1, e = n, m, p, ans = -1; */
/*   while (s <= e) { */
/*     m = (s + e) / 2; */
/*     p = pow(m, k); */
/*     /1* cout << m << " " << p << "\n"; *1/ */
/*     if (p <= n) { */
/*       ans = m; */
/*       s = m + 1; */
/*     } else if (p > n) */
/*       e = m - 1; */
/*   } */
/*   return ans; */
/* } */

/* int main() { */
/*   int t; */
/*   cin >> t; */
/*   long long int a[2][t]; */
/*   for (int i = 0; i < t; i++) */
/*     cin >> a[i][0] >> a[i][1]; */

/*   for (int i = 0; i < t; i++) */
/*     cout << kRoot(a[i][0], a[i][1]) << "\n"; */

/*   return 0; */
/* } */
#include <iostream>
#include<cmath>
using namespace std;
long long int kroot(int n,int k)
{
    long long int res=1;
    long long int s=0,e=n;
    while(s<=e)
    {
        long long int mid=(s+e)/2;
        if(pow(mid,k)==n)
        {
            res= mid;
            break;
        }
        else if(pow(mid,k)<n)
        {
            res=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int ans=kroot(n,k);
        cout<<ans<<endl;
    }
	return 0;
}
