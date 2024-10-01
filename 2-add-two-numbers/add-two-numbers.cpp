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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *temp = new ListNode(0);
        ListNode *curr = temp;

        long long int carr = 0;
        while(l1 != NULL || l2 != NULL || carr != 0){
            int sum = carr;

            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }

            carr = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }
        return temp->next;
        /*why cant we do this in the way i was doing 
        1) we create a reverse number from traversing the linked list
        2) then make the number correct by reversing it
        3) then we add them and store in an int or array
        4) then we just put them into a linked list and return it?*/
        // int rev_n1=0,rev_n2=0, n1=0, n2=0;
        // Node *curr = l1;

        // while(curr){
        //     rev_n1 = rev_n1*10 + curr->data;
        //     curr = curr->next;
        // }

        // curr = l2;
        // while(curr){
        //     rev_n2 = rev_n2*10 + curr->data;
        //     curr = curr->next;
        // }

        // while(rev_n1 > 0){
        //     n1 = n1 * 10 + rev_n1 % 10;
        //     rev_n1 /= 10;
        // }

        // while(rev_n2 > 0){
        //     n2 = n2 * 10 + rev_n2 % 10;
        //     rev_n2 /= 10;
        // }

        

    }
};