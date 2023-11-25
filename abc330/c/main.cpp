#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

long long findMinValue(long long D)
{
  long long minValue = numeric_limits<long long>::max();
  long long xMax = sqrt(D);

  for (long long x = 0; x <= xMax; ++x)
  {
    long long y = round(sqrt(max(D - x * x, 0LL)));
    minValue = min(minValue, abs(x * x + y * y - D));
  }

  return minValue;
}

int main()
{
  long long D;
  cin >> D;
  cout << findMinValue(D) << endl;
  return 0;
}