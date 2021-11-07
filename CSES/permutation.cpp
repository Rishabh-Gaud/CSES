#include <bits/stdc++.h>
 
using namespace std;
#define FILE                          \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);\
    freopen("error.txt", "w", stderr)
#define fi first
#define se second
#define pb push_back
#define ld long double
#define int long long
#define endl '\n'
#define f(i, n) for (int i = 0; i < n; i++)
#define all(x)(x).begin(), (x).end()
 
#define pclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";
#define out(x) cout<<x<<"\n"

const int MOD = 1e9 + 7;
 
#define show(arr) { for (auto x: arr) cout << x << " "; cout << '\n'; }
#define show_(arr, n) F(i, n) show(arr[i])
int dp[2000001];
bool is_prime[2000001];
void seive(int N) {
	  
	for(int i=0;i<N;i++)
         is_prime[i]=true;
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i*i <= N; i++) {
		if (is_prime[i]==true) {
			for (int j = i * i; j <= N; j += i) {
				is_prime[j] = false;
				
			}
		}
	}
	
}

int power(int a, int b, int p)
    {
        if(a==0)
        return 0;
        int res=1;
        a%=p;
        while(b>0)
        {
            if(b&1)
            res=(res*a)%p;           
            b>>=1;
            a=(a*a)%p;
        }
        return res;
    }
//can use map for cnt push back second in a vector
//n = unique(a.begin(),a.end())-a.begin()
//a.resize(n)
 // int z;
 // z = *max_element(a.begin(),a.end());
 // vector<int> a(n + 1);
	//for (int i = 0; i < n; ++i) {
			//int x;
			//cin >> x;
		//	++a[x];
	//	}

 int gcd(int a,int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
 //int lcm(int a, int b)
//{
   // return (a / gcd(a, b)) * b;
//}
void solve() {
    int n;
    cin>>n;
    if(n==1){
    	cout<<1<<endl;
    	return;
    }
    if(n<4){
    	cout<<"NO SOLUTION"<<endl;
    	return ;
    }
    for(int i=1;i<=n;i++){
    	if(i%2==0){
    		cout<<i<<" ";
    	}
    }
    for(int i=1;i<=n;i++){
    	if(i%2==1){
    		cout<<i<<" ";
    	}
    }
    cout<<endl;
    return;

}
int32_t main() {
    ios::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);

#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin); 
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout); 
#endif 
 int t=1;
 // cin >> t;
 while (t--){
  solve();
 }
 pclock;
 return 0;
}

