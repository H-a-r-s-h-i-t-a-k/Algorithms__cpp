class Solution{
    static int solve(Node root){
    int cnt =0;
    Node curr=root;
    while(curr!=null&&curr.next!=null&&curr.next.next!=null){
        if(curr.val<curr.next.val && curr.next.val>curr.next.next.val){
            cnt++; 
        }
        else if (curr.val>curr.next.val && curr.next.val<curr.next.next.val){
            cnt++; 
        }
        
            curr=curr.next;
        
    }
   
   return cnt;
   
    }
}