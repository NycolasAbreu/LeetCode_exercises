// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
#include <map>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] = i;
        }
        for (int j = 0; j < nums.size() ; j++) {
            int complement = target - nums[j];
            if (m.find(complement) != m.end() && m[complement] != j){
                return {j, m[complement]};
            }
        }

        return {};
    }
};
// @lc code=end

