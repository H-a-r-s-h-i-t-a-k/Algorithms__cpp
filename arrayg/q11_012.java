class Solution {
   
  public void sortColors(int[] nums) {
      int n=nums.length;
      int l=0,m=0,h=n-1;
     

     while(m<=h){
      int v=nums[m];
      if(v==0){
         
          int t=nums[l];
          nums[l]=nums[m];
          nums[m]=t;
          l++;m++;
      }
      else if(v==1){
          m++;
      }
      else{
          int t=nums[h];
          nums[h]=nums[m];
          nums[m]=t;
          h--;
      }
      
     }


     
  }
}