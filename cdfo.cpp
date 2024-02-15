/*************************************************

 Author :- ZARIX
 Current Aim    :-  Reach pupil at CF
 Moto   :-  Keep going, that's only way
 
***************************************************/
#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vs  vector<string>
#define vc vector<char>
#define mii map<int, int>
#define mci map<char, int>
#define si set<int>
#define sc set<char>
#define pqmax priority_queue<int>
#define pqmin priority_queue<int,vector<int>,greater<int>>
#define stk stack<int>




/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define pob pop_back
#define eb emplace_back
#define all(x) x.begin() , x.end()
#define al( x , n ) x , x + n
#define set_bits __builtin_popcountll 
#define tell_time           cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";


/* PRINTS */
template <class T>
void print_v(vector<T> &v) { int n = v.size() ;int k = 0 ;cout << "{"; for (auto x : v){ k++ ; cout << x ;  if(k  <= n - 1 )cout << "," ;} cout << "}"; }
void print_vv(vector<vector<int>>&v){ int n = v.size() ; int k = 0 ; cout << "[" ; for(auto it : v ) {k++; print_v(it) ; if(k == n ) cout << "]" ; cout << "\n" ; } }
template <class T>
void gi(vector<T> &v , int n ){for( int i = 0 ; i < n ; i++ ) {int x ; cin >> x ; v.push_back(x) ;}}
template <class T>
void gl(vector<T> &v , int n ){for( int i = 0 ; i < n ; i++ ) {ll x ; cin >> x ; v.push_back(x) ;}}
template <class T>
void gc(vector<T> &v , int n ){for( int i = 0 ; i < n ; i++ ) {char x ; cin >> x ; v.push_back(x) ;}}
template <class T>
void gs(vector<T> &v , int n ){for( int i = 0 ; i < n ; i++ ) {string x ; cin >> x ; v.push_back(x) ;}}
template <class T>
void gf(vector<T> &v , int n ){for( int i = 0 ; i < n ; i++ ) {float x ; cin >> x ; v.push_back(x) ;}}
template <class T>
void gb(vector<T> &v , int n ){for( int i = 0 ; i < n ; i++ ) {bool x ; cin >> x ; v.push_back(x) ;}}
template <class T>
void gd(vector<T> &v , int n ){for( int i = 0 ; i < n ; i++ ) {double x ; cin >> x ; v.push_back(x) ;}}



/* UTILS */
//#define MOD 998244353
 #define MOD 1000000007 
