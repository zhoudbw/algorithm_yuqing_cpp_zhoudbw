#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int majorityElement(vector<int> &nums) {
		int candidate = -1, count = 0; // ��ѡ��, Ʊ�� 
		for (int i = 0, len = nums.size(); i < len; i++) {
			// count == 0���ú�ѡ�� 
			if (count == 0) candidate = nums[i];
			// ������Ԫ���Ƿ���ں�ѡ�ˣ����д����ļӼ� 
			if (nums[i] == candidate) count++;
			if (nums[i] != candidate) count--; 
		} 
		return candidate;
	}
};

int main() {
	Solution solu;
	vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
	int manyNum = solu.majorityElement(nums);
	
	cout << manyNum << endl;
	
	return 0;
} 
