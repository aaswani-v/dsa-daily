class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int i = digits.size() -1;
        //-1 as vectors in cpp starts from 0 where else size() return num of elements
        while(i>=0) {
            if(digits[i]==9) {
                digits[i]=0;
                //replacing 9 with 0 and then incrementing the element before to implement (9+1 = 10)
            } else {
                digits[i] +=1;
                //anything before 9 can be increment without the worry of carrying carry
                return digits;
            }
            i--; //as we have to go from large int to smaller
        }
        // if i smaller then 0 means that [9,9,9] = [_,0,0,0] so in this case we will have to add 1 in the begining
        digits.insert(digits.begin(),1);
        return digits;
    }
};