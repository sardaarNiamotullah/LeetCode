class Solution {
public:
    bool isPalindrome(int x) {
        string palindrome = to_string(x);

        for(int i = 0, j = palindrome.length() - 1; i < palindrome.length()/2; i++, j--)
            if (palindrome[i] != palindrome[j]) return false;

        return true;
    }
};