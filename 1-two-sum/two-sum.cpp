class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int key=target-nums[i];
            if(m.find(key)!=m.end()) return{m[key],i};
            else m.insert({nums[i],i});
        }
        return{};
    }
};