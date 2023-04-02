// Dfs on a grid marked with - and # characters

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1000000007;  // 1e9 + 7
const int SZ = 200002;
string grid[SZ];
string visited[1002];

void dfs(int r, int c) {
  if (grid[r][c] == '#') return;
  else {
    visited[r][c] = '1';
    if (r>0) dfs(r-1,c);
    if (c>0) dfs(r,c-1);
    dfs(r+1,c);
    dfs(r,c+1);
  }
}
