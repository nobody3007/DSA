/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL)
    {
        return head;
    }
    if(head->next==NULL)
    {
        return head;
    }
     struct ListNode*temp1=head;
     struct ListNode*prev=NULL;
     int count=0;
    while(temp1!=NULL)
    {
        count++;
        temp1=temp1->next;
    }
    temp1=head;
  
    k=k%count;
    while(k>0)
    {
        temp1=head;
          while(temp1->next->next!=NULL)
    {
         temp1=temp1->next;  
    }
        struct ListNode*temp2=temp1->next;
        temp1->next->next=head;
        temp1->next=NULL;
        head=temp2;
        k--;
    }
    return head;
    
}