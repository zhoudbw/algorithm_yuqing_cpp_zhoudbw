#include <iostream>
#include <algorithm>

#include <vector>

using namespace std;

class Solution {
public:
	int findRepeatNumber(vector<int> &nums) {
		if (nums.empty()) return -1;
		
		// sort������nums��[*begin, *end)֮�����
		// �ر�ע����ǣ�begin()��end()���صĶ��ǵ����� 
		sort(nums.begin(), nums.end());
		
		for (int i = 1, len = nums.size(); i < len; i++) {
			if (nums[i] == nums[i - 1]) return nums[i];
			continue;
		}
		
		return -1;
	}
}; 

int main() {
	Solution solu;
	vector<int> nums = {2, 3, 1, 0, 2, 5, 3};
	
	int res = solu.findRepeatNumber(nums);
	cout << res << endl;
	
	return 0;
}
