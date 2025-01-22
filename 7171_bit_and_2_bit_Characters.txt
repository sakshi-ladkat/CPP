class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int sz=bits.size();
        int i;
        for(i=0;i<sz-1;i++)
        {
            if(bits[i]!=0)
             i++;
        }
        return(i==sz-1);
        
    }
};