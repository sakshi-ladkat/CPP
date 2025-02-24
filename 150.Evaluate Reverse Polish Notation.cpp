class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> stk;
        for(auto e : tokens)
    {
            if( (e=="+" || e== "-" || e== "/" || e=="*") && stk.size() >=2 )      
             {  
                int rgt =stk.top(); 
              stk.pop();
              int lft =stk.top();
              stk.pop();
              if(e== "+")
                stk.push(lft+rgt);
              else if(e== "-")
                stk.push(lft-rgt);
              else if(e== "*")
                stk.push(lft*rgt);
              else if(e== "/")
                stk.push(lft/rgt);
            }
            else
            {
               stk.push(stoi(e));
            }
        }
        return stk.top();
        
    }
};