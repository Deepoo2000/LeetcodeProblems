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
    ListNode* Reverse(ListNode* list) {
        ListNode* new_node = NULL;
        while (list != NULL) {
            ListNode* temp = list;
            list = list->next;
            temp->next = new_node;
            new_node = temp;

       }
        return new_node;

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = Reverse(l1);
        l2 = Reverse(l2);
        int last = 0, sum = 0;
        ListNode* cur = NULL, *temp = cur;
        while (l1 != NULL || l2 != NULL || last) {
            sum = last;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            ListNode* node = new ListNode(sum % 10);
            if (cur == NULL) {
                cur = node;
                temp = cur;
            }
            else {
                temp->next = node;
                temp = temp->next;
            }
            last = sum / 10;
        }
        return Reverse(cur);
    }
};