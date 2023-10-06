//Reverse alternate nodes in Link List
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        //add code here
         if(odd->next==NULL)
        {
            return;
        }
        Node *head1=odd;
        Node *head2=odd->next;
        Node *p1=head1;
        Node *p2=head2;
        while(p1->next->next!=NULL && p2->next->next!=NULL)
        {
            p1->next=p1->next->next;
            p1=p1->next;
            if(p1->next!=NULL)
            {
            p2->next=p1->next;
            p2=p2->next;
            }
        }
        Node *prev=NULL;
        Node *curr=head2;
        Node *next=head2;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        p1->next=prev;


    }
};
