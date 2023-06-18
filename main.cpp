#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <chrono>
#include <random>

#ifdef LOCAL
#include "dbg.hpp"
#else
#define dbg(...) {}
#endif

/*** utilities ***/
struct scan{template<typename T>operator T(){T t;std::cin>>t;return t;}};
template<bool up>struct Iter{int i;Iter(int j):i(j){}
int operator*(){return i;}void operator++(){i+=(up?1:-1);}
bool operator!=(const Iter& r){return i!=r.i;}};
template<bool up>struct Range{int l,r;
Range(int a):Range(0,a){}Range(int a,int b):l(a),r(std::max(a,b)){}
Iter<up> begin(){return Iter<up>(up?l:r-1);} Iter<up> end(){return Iter<up>(up?r:l-1);}};
typedef Range<true> range;
typedef Range<false> revrange;
char iterdelim(int i,int n){return(i+1<n)?' ':'\n';};
struct Timer{using C=std::chrono::steady_clock;int n,i;C::time_point s,t;
Timer():Timer(1){} Timer(int j):n(j),i(j),s(C::now()),t(s){}
void measure(){i+=1;if(i>=n){i=0;t=C::now();}}
int elapsed(){measure();return std::chrono::duration_cast<std::chrono::milliseconds>(t-s).count();}
int precise_elapsed(){i=n;return elapsed();}};

/*** types ***/
typedef signed long long i64;
typedef unsigned long long u64;

/*** constants ***/
const i64 I64INF = (i64)1.05e18;
const int INTINF = (int)1.05e9;

using namespace std;


int main() {
    return 0;
}
