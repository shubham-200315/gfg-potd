int getNthFromLast(Node *head, int n)
{
//   step 1.
    int length =0;
    Node* temp = head;
    while(temp!=NULL)
    {
        length++;
        temp= temp->next;
        
    }
    if(length<n)
    {
        return -1;
    }
    // step2.
    int index= length-n;
    // step3.
    int count =0;
    temp = head;
    while(count<index)
    {
        temp = temp->next;
        count++;
    }
    int ans = temp->data;
    return ans;
}
