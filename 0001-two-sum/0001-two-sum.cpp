#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // {숫자: 인덱스} 저장용 맵
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // 필요한 짝꿍 숫자 계산
            
            // 맵에 짝꿍 숫자가 이미 들어있다면 정답 리턴
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }
            
            // 없으면 현재 숫자와 인덱스를 맵에 저장
            num_map[nums[i]] = i;
        }
        
        return {};
    }
};