class Solution {
public:
    bool checkDivisibility(int n) {
        string number = to_string(n);
        int sum(0), product(1);

        for (int i = 0; i < number.length(); i++) {
            int digit = number[i] - '0';
            sum += digit;
            product *= digit;
        }

        if (n % (sum + product) != 0) return false;
        else return true;
    }
};