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
     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
         ListNode* cur = list1, * ans = NULL, * prev = ans;
         int last = b - a + 1;
         while (cur && a) {
                 ListNode* node = new ListNode(cur->val);
                 if (ans == NULL) {
                     ans = node;
                     prev = ans;
                 }
                 else {
                     prev->next = node;
                     prev = prev->next;
                 }
             cur = cur->next;
             a--;
         }
         while (list2) {
             ListNode* node = new ListNode(list2->val);
             if (ans == NULL) {
                 ans = node;
                 prev = ans;
             }
             else {
                 prev->next = node;
                 prev = prev->next;
             }
             list2 = list2->next;
         }
         while (cur && last)cur = cur->next,last--;

         while (cur) {
             ListNode* node = new ListNode(cur->val);
             if (ans == NULL) {
                 ans = node;
                 prev = ans;
             }
             else {
                 prev->next = node;
                 prev = prev->next;
             }
             cur = cur->next;
         }
         return ans;
     }
 };