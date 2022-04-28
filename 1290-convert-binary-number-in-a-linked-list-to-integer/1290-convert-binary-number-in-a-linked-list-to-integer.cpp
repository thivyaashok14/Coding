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
        if(head == NULL)
            return 0;
        ListNode* curr = head;
        int value = 0;
        while(curr)
        {
            value = (2*value) + curr->val;
            curr = curr->next;
        }
        return value;
    }
};