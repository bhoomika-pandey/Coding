class Solution {
public:
    void sortColors(vector<int>& nums) {
        int t = 0, m = 0, l = 0, h = nums.size() - 1;
        while(m<h)
        {
            if(nums[m]<1)
            {
                t = nums[m];
                nums[l] = nums[m];
                nums[m] = t;
                l++;
                m++;
            }
            else if (nums[m]>1)
            {
                t = nums[h];
                nums[h] = nums[m];
                nums[m] = t;
                h--;
            }
            else
                m++;
        }
        
    }
};