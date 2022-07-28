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
    ListNode* swapPairs(ListNode* head) {
       int ans = 0;
        ListNode* cur = head;
        while(cur && cur->next){
            ans++;
            if(ans & 1)swap(cur->val, cur->next->val);
            cur = cur->next;
        }
        return head;
    }
};