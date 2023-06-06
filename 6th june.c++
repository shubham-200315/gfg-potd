  void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
       if(root==NULL){
           return  ; 
       }    
       
       bool flag = false ; 
       while(flag==false){
           if(root->key == key){
               flag = true ; 
           }
           
           if(root->key < key and root->right!=NULL){
               pre  = root ; 
               root = root->right ; 
           }
           if(root->key < key and root->right==NULL){
               pre = root; 
               flag = true ; 
           }
           
           if(root->key > key and root->left!=NULL){
               suc= root ; 
               root  = root->left ; 
           }
           
           if(root->key > key and root->left==NULL){
               suc = root ; 
               flag =  true ; 
           }
           
       }
       
       if(root->key == key){
           if(root->left){
               pre = root->left ; 
               
               
               while(pre->right!=NULL){
                   pre = pre->right ; 
               }
           }
           if(root->right){
               suc = root->right ;
               
               while(suc->left!=NULL){
                   suc = suc->left ; 
               }
           }
       }
        
    
    }
