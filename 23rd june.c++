 int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
    
        int freq[26]={0};
        int maxf=0;
        for(auto i:tasks)
        {
            freq[i-'A']++;
            maxf=max(maxf,freq[i-'A']);
        }
        int maxfcount = 0;
        for(int i=0; i<26; i++){
            if(freq[i]==maxf)maxfcount++;
        }
        
     int time = (maxf-1)*(K+1)+maxfcount;
      return max(time,N);
    }
