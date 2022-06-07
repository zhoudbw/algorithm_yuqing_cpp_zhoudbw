#include <iostream>
#include <vector>

class Solution {
public:
	int findRepeatNumber(std::vector<int> &nums) {
		if (nums.empty()) return -1;
		
		int used[nums.size()] = {0}; // ȫ����ʼ��Ϊ0 
		for (int i = 0, len = nums.size(); i < len; i++) {
			// nums[i]��Ӧ����used������ 
			if (used[nums[i]]) return nums[i];
			else used[nums[i]] = 1; 
		} 
		return -1;
	}
};

int main() {
	Solution solu;
	std::vector<int> nums = {2, 3, 1, 0, 2, 5, 3};
	int res = solu.findRepeatNumber(nums);
	std::cout << res << std::endl;
	
	return 0;
}
