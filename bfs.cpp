// Bfs on a grid marked with - and # characters

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1000000007;  // 1e9 + 7
const int SZ = 200002;
queue<pair<int,int>> next;
string grid[SZ];
string visited[1002];

void bfs() {
  int r, c = next.front();
  next.pop();
  if (grid[r][c] == '#') return;
  else {
    visited[r][c] = '1';
    next.push(make_pair(r-1,c));
    next.push(make_pair(r,c-1));
    next.push(make_pair(r+1,c));
    next.push(make_pair(r,c+1));
  }
}
