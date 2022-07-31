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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next) return head;
        ListNode* cur = head;
        int bet = right - left + 1;
        left--;
        ListNode *ans = NULL, *last = ans;
        while(cur != NULL && left){
            ListNode* node = new ListNode(cur->val);
            if(ans == NULL){
                ans = node;
                last = ans;
            }
            else {
                last->next = node;
                last = last->next;
            }
            left--;
            cur = cur->next;
        }
        ListNode* new_node = NULL;
        while(cur != NULL && bet){
            ListNode* temp = cur;
            cur = cur->next;
            temp->next = new_node;
            new_node = temp;
            bet--;
        }
        if(ans == NULL){
                ans = new_node;
                last = ans;
        }
        else {
            last->next = new_node;
        }
        while(last && last->next)last = last->next;
        while(cur != NULL){
            ListNode* node = new ListNode(cur->val);
            if(last == NULL){
                last = node;
            }
            else {
              last->next = node;
              last = last->next;
            }
            cur = cur->next;
        }
        return ans;
    }
};