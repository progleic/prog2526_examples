#include <iostream>
#include <algorithm>

struct time_of_day
{
  unsigned char h;
  unsigned char m;
};

bool less_than(time_of_day a, time_of_day b)
{
  return (a.h < b.h || (a.h == b.h && a.m < b.m));
}

int main()
{
  time_of_day t[4] = {{12, 30}, {8, 10}, {23, 30}, {11, 12}};
  std::sort(t, t + 4, less_than);
  for (time_of_day v : t)
    std::cout << (int)v.h << ':' << (int)v.m << ' ';
  std::cout << '\n';
  return 0;
}
