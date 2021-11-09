#include <iostream>

using namespace std;

class Simple
{

public:
  int num;
  string words;
};

int
main ()
{

  Simple basic;

  basic.num = 10;
  basic.words = "This is a simple object";

  cout << basic.num << "\n";
  cout << basic.words;
  return 0;
}
