#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")


#define NDEBUG
NDEBUG


#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cstring>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <memory>
#include <queue>
#include <random>


using namespace std;


#define FOR(i, n) for (int i = 0; i < (n); ++i)


// TC_REMOVE_BEGIN
/// caide keep
bool __hack = std::ios::sync_with_stdio(false);
/// caide keep
auto __hack1 = cin.tie(nullptr);
// TC_REMOVE_END


// Section with adoption of array and vector algorithms.


//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
//
//template <class T> using StdTree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;


namespace template_util {


    constexpr int bytecount(uint64_t x) {
        return x ? 1 + bytecount(x >> 8) : 0;
    }

    template<int N>
    struct bytetype {

    };


    /// caide keep
    template<uint64_t N>
    struct minimal_uint : bytetype<bytecount(N)> {
    };
}


int ni(istream& in) {
  int ret;
  in >> ret;
  return ret;
}


void solve(istream& in, ostream& out) {
  auto t = ni(in);
  while (t--) {
    auto n = ni(in);
    bool ok = true;
    FOR(i, n) {
      auto x = ni(in);
      if (x % 2 == 0) {
        ok = false;
      }
    }
    if (ok) {
      out << "YES\n";
    } else {
      out << "NO\n";
    }
  }
}


int main() {
    solve(cin, cout);
    return 0;
}


