// Given an array of integers, find two numbers such that they add up to a specific target number.

// The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

// You may assume that each input would have exactly one solution.

// Input: numbers={2, 7, 11, 15}, target=9
// Output: index1=1, index2=2

// class Solution {
// public:
//     vector<int> twoSum(vector<int> &numbers, int target) {
        
//     }
// };


#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) {
		unordered_map<int, int> mp;  // mp用来保存，vector中每个数字，所对应的和为target的数字
		vector<int> result;

		int idx = 1;
		for (auto &num : numbers) {
			if (mp.find(num) == mp.end()) {
				mp[target - num] = idx;
			} else {
				result.push_back(mp[num]);
				result.push_back(idx);
				break;
			}
			++idx;
		}
		return result;
	}

};

int main()
{
	vector<int> numbers = {3, 2, 4};
	Solution s;
	auto ret = s.twoSum(numbers, 6);
	for (const auto &val : ret) {
		printf("%d\n", val);
	}
	return 0;
}





