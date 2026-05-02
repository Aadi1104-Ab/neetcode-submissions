class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int k=0;
        for(int i =0 ;i<nums.size();i++){
            product*=nums[i];
            if(nums[i]==0) k++;
        }
        vector<int> result(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) result[i] = product/nums[i];
        }
        int p=1,x;
        if(k==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    p *= nums[i];
                }
                else{
                    x=i;
                }
                

            }
            result[x] = p;
        }
        return result;
    }
};