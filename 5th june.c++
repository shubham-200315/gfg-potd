int minDiff(Node *root, int K)
    {
       if(root==NULL)
           return INT_MAX;
       if(root->data==K)
          return 0;
          
         int left=INT_MAX,right=INT_MAX;
         if(K<root->data)
            left = minDiff(root->left,K);
         else
           right = minDiff(root->right,K);
         return min(left,min(abs(K-root->data),right));
            
    }
