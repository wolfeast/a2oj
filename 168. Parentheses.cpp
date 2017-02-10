#define  _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <math.h>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <cmath>

using namespace std;

#define CLR(a) memset(a, 0, sizeof(a))
#define SET(a) memset(a,1,sizeof(a))
#define FILL(a) fill(a,a+1000000,true);
#define fastIO ios::sync_with_stdio(false)
#define SP system("pause")
#define REP(i,n) for(int i=0;i<n;i++)
#define REPD(i,n) for (int i = (n) - 1; i >= 0; i--)
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define MP make_pair
#define ALL(a) a.begin(),a.end()

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<ii> vii;

#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1000000

int n;
void solve(string s, int l, int r){
	if (l > r || l > n || r > n) return;
	if (l == r && r + l == n + n){
		cout << s << endl;
		return;
	}
	solve(s + "(", l, r + 1);
	solve(s + ")", l + 1, r);
}

int main(){
	fastIO;
	scanf("%d", &n);
	int l = 0, r = 1;
	solve("(", l, r);
	return 0;
}