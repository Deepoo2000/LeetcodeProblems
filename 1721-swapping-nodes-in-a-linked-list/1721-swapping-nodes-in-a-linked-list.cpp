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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* cur = head;
        int count = 0;
        while(cur)cur = cur->next,count++;
        int pos1 = k, pos2 = count - k;
        ListNode *temp1 = head, *temp2 = head;
        pos1--;
        while(temp1 && pos1--)temp1 = temp1->next;
        while(temp2 && pos2--)temp2 = temp2->next;
        int val = temp1->val;
        temp1->val = temp2->val;
        temp2->val = val;
        return head;
        
        
    }
};