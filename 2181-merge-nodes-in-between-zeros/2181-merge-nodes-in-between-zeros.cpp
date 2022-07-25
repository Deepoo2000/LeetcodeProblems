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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = NULL;
        ListNode* ans = temp;
        int sum = 0;
        while (head != NULL) {
            sum += head->val;
            if (!head->val) {
                if (sum) {
                    ListNode* node = new ListNode(sum);
                    if (temp == NULL)temp = node, ans = temp;
                    else {
                        ans->next = node;
                        ans = ans->next;
                    }
                }
                sum = 0;
            }
            head = head->next;
        }
        return temp;
    }
};