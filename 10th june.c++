void Rearrange(int arr[], int n)
        {
            // Your code goes here
            int Neg[n],Pos[n];
            int i=0,neg=0,pos=0;
        while(i<n){
            if(arr[i]<0){
                Neg[neg]=arr[i];
                neg++;
            }
            else{
                Pos[pos]=arr[i];
                pos++;
            }
            i++;
        }
        int k=0;
        while(k<neg){
            arr[k]=Neg[k];
            k++;
        }
        int p=0;
        while(p<=pos){
            arr[k]=Pos[p];
            p++;
            k++;
        }
      }
