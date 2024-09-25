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
    ListNode* rev(ListNode *head){
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode *newH = rev(head->next);
        ListNode *frnt = head->next;
        frnt->next = head;
        head->next = NULL;
        return newH;
    }
    bool isPalindrome(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(head==NULL || head->next==NULL){
            return true;
        }

        ListNode *s = head, *f=head;
        while(f->next !=NULL && f->next->next !=NULL){
            s = s->next;
            f = f->next->next;
        }

        ListNode *secH = rev(s->next);

        ListNode *fir = head;
        ListNode *sec = secH;

        while(sec != NULL){
            if(fir->val != sec->val){
                rev(secH);
                return false;
            }
            fir=fir->next;
            sec=sec->next;
        }
        rev(secH);
        return true;
    }
};