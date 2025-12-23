/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) { 
    struct ListNode *prev=NULL;
    struct ListNode *current=head;
    struct ListNode *next=NULL;
    
   while(current!=NULL){

     next = current->next;   //saving the next
     current->next = prev;   //the reverse
     prev = current;      //moving prev   
     current = next;    //moving current     



   }
   return prev; //new head

    
}