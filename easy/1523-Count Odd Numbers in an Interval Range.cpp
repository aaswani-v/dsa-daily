class Solution {
public:
    int countOdds(int low, int high) {
        //int range = (high-low)+1;

        int oddCount = (high-low)/2; //half of elements are odd/even
        if(low%2!=0 || high%2!=0) {
            oddCount++; //if any off low and high are odd then count is increased +1 as one of them must be odd

        // ya agr dono hi odd hai toh fir (high-low)/2
        }
        return oddCount;
    }
};