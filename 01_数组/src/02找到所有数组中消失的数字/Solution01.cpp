#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int> &nums) {
		vector<int> res;
		set<int> appeared;
		
		// ����set���϶��ԣ��������ظ��� 
		// ������ظ�Ԫ��ʱ��ֱ�Ӹ��ǡ� 
		for (int x : nums) appeared.insert(x);
		
		// �����±�+1������Χ 1 ~ n���������ݷ�Χ�� 
		for (int i = 0, len = nums.size(); i < len; i++)
			// i + 1û�г��� 
			if (!appeared.count(i + 1)) res.push_back(i + 1);
			
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
