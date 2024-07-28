
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
     
     int cnt=0;
     ListNode*c=head;
     while(c!=NULL){
        cnt+=1;
        c=c->next;
     }

     int m=0;
     if(cnt%2==0){
        m=(cnt/2)+1;
     }
     else{
      m=(cnt+1)/2;
     }
    
     c=head;
     for(int i=1; i<m; i++)
     {
        c=c->next;
     }
     return c;

        
    }
};