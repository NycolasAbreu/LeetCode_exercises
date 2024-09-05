// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem9.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <algorithm>
#include <string>
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
          return false;
          
        std::string s = std::to_string(x);
        std::string rev_s = s;
        std::reverse(rev_s.begin(), rev_s.end());

        return s == rev_s;
    }
};
// @lc code=end

