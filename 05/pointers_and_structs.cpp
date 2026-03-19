#include <iostream>

struct time_of_day
{
  unsigned char h;
  unsigned char m;
};

void print(time_of_day t)
{
  std::cout << (int)t.h << ':'
            << (int)t.m << '\n';
}

void example_1()
{
  std::cout << "== example 1 ==\n";
  time_of_day t{12, 57};
  print(t);
  time_of_day *p = &t;
  (*p).h = 13;
  (*p).m = 58; // t now contains { 13, 58 }
  print(t);
  *p = {14, 59};
  print(t);
}

void example_2()
{
  std::cout << "== example 2 ==\n";
  time_of_day t{12, 57};
  time_of_day *p = &t;
  p->h = 13; // <=> (*p).h = 13;
  p->m = 58; // <=> (*p).m = 58;
  print(t);
}

void example_3()
{
  std::cout << "== example 3 ==\n";
  time_of_day t{12, 57};
  time_of_day *p = &t;
  unsigned char *h = &(t.h);
  unsigned char *m = &(p->m);
  *h = 13; // <=> t.h = 13;
  *m = 58; // <=> t.m = 58;
  print(t);
}

void example_4()
{
  std::cout << "== example 4 ==\n";
  time_of_day t{12, 57};
  time_of_day *p = &t;
  unsigned char *h = &((*p).h);
  unsigned char *m = &(p->m);
  *h = 13; // <=> t.h = 13;
  *m = 58; // <=> t.m = 58;
  print(t);
}

int main()
{
  example_1();
  example_2();
  example_3();
  example_4();
  return 0;
}
