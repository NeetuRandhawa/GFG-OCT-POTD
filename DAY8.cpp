//Insert in a Sorted List
class Solution{
  public:
    Node *sortedInsert(struct Node* head, int data) {
        Node* temp = new Node(data);
        Node* prev=NULL;
        Node* t1 = head;
        if(head->data>data){
            temp->next = head;
            return temp;
        }
        while(t1->next!=NULL){
            prev = t1;
            t1 = t1->next;
            if(t1->data>data){
                prev->next = temp;
                temp->next = t1;
                return head;
            }
        }
        t1->next = temp;
        return head;
    }
};
