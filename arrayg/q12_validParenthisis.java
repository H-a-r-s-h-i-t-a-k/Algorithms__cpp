class Solution {
  public:
      bool isValid(string s) {
           stack<char> stk;
          int n=s.length();
          for(int i=0;i<n;i++){
              char c=s[i];
              if(c == '{'|| c == '(' || c =='[')
              {
                  stk.push(c);
                  
              }
              else {
                  if (!stk.empty()){
  
                       if((c==']'&& stk.top()=='[' )||(c=='}'&&stk.top()=='{')||(c==')'&& stk.top()=='(')){
                              stk.pop();
                           }
                       else{
                               return false;
                           }
                  }else{
                      return false;
                  }
  
              }
          }
  
  
  if(stk.empty()){
      return true;
  }else{
   return false;
  }
      }
  };