class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int sz=name.size();
        int sz1=typed.size();
        int i=0;
        int j=0;
        while(i!=sz1)
        {
            if(name[i]==typed[j])
            {
                i++;
                j++;
            }
            if(typed[j]==name[i-1])
            {
                j++;
            }
        }
        
    }
};
