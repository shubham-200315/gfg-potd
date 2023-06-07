vector<int> leastPrimeFactor(int n) {
        vector<int> ans(n+1,-1);
        ans[0] = 0;
        ans[1] = 1;
        for(int i=2;i<=n;i++)
        {
            if(ans[i] == -1)
            {
                ans[i] = i;
                int k = 2*i;
                while(k <= n)
                {
                    if(ans[k] == -1) ans[k] = i;
                    k+=i;
                }
            }
        }
        return ans;
    }
