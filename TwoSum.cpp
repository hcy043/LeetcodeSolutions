/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
include<iostream>

    class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++)
        {
            int remain = target - nums[i];

            if (map.find(remain) != map.end())
            {
                vector<int> solution = {map[remain], i};
                return solution;
            }
            map[nums[i]] = i;
        }

        return {};
    }
};
/*
Success
Details 
Runtime: 4 ms, faster than 99.99% of C++ online submissions for Two Sum.
Memory Usage: 10 MB, less than 51.90% of C++ online submissions for Two Sum.
*/
