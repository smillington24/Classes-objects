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
  Simple advanced;

  basic.num = 10;
  basic.words = "This is a simple object\n";

  advanced.num = 20;
  advanced.words = "This is an advanced object";

  cout << basic.num << "\n";
  cout << basic.words;

  cout << advanced.num << "\n";
  cout << advanced.words;
  return 0;
}
