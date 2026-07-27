class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int max=INT_MIN;
        int secondmax=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                secondmax=max;
                max=nums[i];

            }
            else if(nums[i]>secondmax && secondmax!=max){
                secondmax=nums[i];
            }
        }
        return (max-1)*(secondmax-1);
    }
};