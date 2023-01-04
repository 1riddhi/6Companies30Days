class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
    
        if(nums.size()==1) return 0;
        int ele=nums[0],id=-1,n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0ll);
        int d=0;
        for(int i=0;i<n;i++) d+=nums[i]*i;
       int maxi=d;
        for(int i=1;i<n;i++){
            d=d+sum-n*nums[n-i];
            maxi=max(maxi,d);
        }
        return maxi;

    }
};
