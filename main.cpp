#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll h1, b1, h2, b2;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> h1 >> b1 >> h2 >> b2;
  const auto& p1 = h1 * 3 + b1;
  const auto& p2 = h2 * 3 + b2;
  if (p2 < p1) {
    cout << "1 " << p1 - p2;
  } else if (p1 < p2) {
    cout << "2 " << p2 - p1;
  } else {
    cout << "NO SCORE";
  }

  return 0;
}