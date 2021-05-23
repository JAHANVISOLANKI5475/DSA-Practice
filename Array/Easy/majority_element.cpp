int majorityElement(int a[], int size)
{
        
void bubbleSort(int a[], int size)
{ 
    int temp=0;
    if (size == 1)
        return;
 
    for (int i=0; i<size-1; i++)
    {
        if (a[i] > a[i+1])
        {
            int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
        }
   
    bubbleSort(a, size-1);
    }
}
 int count =1,k,l,size,max,ans=0;
        size = nums.size();
           if(size==1){
        return nums[0];
    }
      k = size/2;
     for(int i=0;i<size-1;i++)
     {
     if(nums[i]==nums[i+1] )
     {     
         count++;
         if(count>=ans)
         {
         ans = count;
         l = nums[i];
         }
     }
         else
         {
           count =1;
         }
     if(count>k)
         return l;
}
        
    }
