vector<int> findSpiral(Node *root)
{
    vector<vector<int>>v;
    if(!root) return {};
    queue<Node *>q;
    q.push(root);
    bool flag=true;
    while(!q.empty()){
        vector<int>ans;
        int size = q.size();
        while(size--){
            Node *temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            ans.push_back(temp->data);
        }   
        if(flag) reverse(ans.begin(),ans.end());
        flag=!flag;
        v.push_back(ans);
    }
    vector<int>final;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++) final.push_back(v[i][j]);
    }
    return final;
}
