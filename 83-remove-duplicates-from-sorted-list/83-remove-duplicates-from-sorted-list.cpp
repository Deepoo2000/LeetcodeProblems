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
        if (head == NULL || head->next == NULL)return head;
        ListNode* cur = head, *prev;
        unordered_map<int, int>mp;
        while (cur != NULL) {
            if (mp[cur->val] == 0) {
                mp[cur->val]++;
                prev = cur;
                cur = cur->next;
            }
            else {
                prev->next = cur->next;
                cur = cur->next;
            }
        }
        return head;
    }
};