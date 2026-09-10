class Solution {
public:
void combinationsum(vector<vector<int>> &ans,vector<int>v,vector<int>& candidates,int target,int start){
    if(target==0){
        ans.push_back(v);
        return;
    }
    if(target<0) return;
    for(int i=start;i<candidates.size();i++){
        v.push_back(candidates[i]);
        combinationsum(ans,v,candidates,target-candidates[i],i);
        v.pop_back();
    }

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>v;
        combinationsum(ans,v,candidates,target,0);
        return ans;
    }
};