// #define MOD 10000000000 
#define PI 3.1415926535897932384626433832795
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
ll calculateMex(unordered_set<int> Set){int Mex = 0; while (Set.find(Mex) != Set.end()) Mex++; return (Mex);}
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool is_prime(ll a) { if (a==1) return 0; for (ll i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;



// fastest way of doing gcd
// ll gcd(ll a, ll b) {
//     if (!a || !b)
//         return a | b;
//     unsigned shift = __builtin_ctz(a | b);
//     a >>= __builtin_ctz(a);
//     do {
//         b >>= __builtin_ctz(b);
//         if (a > b)
//             swap(a, b);
//         b -= a;
//     } while (b);
//     return a << shift;
// }

// for returning all the prime factors ......
// vector<ll>primes(ll n ){
// vector<ll> ans ;
// for(int i = 2 ; i * i <= n ; i++ ){
// 	while(n % i == 0){
// 		n /= i ;
// ans.push_back(i) ;
// }

// }
// if(n > 1){
// 	ans.push_back(n) ;
// }
// return ans ;	
// }


// Returning prime factor and its count....
// map<ll , ll> primes(ll n ){
// map<ll ,ll >mp ;
// for(int i = 2 ; i * i <= n ; i++ ){
// 	while(n % i == 0){
// 		n /= i ;
// mp[i]++ ;
// }

// }
// if(n > 1){
// 	mp[n]++ ;
// }
// return mp ;	
// }

// for calculating factorials...

//  uint64 fact[1000001] ;
// // // uint64 invfact[1000001] ;
// // // ll inversefact( int n ){
// // // 	return pow( n , MOD - 2 ) ;
// // // }
//  void factcal(){
// 	fact[0] = 1 ;
// 	for(int i = 1 ; i <= 1000000 ; i++ ){
// 		fact[i] = ( fact[i-1] * i  ) % MOD ;
//         //invfact[i] = inversefact( fact[i] ) ;
// }
//  }
// // // for calculating nCr ;
// uint64 ncr( int n , int m ){
// 	return (fact[n] % MOD / (fact[ n - m ] % MOD * fact[m] % MOD) % MOD) ;
// }
int add(int a, int b)	{
return a + b;
}


// Another way to calculate ncr ..........
// int nCr(int n, int r) {
   
//     if (r > n) return 0;
  
//     if (r == 0 || n == r) return 1;

//     double res = 0;

//     for (int i = 0; i < r; i++) {

//         res += log(n-i) - log(i+1);
//     }

//     return (int)round(exp(res));
// }

// Another way to calculate ncr ..........
// long long C(int n, int m)
// {
//     long long result = 1 ;
//     for (int i = 0; i < m; ++i)
//     {
//         result *= (n - i);
//         result /= (i + 1);
//     }
//     return result;
// }


// for all prime factors 
// Seive of Erathostheness ..
//                                       

	bool prime[15000105]; 
	void sieve(int n) { 
	  for (ll i = 0; i <= n; i++) prime[i] = 1;
	  for (ll p = 2; p * p <= n; p++) { 
		if (prime[p] == true) { 
		  for (ll i = p * p; i <= n; i += p) 
			prime[i] = false; 
		} 
	  } 
	  prime[1] = prime[0] = 0;
	} 
	 

// Binary Exponentiation ..
// long long binpow(long long a, long long b, long long m) {
//     a %= m;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % m;
//         a = a * a % m;
//         b >>= 1;
//     }
//     return res;
// }
// ll pow(int a , int n ){
// 	int res = 1 ;
// 	while(n){
// 		if(n % 2 ){
// 			res *= a ;
// 			n-- ;
// 		}
// 		else{
// 			a *= a ;
// 			n /= 2 ;
// 		}
// 	}
// 	return res ;
// }
// For modulo exponentiation 
// ll pow(ll a , ll n , ll p){
// 	ll res = 1 ;
// 	a = a % p ;
// 	while(n){
// 		if(n % 2 ){
// 			res = (res * a ) % p ;
// 			n-- ;
// 		}
// 		else{
// 			a = (a * a) % p ;
// 			n /= 2 ;
// 			// n >>= 1;
// 		}
// 	}
// 	return res % p ;
// }



// // For more big number use this : 
// int exp(int x, unsigned int y,ll p){
//     ll res=1; x=x%p;
//     while(y>0){
//         if (y&1) res= (res*x)%p; y=y>>1; x=(x*x)%p;
//     }
//     return res;
// }


//To print total number of divisors 

// ll todiv( ll n ){
// ll cnt ;
// ll ans = 1 ;
// for(int i = 2 ; i * i <=n ; i++ ){
// cnt = 0 ; 
// while( n % i == 0 ){
// 		n /= i ;
// 		cnt++ ; 
// 	} 
// 	ans *= ( cnt + 1 ) ;



// }
// if(ans == 1) return 2 ;
// return ans ;
// }

// /* Main()  function */namespace number_theory {
	// ll gcd(ll x, ll y) {
	//   if (x == 0) return y;
	//   if (y == 0) return x;
	//   return gcd(y, x % y);
	// }
	// bool isprime(ll n) { 
	//   if (n <= 1) return false; 
	//   if (n <= 3) return true; 
	  
	//   if (n % 2 == 0 || n % 3 == 0) return false; 
	  
	//   for (ll i = 5; i * i <= n; i += 6) 
	// 	if (n % i == 0 || n % (i+2) == 0) 
	// 	  return false; 
	  
	//   return true; 
	// } 
	 
	// bool prime[15000105]; 
	// void sieve(int n) { 
	//   for (ll i = 0; i <= n; i++) prime[i] = 1;
	//   for (ll p = 2; p * p <= n; p++) { 
	// 	if (prime[p] == true) { 
	// 	  for (ll i = p * p; i <= n; i += p) 
	// 		prime[i] = false; 
	// 	} 
	//   } 
	//   prime[1] = prime[0] = 0;
	// } 
	 
// 	vector<ll> primelist;
// 	bool __primes_generated__ = 0;
	 
// 	void genprimes(int n) {
// 	  __primes_generated__ = 1;
// 	  sieve(n + 1);
// 	  for (ll i = 2; i <= n; i++) if (prime[i]) primelist.push_back(i);
// 	}
	 
// 	vector<ll> factors(ll n) {
// 	  if (!__primes_generated__) {
// 		cerr << "Call genprimes you dope" << endl;
// 		exit(1);
// 	  }
// 	  vector<ll> facs;
	 
// 	  for (ll i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++) {
// 		if (n % primelist[i] == 0) {
// 		  while (n % primelist[i] == 0) {
// 			n /= primelist[i];
// 			facs.push_back(primelist[i]);
// 		  }
// 		}
// 	  }
// 	  if (n > 1) {
// 		facs.push_back(n);
// 	  }
// 	  sort(facs.begin(), facs.end());
// 	  return facs;
// 	}
//Biggest Divisor 
// 	ll  bigdivs(ll n) {
  //   ll maxi = 1;
  //   for (ll i = 2; i * i <= n; i++) {
  //     if (n % i == 0) {
  //       maxi = max( n / i ,maxi) ;
     
  //     }
  //   }

    
  //   return maxi;
  // }

	// vector<ll> getdivs(ll n) {
  //   vector<ll> divs;
  //   for (ll i = 1; i * i <= n; i++) {
  //     if (n % i == 0) {
  //       divs.push_back(i);
  //       divs.push_back(n / i);
  //     }
  //   }

  //   getunique(divs);
  //   return divs;
  // }
// 
// Modular inverse for Coprime and appling fermat's little theorem and used in chinese reminder theorem. 
// ll modI(ll A, ll M)
// {
//     ll g = gcd(A, M);
//     if (g != 1) return 0 ;
//     else {
//         // If a and m are Coprime, then modulo
//         // inverse is a^(m-2) mode m
        
//              return pow(A, M - 2, M);
//     }
// }
// Chinese reminder theorem .
// ll crt( vector<pair<ll,ll>> &v )
// {
// 	ll ans = 0 ;
// 	int n =  v.size() ;
// 	ll m = 1 ;
// 	for( ll i = 0 ; i < n ; i++ ){
// 		m *= v[i].first ;
// 	}
// 	for( ll i = 0 ; i < n ; i++ ){
// 		ll t = 1 ;
// 		for( ll j = 0 ; j < n ; j++ ){
// 			t *= v[j].first ;
// 			t *= modI( v[j].first , v[i].first ) ;
// 			t %= m ;
// 		}
// 		ans += (t * (v[i].second + m - ans )) % m ;
// 		ans %= m ;
// 	}
// 	return ans ;

// }
// using namespace number_theory;
// set<ll> s ;
// void fans(int x, int y){
// 	int v = y/x;
// 	int ans = x*v*(v+1)/2;
// 	ans-=(x-1)*v;
// 	s.insert(ans);
// }
// Sum of the divisors
// ll sumdiv( ll n ){ll sumi  = 0 ;
// 	for(int i = 1 ; i * i <= n ; i++){
// 		if( n % i == 0){
// 			sumi += i ;
// 			if(i != n / i ){
// 				sumi += n / i ;

// 			}
// 		}
// 	}
// 	return sumi ; 
// }
// for counting divisors . 
// ll cntdiv( ll n ){ll sumi  = 0 ;
// 	for(int i = 1 ; i * i <= n ; i++){
// 		if( n % i == 0){
// 			sumi++ ;
// 			if(i != n / i ){
// 				sumi++ ; ;

// 			}
// 		}
// 	}
// 	return sumi ; 
// }



// For printing pascal triangle and other things

// void printPascal(int n)
// {
      
// for (int line = 1; line <= n; line++)
// {
//     int C = 1 ;
//     for (int i = 1; i <= line; i++) 
//     {
//            cout<< C<<" "; 
//         C = C * (line - i) / i; 
//     }
//     cout<<"\n";
// }
// }

// bool judgeSquareSum(int n)
// {
// for (int i = 2 ; i * i <= n; i++)
// {
// 	int count = 0;
// 	if (n % i == 0)
// 	{

// 		while (n % i == 0)
// 		{
// 			count++;
// 			n /= i;
// 		}

// 		if (i % 4 == 3 && count % 2 != 0)
// 			return false;
// 	}
// }


// return n % 4 != 3;
// }

// Most significant bit ..
// ll msb(ll b) {
//     ll _ = 63 -__builtin_clz(b) ;
   
//     return _;
// }

//Use only in the question having modular inverse .. 
// ll power(long long x, ll y, ll p)
// {
//     ll res = 1;
//     x = x % p;
//     if (x == 0)
//         return 0;
//     while (y > 0)
//     {
//         if (y & 1)
//             res = (res * x) % p;
//         y = y >> 1;
//         x = (x * x) % p;
//     }
//     return res;
// }

// long long modInverse(unsigned long long n,
//                      int p)
// {
//     return power(n, p - 2, p);
// }

// unsigned long long nCrModPFermat(unsigned long long n,
//                                  int r, int p)
// {
//     if (n < r)
//         return 0;
//     if (r == 0)
//         return 1;
//     long long fact[n + 1];
//     fact[0] = 1;
//     for (int i = 1; i <= n; i++)
//         fact[i] = (fact[i - 1] * i) % p;
//     return (fact[n] * modInverse(fact[r], p) % p * modInverse(fact[n - r], p) % p) % p;
// }


// Convex Hull code: .....  
// const int N = 100005;
 
// struct point
// {
//     int x, y;
//     bool operator<(point &p)
//     {
//         if (p.x == x)
//         {
//             return y < p.y;
//         }
//         else
//             return x < p.x;
//     }
//     bool operator==(point &p)
//     {
//         return (x == p.x && y == p.y);
//     }
// };
 
// bool cw(point a, point b, point c)
// {
//     return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) > 0;
// }
// bool ccw(point a, point b, point c)
// {
//     return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) < 0;
// }
// bool collinear(point a, point b, point c)
// {
//     return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) == 0;
// }
// void convex_hull(vector<point> &p)
// {
//     if (p.size() <= 2)
//         return;
//     sort(p.begin(), p.end());
//     // now p[0] is p1,p[n-1] is p2
//     int i, n = p.size();
//     point p1 = p[0], p2 = p[n - 1];
//     vector<point> up, down;
//     up.pb(p1);
//     down.pb(p1);
//     // actually p1  is bottom left point and p2 is top right point
//     for (i = 1; i < n; i++)
//     {
//         if (i == n - 1 || !ccw(p1, p[i], p2))
//         { // p[i] is in the upper half
//             while (up.size() >= 2 && ccw(up[up.size() - 2], up[up.size() - 1], p[i]))
//             {
//                 up.pop_back();
//             }
//             up.pb(p[i]);
//         }
//         if (i == n - 1 || !cw(p1, p[i], p2))
//         { // p[i] is in the lower half
//             while (down.size() >= 2 && cw(down[down.size() - 2], down[down.size() - 1], p[i]))
//             {
//                 down.pop_back();
//             }
//             down.pb(p[i]);
//         }
//     }
//     p.clear();
//     for (int i = 0; i < up.size(); i++)
//     {
//         p.pb(up[i]);
//     }
//     for (int i = 0; i < down.size(); i++)
//     {
//         p.pb(down[i]);
//     }
//     sort(p.begin(), p.end());
//     p.resize(unique(p.begin(), p.end()) - p.begin());
// }

// All subarray which is divisible by K .....
// int subarraysDivByK(vector<ll>& nums, int k) {
//        unordered_map<ll,ll>m;
//         m[0]=1;
//         ll sum=0;
//         ll result=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             sum+=nums[i];
//             int rem=sum%k;
//             if(rem<0)
//                 rem+=k;
//             if(m.find(rem)!=m.end())
//             {
//                 result+=m[rem];
//             }
//             m[rem]++;
            
//         }
//         return result;
//     }


//Binary Search and all for lower and upper bound
 // int lower_bound(vector<int> nums, int target){
 //        int l = 0, r = nums.size()-1, m = 0;
 //        while(l < r) {
 //            m = (l+r)/2;
 //            if(nums[m] < target)
 //                l = m+1;
 //            else 
 //                r = m;
 //        }
 //        return r;
 //    }
//     int upper_bound(vector<int> nums, int target){
//         int l = 0, r = nums.size()-1, m = 0;
//         while(l < r) {
//             m = (l+r)/2;
//             if(nums[m] <= target)
//                 l = m+1;
//             else 
//                 r = m;
//         }
//         return r;
//     }
// int cn(string s){
  
//     int i,N,decimal_number=0,p=0;
//     N=s.size(); // storing the size of string in N
//     for(i=N-1;i>=0;i--) // starting the loop from LSB
//     {
//         if(s[i]=='1') // Checking if string element is 1
//         {
//             decimal_number+=pow(2,p); // if yes, adding the pth power of 2 to the decimal_number
//         }
//         p++; // incrementing the value of p as we move towards MSB
//     }
//     return decimal_number ;
// }
// int longestandsub( int N ){
// 	int bits= floor(log2(N))+1;
// 	   int ans =max(N-pow(2,bits-1)+1,pow(2,bits-2));
// 	   return ans ;
// }
  // int getCount(int x){
  //       int total=0;
  //       while(x%2==0){
  //           x/=2;
  //           total++;
  //       }
  //       return total;
  //   }

// long long so( ll n) {
//  ll a = 1, b = 2;
//   ll s = 0;
//   ll t;

//   while (a <= n) {
//     t = a;
//     a = b;
//     b+= t;
//     s+= (-2 | t) + 1 & t; // Or a & -(a & 1 ^ 1)
//   }
//   return s;
// }

// Number of inversions in an array 

// ll getNumOfInversions(vector<ll> A) {
//   ll N = A.size();
//   if (N <= 1) {
//     return 0;
//   }
 
//   vector<pair<ll, ll>> sortList;
//   ll result = 0;
 
//   // Heapsort, O(N*log(N))
//   for (ll i = 0; i < N; i++) {
//     sortList.emplace_back(A[i], i);
//     push_heap(sortList.begin(), sortList.end());
//   }
 
//   // Create a sorted list of indexes
//   vector<ll> x;
//   while (!sortList.empty()) {
//     // O(log(N))
//     pair<ll, ll> v = sortList.front();
//     pop_heap(sortList.begin(), sortList.end());
//     sortList.pop_back();
 
//     // Find the current minimum's index
//     // the index y can represent how many minimums on the left
//     int y = lower_bound(x.begin(), x.end(), v.second) - x.begin();
 
//     // i can represent how many elements on the left
//     // i - y can find how many bigger nums on the left
//     result += v.second - y;
 
//     x.insert(lower_bound(x.begin(), x.end(), v.second), v.second); 
//   }
 
//   return result;
// }





// for balanced parantheses in different cases.....
    // bool isValid(string s) {
    //    stack<char>st ;
    //    for(auto it : s){

    //        if(it == '(' )st.push(it) ;
    //        else{
    //            if(st.size() == 0 ) return 0 ;
    //            else if(it == ')' && st.top() == '(')st.pop() ;
              
    //            else return false ;
    //        }
    //    }
    //    return st.size() == 0 ;
    // }
// int isVowel(char ch)
// {
//     return (0x208222 >> (ch & 0x1f)) & 1;
//     // same as (2130466 >> (ch & 31)) & 1;
// }

// string encrypt(string text, int s)
// {
//     string result = "";
 
//     // traverse text
//     for (int i = 0; i < text.length(); i++) {
      
 
//         // Encrypt Lowercase letters

//             result += char(int(text[i] + s - 97) % 26 + 97);
//     }
 
//     // Return the resulting string
//     return result;
// }
// #define INT_SIZE 32
 
// // A Trie Node
// struct TrieNode
// {
//     int value;  // Only used in leaf nodes
//     TrieNode *arr[2];
// };
 
// // Utility function to create a Trie node
// TrieNode *newNode()
// {
//     TrieNode *temp = new TrieNode;
//     temp->value = 0;
//     temp->arr[0] = temp->arr[1] = NULL;
//     return temp;
// }
 
// // Inserts pre_xor to trie with given root
// void insert(TrieNode *root, int pre_xor)
// {
//     TrieNode *temp = root;
 
//     // Start from the msb, insert all bits of
//     // pre_xor into Trie
//     for (int i=INT_SIZE-1; i>=0; i--)
//     {
//         // Find current bit in given prefix
//         bool val = pre_xor & (1<<i);
 
//         // Create a new node if needed
//         if (temp->arr[val] == NULL)
//             temp->arr[val] = newNode();
 
//         temp = temp->arr[val];
//     }
 
//     // Store value at leaf node
//     temp->value = pre_xor;
// }
 
// // Finds the maximum XOR ending with last number in
// // prefix XOR 'pre_xor' and returns the XOR of this maximum
// // with pre_xor which is maximum XOR ending with last element
// // of pre_xor.
// int query(TrieNode *root, int pre_xor)
// {
//     TrieNode *temp = root;
//     for (int i=INT_SIZE-1; i>=0; i--)
//     {
//         // Find current bit in given prefix
//         bool val = pre_xor & (1<<i);
 
//         // Traverse Trie, first look for a
//         // prefix that has opposite bit
//         if (temp->arr[1-val]!=NULL)
//             temp = temp->arr[1-val];
 
//         // If there is no prefix with opposite
//         // bit, then look for same bit.
//         else if (temp->arr[val] != NULL)
//             temp = temp->arr[val];
//     }
//     return pre_xor^(temp->value);
// }
 
// // Returns maximum XOR value of a subarray in arr[0..n-1]
// int maxSubarrayXOR(int arr[], int n)
// {
//     // Create a Trie and insert 0 into it
//     TrieNode *root = newNode();
//     insert(root, 0);
 
//     // Initialize answer and xor of current prefix
//     int result = INT_MIN, pre_xor =0;
 
//     // Traverse all input array element
//     for (int i=0; i<n; i++)
//     {
//         // update current prefix xor and insert it into Trie
//         pre_xor = pre_xor^arr[i];
//         insert(root, pre_xor);
 
//         // Query for current prefix xor in Trie and update
//         // result if required
//         result = max(result, query(root, pre_xor));
//     }
//     return result;
// }
// fastest way to find fibonnaci series .
// map<int,int> mp;
// int calculateFibonacci(int n){
//     if (n==0){
//         return 0;
//     }
//     if (n==1 || n==2){
//         return 1;
//     }
//     if (mp.count(n)){
//         return mp[n]%MOD;
//     }
//     if (n%2==0){
//         int x1 = calculateFibonacci(n/2-1)%MOD;
//         int x2 = calculateFibonacci(n/2)%MOD;
//         mp[n] = (((2 * x1)%MOD + x2 )%MOD * x2)%MOD;
//         return mp[n]%MOD;
//     } else{
//         int x1 = calculateFibonacci((n+1)/2)%MOD;
//         int x2 = calculateFibonacci((n-1)/2)%MOD;
//         mp[n] = ((x1 * x1)%MOD + (x2 * x2)%MOD)%MOD;
//         return mp[n]%MOD;
//     }
// }

// long long calculate_exact_reps(int n, int k) {
//     long long res = (n - k + 1) * 26 * pow(25, (n - k));
//     for (int c = 2; c <= n / k; c++) {
//         long long n_minus_ck_plus_c_minus_1 = n - c * (k - 1) + c - 1;
//         long long combinations = 1;
//         for (int i = 1; i <= c; i++) {
//             combinations *= n_minus_ck_plus_c_minus_1 - i + 1;
//             combinations /= i;
//         }
//         res += combinations * 26 * pow(25, (n - c * k + c - 1));
//     }
//     return res;
// }

// long long countValid(int n, int k) {

//     if (k == n) {
//         return (power(26, k,MOD) - 26) ;
//     }
//     if (k == 2) {
//     	long long p = power(25, (n - 1) , MOD) ;
//         return (26 * p) ;
//     }
//     long long res = 0;

//     // inclusion-exclusion
//     res = power(26, n,MOD) - 26;
//     for (int i = k; i < n; i++) {
//         res -= calculate_exact_reps(n, i);
//     }
//     return res;
// }
// vector<int> getNext(const string &needle) {
//     const int m = needle.length();
//     vector<int> next(m);
//     for (int i = 1, len = 0; i < m;) {
//        if (needle[i] == needle[len]) {
//            next[i++] = ++len;
//        } else if (len == 0) {
//            ++i;
//        } else {
//            len = next[len - 1];
//        }
//    }
//    return next;
// }

// string dfs(const  vector<vector<pair<int, char>>>& dp, int len, int x) {
//     return len ? (dfs(dp, len - 1, dp[len][x].first) + dp[len][x].second) : "";   
// }

// string solution(const string &s1, const string &s2) {
//     const int n = s1.length(), m = s2.length(), len = n + m - 1;
//     string r(len, '?');
//     for (int i = 0; i < m; ++i) {
//         if (s2[i] == 'T') {
//             for (int j = 0; j < n; ++j) {
//                 if (r[i + j] != '?' && r[i + j] != s1[j]) {
//                     return "-1";
//                 }
//                 r[i + j] = s1[j];
//             }
//         }
//     }    
//     const vector<int> next = getNext(s1);
//     vector<vector<pair<int, char>>> dp(len + 1, vector<pair<int, char>>(len + 1, {-1, '-'}));
//     queue<int> q;
//     q.push(0);
//     for (int i = 0; i < len; ++i) {
//         char from = r[i], to = r[i];
//         if (r[i] == '?') {
//             from = 'A';
//             to = 'B';
//         }
//         for (int j = q.size(); j; --j) {
//             const int x = q.front();
//             q.pop();
//             for (char c = from; c <= to; ++c) {
//                 int y = x == n ? next[x - 1] : x;
//                 for (; y && c != s1[y]; y = next[y - 1])
//                 ;
//                 const int temp = c == s1[y] ? (y + 1) : 0;
//                 if ((i >= n - 1 && s2[i - n + 1] == 'F' && temp == n) || (dp[i + 1][temp].first >= 0)) {
//                     continue;
//                 }
//                 dp[i + 1][temp] = {x, c};
//                 if (i + 1 == len) {
//                     return dfs(dp, len, temp);
//                 }
//                 q.push(temp);
//             }
//         }    
//     }
//     return "-1";
// }

//       int lastRemaining(int n) {
// if( n == 1 ) return 1 ;
// return 2*(1 + n / 2 - (lastRemaining(n/2))) ;
  
//     }

// string ans(string a ,string x,  int k ){
	
// 	int r = 0 ;int l = 0 ;
// 	string res = "" ;
// 	for( int i = 0 ; i < a.size() ; i++ ){
// 		l++ ;
// if(a[i] == ':') r+=26;
// else if(a[i] == '/') r+=27;
// else if(a[i] =='.') r+= 28 ;
// else {
// r+= a[i] -'a' ;
// }

// if( l % k == 0 ){
// res += x[r%x.size()] ;
// r = 0 ;

// }



// 	}
// 	if( r > 0 ){
// 		res += x[r%x.size()] ;
// 	}
// 	return res ;

// }

//a = a + b - ( b = a ); // one liner for swap .
	bool isPath(vector<vector<int>>arr,int n)

{
	int row = n ;
	int col = n ;

    // set arr[0][0] = 1
    arr[0][0] = 1;
 
    // Mark reachable (from top left) nodes 
    // in first row and first column.
    for (int i = 1; i < row; i++) 
        if (arr[i][0] != -1)
            arr[i][0] = arr[i - 1][0];   
 
    for (int j = 1; j < col; j++) 
        if (arr[0][j] != -1)
            arr[0][j] = arr[0][j - 1];    
 
    // Mark reachable nodes in remaining
    // matrix.
    for (int i = 1; i < row; i++) 
        for (int j = 1; j < col; j++) 
          if (arr[i][j] != -1)
              arr[i][j] = max(arr[i][j - 1],
                            arr[i - 1][j]);       
     
    // return yes if right bottom 
    // index is 1
    return (arr[row - 1][col - 1] == 1);
}

int main() {
	ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);
    int T  = 1 ;
   //cin >> T ;

  while( T-- ){

}
	
cout << endl << " " ;

tell_time ;
    return 0;
}

