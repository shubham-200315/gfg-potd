C++

 vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
      vector<string> ans;
      for(auto &stringTraverse : Dictionary)
      {
          string temp = "";
          for(auto & charTraverse: stringTraverse)
          {
              if(isupper(charTraverse))
              {
                  temp+= charTraverse;
              }
          }
          if(temp.substr(0, Pattern.size())==Pattern)
          {
              ans.push_back(stringTraverse);
          }
      }
          if(ans.size()==0)
          {
              return {"-1"};
              
          }
          return ans;
      }




java

class Solution{
    ArrayList<String> CamelCase(int N,String[] Dictionary,String Pattern){
        ArrayList<String> adj = new ArrayList<>();
        for(String strA: Dictionary){
            StringBuilder str = new StringBuilder("");
            for(char ch: strA.toCharArray()){
                if(ch >= 'A' && ch <= 'Z') str.append(ch);
            }
            if(str.toString().startsWith(Pattern)) adj.add(strA);
        }
        Collections.sort(adj);
        if(adj.size()==0) adj.add("-1");
        return adj;
    }
}
