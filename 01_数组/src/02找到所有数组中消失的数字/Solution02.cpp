#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int> nums) {
		vector<int> res; 
		for (int i = 0, len = nums.size(); i < len; i++) {
			// ȡԭ�����е�����
			int rawNum = abs(nums[i]);
			// ȷ����Ԫ��Ӧ�����ĸ�������ʾ
			int idx = rawNum - 1;
			// ��������λ�õ�Ԫ����Ϊ���෴����
			// 1. ����Ѿ��Ǹ����ˣ�˵�����λ�õ����Ѿ����ֹ���
			// ���账��ע�⣬֮������Ĺ����У����λ��Ԫ�ؿ��ܱ��û��� 
			// 2. ������Ǹ�������ô�û�Ϊ���෴�� 
			if (nums[idx] > 0) nums[idx] = -1 * nums[idx];
		}
		
		// ���û���������л�������������λ�ö�Ӧ��Ԫ�ط��������� 
		for (int i = 0; i < nums.size(); i++)
			if (nums[i] > 0) res.push_back(i + 1);
			 
		return res;
	}
};

int main() {
	Solution solu;
	vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
	vector<int> res = solu.findDisappearedNumbers(nums);
	
	for (int x : res) cout << x << ',';
	cout << endl;
	
	return 0;
} 
