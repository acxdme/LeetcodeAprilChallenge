/*
Question::Given a non-empty, singly linked list with head node head, return a middle node of linked list.
If there are two middle nodes, return the second middle node.

Time complexity:O(n)
Space complexity:O(1)
Their is another approach which uses the heir and tortoise algorithm where one pointer moves twice the distance than other.
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=NULL;
        temp=head;
        int n=0;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
            n=n/2;
        for(int i=0;i<n;i++)
        {
            head=head->next;
        }
        return head;
    }
};
