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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head, *prev = nullptr, *next; //Declare our list nodes
        while(curr != nullptr){
            next = curr->next; //Move next

            curr->next = prev; //Flip curr's next element
            prev = curr; //Update prev
            curr = next; //Update the curr pointer

            
        }

        return prev;
        //Complexity O(N)
    }
};
