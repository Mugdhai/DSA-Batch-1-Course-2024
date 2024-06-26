//Kadane's Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        for(auto it:nums){
            sum += it;
            maxi = max(maxi,sum);
            if(sum<0) sum = 0;
        }
        return maxi;
    }
};

//Time Complexity - O(N)
//Space Complexity - O(1)
