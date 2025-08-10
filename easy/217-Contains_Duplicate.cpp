class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool found = false;
        unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(nums[i]) != hash.end()) {
                found = true;
                break;
            } else hash[nums[i]] = i;
        }

        return found;
    }
};