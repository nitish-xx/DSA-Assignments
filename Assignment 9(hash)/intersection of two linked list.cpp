https://leetcode.com/problems/intersection-of-two-linked-lists/

class Solution {
public:

    bool isNodepresent(ListNode* headA,ListNode*headB){
     while(headA!=NULL){
        if(headA ==headB){
        
        return true;
        
    }
    headA=headA->next;

     }
    return false;
     
    }


    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    while(headB !=NULL){

     if(isNodepresent(headA,headB))  return headB; 

     headB= headB->next;
     }
    return NULL;
    }
        
    
};
