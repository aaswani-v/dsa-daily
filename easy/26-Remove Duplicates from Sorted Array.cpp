class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertIndex = 1; //kept 1 as first element will be considered unique

        for (int i=1; i<nums.size();i++) {
        //checking nums[i-1] !=nums[i] :- comparing previous value to the current identify the duplication
            if (nums[i-1]!=nums[i]) { 
                /* - comparing previous value to the current identify the duplication
                - if nums [i-1] != nums[i] then only it will goes on to add the i into new nums were no
                duplication will be allowed*/
                nums[insertIndex] = nums[i];
                insertIndex++;
            }
        }
        return insertIndex;
    }
};