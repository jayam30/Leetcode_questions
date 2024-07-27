
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head== NULL )
        {
            return head;
        }
       ListNode*prev =NULL;
       ListNode*curr= head;
       ListNode*forward = NULL;
       while(curr!=NULL)
       {
         forward =curr->next;
         curr->next= prev;
         prev =curr;
         curr =forward;
       }
       return prev;
    }
    
};