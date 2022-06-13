#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	int majorityElement(vector<int> &nums) {
		map<int, int> res;
		// �������飬����<Ԫ��ֵ, Ԫ�ظ���>��ʽ�Ĵ洢  
		for (int i = 0, len = nums.size(); i < len; i++) {
			map<int, int>::iterator iter = res.find(nums[i]); // ��¼key����λ�õĵ����� 
			int count; // ��¼Ԫ�س��ֵĴ��� 
			
			if (iter != res.end()) {
				count = iter->second;
				count++;
				
				// ����Ѿ��Ѿ����ڵ�pair������insert(pair)�޷�����	
				res.erase(iter); 
			}
			else count = 1;

			// �ж�count�Ƿ��Ѿ�������len / 2 
			if (count > len / 2) return nums[i];
			// �������������ŵ������У��������� 
			else {
				// �ر�ע�⣺insert(pair<>)ֻ���ڲ����pair������ʱ�Ż���� 
				// ������Ҫ��ɾ����Ȼ���ٲ���
				res.insert(make_pair(nums[i], count)); 
			}
		}
		
		// �޽ⷵ��-1 
		return -1; 
	}
}; 


int main() {
	/*===== ����map*/
//	map<int, int> test;
//	test.insert(make_pair(2, 1));
//	test.insert(make_pair(3, 2));
//	// ����map 
//	for (map<int, int>::iterator i = test.begin(); i != test.end(); ++i) {
//		cout << i->first << ',';
//		cout << i->second << endl;
//	}

	// ��������
	Solution solu;
	vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
	int manyNum = solu.majorityElement(nums);
	
	cout << manyNum << endl;

	return 0;
} 

