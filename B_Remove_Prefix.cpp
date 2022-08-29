#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define int long long

#define pi pair<int, int>
#define pl pair<ll, ll>
#define pd pair<ld, ld>
#define vi vector<int>

typedef long double lld;
typedef pair<int, int> pii;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

#define vl vector<ll>
#define vd vector<ld>
#define vpi vector<pi>
#define vpl vector<pl>
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define fo(i, n) for (i = 0; i < n; i++)
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define setp(x) setprecision(x) << fixed
#define in insert
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

#define Sort(x) sort(all(x))
#define out(x) cout << x << "\n";
#define trav(i, v) for (auto &i : v)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define take(v) trav(i, v) cin >> i;

template <class T>
using pq = priority_queue<T>;
const char nl = '\n';

ll inf = 1e18;
ll mod = 1000000000 + 7;
int MAXN = 1010101;

vector<int> primes(int x)
{

    vector<int> res;
    vector<bool> bo(x + 1);
    for (int i = 2; i <= x; i++)
    {
        if (bo[i])
            continue;
        res.push_back(i);
        for (int j = 1; i * j <= x; j++)
            bo[i * j] = true;
    }
    return res;
}

vi sieve(int n)
{

    vi v(n + 1, 0);
    trav(i, v)
    {
        i = 1;
    }

    v[0] = v[1] = 0;
    for (int i = 2; i * i <= n; ++i)
    {
        if (v[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                v[j] = 0;
            }
        }
    }

    return v;
}

int gcd(int a, int b)
{

    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int power(int a, int b)
{

    int res = 1ll;
    while (b > 0)
    {
        if (b % 2ll)
            res = (res * a);
        a = (a * a);
        b /= 2ll;
    }
    return res;
}

int fact(int n)
{

    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = (res * i) % mod;
    }
    return res % mod;
}

int bex(int a, int b)
{

    int result = 1ll;
    while (b > 0)
    {
        if (b % 2 == 1)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b /= 2ll;
    }
    return result;
}

bool isPrime(int n)
{

    if (n == 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int divisor( int num ){

    set<int> s;
    for( int i = 1 ; i <= sqrt(num) ; ++i ){
        if( num%i == 0 ){
            s.in(num/i);
            s.in(i);
        }
    }

    return (int)s.size();
}


/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////=====================================/////////////////////////////



signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    cin >> t;

    while (t--){   

       int n ;
       cin >> n;

       vi v(n);
       take(v);

        set<int> s;

        int p = 0;
        for( int i = n-1 ; i >= 0 ; --i ){
            if( s.count(v[i]) ){
                break;
            }
            s.insert(v[i]);
            ++p;
        }

        cout << n-p << endl;

    } 
}