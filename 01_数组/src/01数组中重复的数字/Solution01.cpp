#include <iostream>
#include <algorithm>

#include <vector>
#include <set>

using namespace std; 

class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		if (nums.empty()) return -1;
		
		set<int> s;
		for (int i = 0, len = nums.size(); i < len; i++) {
			if (s.count(nums[i])) return nums[i]; // �ظ��ˣ����� 
			s.insert(nums[i]); // û�ظ������� 
		} 
	
		// û���ظ�Ԫ�� 
		return -1;
	}
};

int main() {
	Solution solu;
	vector<int> nums = {2, 3, 1, 0, 2, 5, 3}; // c++11֧�� 
	
	int res = solu.findRepeatNumber(nums);
	cout << res << endl;
	
	return 0;
} 
