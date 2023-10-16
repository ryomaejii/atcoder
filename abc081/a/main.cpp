#include <iostream>
using namespace std;

int main()
{
  int s;
  cin >> s;
  int count = 0;
  for (int i = 0; i < 3; i++)
  {
    if (s % 10 == 1)
    {
      count++;
    }
    s /= 10;
  }

  cout << count << endl;
}