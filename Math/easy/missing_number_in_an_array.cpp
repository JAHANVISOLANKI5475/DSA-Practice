   int MissingNumber(vector<int>& array, int n) {
       sort(array.begin(),array.end());
       int k =0;
       for(int i=0;i<n;i++)
       {   
           k=k+1;
           if(k != array[i])
           {
           return k;
            break;
           }
          
           
       }
    }
