/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <string>
#include <unordered_map>
class Solution {
public:
    int romanToInt(std::string string) {
        const std::unordered_map<char, int> roman_map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int sum = 0;
        for (int i = 0; i < string.size(); i++) {
            if (i + 1 < string.size() && roman_map.at(string[i]) < roman_map.at(string[i + 1])) {
                sum -= roman_map.at(string[i]);
            } else {
                sum += roman_map.at(string[i]);
            }
        }

        return sum;
    }
};
// @lc code=end

