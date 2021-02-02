//#define FILEINOUT

//includes
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <deque>

using namespace std;

//files
#ifdef FILEINOUT
ifstream In("Input.txt");
ofstream Out("Output.txt");
#else
#define In cin
#define Out cout
#endif

//macross
//loops
#define fori(x) for (ll i = 0; i < (x); i++)
#define fordi(x) for (ll i = (x - 1); i >= 0; i--)
#define forj(x) for (ll j = 0; j < (x); j++)
#define fordj(x) for (ll j = (x - 1); j >= 0; j--)
#define forn(i, n) for (ll i = 0; i < (n); i++)
#define fordn(i, n) for (ll i = (n - 1); i >= 0; i--)
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define FORD(i, a, b) for (ll i = (a); i >= (b); i--)
#define forin(x) for (auto &t : (x))
//upgraded functions
#define min3(a, b, c) min(ll(a), min(ll(b), ll(c)))
#define max3(a, b, c) max(ll(a), max(ll(b), ll(c)))
#define abs0(x) max(L0, ll(x))
//math
#define pow2(x) ((x) * (x))
#define pow3(x) ((x) * (x) * (x))
#define close_int(x) ((ll)((ld)(x) + 0.5))
//geometry
#define leg(a, b) ld(sqrt(pow2(a) - pow2(b))
#define hypotenuse(a, b) ld(sqrt(pow2(a) + pow2(b)))
#define dist(xa, ya, xb, yb) hypotenuse(xb - xa, yb - ya)
//others
#define all(x) (x).begin(), (x).end()
#define improve(a, b) (a = (a < (b) ? (b) : a))
#define deimprove(a, b) (a = (a > (b) ? (b) : a))
#define dosort(x) sort(all(x))
#define doreverse(x) reverse(all(x))
#define read(x) for (auto &t : (x)) In >> t;
#define write(x) for (auto &t : (x)) Out << t << ' ';
#define watch(x) cout << (#x) << " --> " << (x) << endl
//olympics
#define fastIO { ios::sync_with_stdio(NULL); In.tie(NULL); Out.tie(NULL); }
#define is_2_power() (x && (!(x&(x-1)))
#define endl '\n'
#define in(x) ll x; In >> x

typedef long long  ll;
typedef long double ld;
typedef pair<ll, ll> ii;
typedef pair<double, double> dd;
typedef vector<ll> vi;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<ii> vii;
typedef vector<dd> vdd;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vc> vvc;
typedef set<ll> si;
typedef set<string> ss;
typedef map<ll, ll> mii;
typedef map<string, ll> msi;
typedef queue<ll> qi;
typedef priority_queue<ll> maxheap;
typedef priority_queue <ll, vi, greater<ll> > minheap;
typedef deque<ll> dqi;

//constants
const ld ZERO = 1e-15;
const ld EPS = 1e-10;
const ll MAXN = 100500;
const ll INF9 = 2 * 1e9;
const ll INF = 4 * 1e18;
const ll L0 = 0;
const ld PI = acos(-1);
const ld sq2 = sqrt(2.0);

// ------------------    CODE    ------------------ //

int main() {
    fastIO

    in(q);
    while (q--) {
        in(l); in(r);
        ll d = r - l;
        if (l >= (r + 2) / 2) Out << "YES";
        else Out << "NO";
        Out << endl;
    }

    return 0;
}
