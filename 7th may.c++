 string stringMirror(string str){
        // Code here
        string temp="";
        temp+=str[0];
        for(int i=1;i<str.length();i++){
            if(str[i]<temp[i-1])temp+=str[i];
            else if(str[i]==temp[i-1] and i!=1)temp+=str[i];
            else break;
        }
        string t = temp;
        reverse(t.begin(),t.end());
        temp+=t;
        return temp;
    }
