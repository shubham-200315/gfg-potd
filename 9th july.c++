 int missingNumber(int arr[], int n) 
    { 
        // Your code here
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0&&arr[i]<=n)
            {
                int ind=arr[i]-1;
                if(arr[ind]!=arr[i])
                {
                    swap(arr[i],arr[ind]);
                    i--;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
            return i+1;
        }
        return n+1;
    } 
