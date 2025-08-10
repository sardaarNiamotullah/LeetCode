class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int listSize = nums.size();

        long long sumA(0), sumB(0), result(0);

        if (listSize == 1)
            return abs(nums[0]);
        if (listSize == 2)
            return abs(nums[0] + nums[1]);
        if (listSize == 3)
            return abs((nums[0] + nums[1]) - nums[2]);

        vector<bool> isPrime(listSize, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= listSize; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= listSize; j += i)
                    isPrime[j] = false;
            }
        }

        for(int i = 0; i < nums.size(); i++) {
            if (isPrime[i]) sumA += nums[i];
            else sumB += nums[i];
        }

        result = abs(sumA - sumB);

        return result;
    }
};