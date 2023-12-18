// preprocessor
#include <iostream>
#include <unordered_map>
using namespace std;

// main start here ...
int main()
{

  unordered_map<string, int> ourmap;
  // insert some data
  ourmap["abc"] = 1;
  ourmap["abc2"] = 2;
  ourmap["abc3"] = 3;
  ourmap["abc4"] = 4;
  unordered_map<string, int>::iterator it;
  it = ourmap.begin();
  while (it != ourmap.end())
  {
    cout << "key " << it->first << " value" << it->second << endl;
    it++;
  }

  return 0;
}