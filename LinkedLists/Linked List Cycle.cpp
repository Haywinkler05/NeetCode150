/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, bool> seen; //Declare a hashmap
        while(head != nullptr){ //Loop through linkedlist
            if(!seen.contains(head)){ 
                seen[head] = true;
                head = head->next;
            }else{
                return true;
            }
        }
        return false;
        //Complexity O(N)
    }
};
