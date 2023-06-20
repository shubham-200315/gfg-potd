int matchGame(long long N) {
        // code here
        
        for(int i=0; i<5; i++){
            if(N%5==0){
                return -1;
            }else{
                return N%5;
            }
        }
