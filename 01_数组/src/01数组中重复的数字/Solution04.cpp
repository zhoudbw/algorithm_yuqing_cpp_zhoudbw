#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int findRepeatNumber(vector<int> &nums) {
		if (nums.empty()) return -1;
		
		// ����vector���ԭ�����Ͻ��б任
		// ��0��λ�ÿ�ʼ��
		// ��0�ű��ƥ��ģ������ٱ�1�ţ�
		// ��1�ű��ƥ��ģ������ٱ�2�ţ�... 
		for (int i = 0, len = nums.size(); i < len; i++) {
			/* ������Ԫ��ֵ��ȣ���ƥ�䣬ֱ����һ�� */ 
			if (nums[i] == i) continue;
			/* ������Ԫ��ֵ���ȣ���nums[i] != i */ 
			else {
				// ������Ԫ��ֵ����ȣ���Ҫ���ǣ����Ա任 / �����Ա任
				// ���Ա任�ͽ���λ�ã������Ա任�����ظ�Ԫ�ء�
				/*�����Ա任��������λ�õ�ֵ������ֵ���*/
				if (nums[nums[i]] == nums[i]) return nums[i];
				/*���Խ���*/
				else { 
					// iλ��Ԫ�غ�nums[i]λ��Ԫ�ؽ��� 	
					int tmp = nums[nums[i]]; // 1
		            nums[nums[i]] = nums[i];
		            nums[i] = tmp;
					
//					for (int i = 0; i < nums.size(); i++) cout << nums[i] << ' ';
//					cout << endl;

					// ��������ֻ�е�ǰλ�õ�����==Ԫ��ֵ������һ��
					// ������Ҫ���ж�һ���Ƿ��Ѿ����������
					// ��������Ӧ������һ��forѭ�������i++
					i--; 
				} 
			}
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
