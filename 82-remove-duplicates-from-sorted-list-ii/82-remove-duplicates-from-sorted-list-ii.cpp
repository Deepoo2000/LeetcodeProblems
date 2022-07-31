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
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode* cur = head,  *ans = NULL, *prev = ans;
        while(cur){
            int value = cur->val;
            int count = 0;
            ListNode* node = new ListNode(cur->val);
            while(cur && cur->val == value){
                count++, cur = cur->next;
            }
            if(count == 1){
                if(ans == NULL){
                    ans = node;
                    prev = ans;
                }
                else {
                    prev->next = node;
                    prev = prev->next;
                }
            }
        }
        return ans;
    }
};