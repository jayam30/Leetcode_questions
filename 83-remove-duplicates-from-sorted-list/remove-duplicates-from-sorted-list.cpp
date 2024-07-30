class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {


        ListNode* curr = head;

        while(curr!=NULL && curr->next!=NULL){
            if(curr->val!=curr->next->val){
                    curr=curr->next;
            }
            else{
                ListNode* temp = curr->next;
                curr->next=curr->next->next;
                delete temp;

            }
    

        }
        return head;
    }
};

        // ListNode* c=head;
        // ListNode*n=c->next;
        // while(n!=NULL &&c->next->next!=NULL){
        //     if(c->val!=n->val){
        //         c=c->next;
        //         n=n->next;
        //     }
        //     else{
        //         ListNode* temp = c->next;
        //         c=c->next->next;
        //         n=c->next;
        //         temp->next=NULL;
        //         delete(temp);
        //     }
        // }