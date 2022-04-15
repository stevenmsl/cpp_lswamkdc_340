#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol340;

/*
Input: s = "eceba", k = 2
Output: 3
Explanation: T is "ece" which its length is 3.
*/

tuple<string, int, int> testFixture1()
{
  return make_tuple("eceba", 2, 3);
}

/*
Input: s = "aa", k = 1
Output: 2
Explanation: T is "aa" which its length is 2.
*/
tuple<string, int, int> testFixture2()
{
  return make_tuple("aa", 1, 2);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - expect to see " << to_string(get<2>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.findMaxLen(get<0>(f), get<1>(f))) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - expect to see " << to_string(get<2>(f)) << endl;
  Solution sol;
  cout << "result: " << to_string(sol.findMaxLen(get<0>(f), get<1>(f))) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}