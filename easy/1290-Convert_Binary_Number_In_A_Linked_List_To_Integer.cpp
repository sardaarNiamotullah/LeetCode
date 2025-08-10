/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result(0), numofbits(0);
        vector<int> linkedList;

        while (head != nullptr) {
            linkedList.push_back(head->val);
            head = head->next;
        }

        numofbits = linkedList.size();
        for (int i = 0; i < linkedList.size(); i++) {
            result += linkedList[i] * pow(2, numofbits - 1);
            numofbits--;
        }

        return result;
    }
};