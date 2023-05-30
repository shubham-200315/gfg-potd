c++

int LargButMinFreq(int arr[], int n) {
        unordered_map<int, int> mp;
        int mini = INT_MAX;
        int ans =-1;
        for(int i =0; i<n; i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto key : mp)
        {
            if(key.second < mini)
            {
                mini = key.second;
                ans = key.first;
            }
            if(key.second == mini)
            {
                ans = max(ans, key.first);
            }
        }
        return ans;
    }
    
    
    
    
    
    
    
    
    
    
    java
    
    class Solution {
    public static int LargButMinFreq(int arr[], int n) {
        HashMap<Integer, Integer> map=new HashMap<>();
        int minFreqCount=Integer.MAX_VALUE;
        int maxNumber=0;
        for(int ele:arr)map.put(ele,map.getOrDefault(ele,0)+1);
        for(int key:map.keySet()){
            int freq=map.get(key);
            if(freq<minFreqCount || (freq==minFreqCount&&maxNumber<key)){
                minFreqCount=freq;
                maxNumber=key;
            }
        }
        return maxNumber;
    }
}
