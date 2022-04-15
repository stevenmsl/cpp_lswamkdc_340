#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <queue>
using namespace sol340;
using namespace std;

/*takeaways
  - use sliding window

*/
int Solution::findMaxLen(string s, int k)
{
  auto maxLen = 0;
  /*the number of occurrences of each char */
  auto freq = unordered_map<char, int>();

  /* l points to the beginning of the window r the end */
  for (auto l = 0, r = 0; r < s.size(); r++)
  {
    /*incoming char */
    ++freq[s[r]];
    /* if there are more than k distinctive chars
       we are shrinking the window size until
       there isn't
    */
    while (freq.size() == k + 1)
    {
      /* char that is leaving the window */
      auto ch = s[l++];
      --freq[ch];
      if (freq[ch] == 0)
        freq.erase(ch);
    }
    /* check the current window size with the max len */
    maxLen = max(maxLen, r - l + 1);
  }

  return maxLen;
}
