#include <bits/stdc++.h>
using namespace std;

int N;

int main()
{
  cin >> N;
  cout << setw(10) << setfill('0') << bitset<10>(N).to_string() << endl;
}