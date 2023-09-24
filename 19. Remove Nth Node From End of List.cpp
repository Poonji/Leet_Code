
class Solution {
public:
      int find_length(ListNode* head)
        {
            int l=0;
            while(head!=NULL)
            {
                l++;
               head=head->next;
            }
            return l;
        }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int l=find_length(head);
        int t=l-n;
        if(t==0)
            return temp->next;
            int c=1;
            while(c<t)
            {
                c++;
                temp=temp->next;
            }
            temp->next=temp->next->next;
            return head;
            
        }
};
