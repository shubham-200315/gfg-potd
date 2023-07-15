  void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int middleEleLast=sizeOfStack-(int)((sizeOfStack+1)/2)+1;
        stack<int>temp;
        while(middleEleLast--){
            temp.push(s.top());
            s.pop();
        }
        temp.pop();
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
    }
