class Solution {
public:
    int longestMountain(vector<int>& arr) {
        stack<int>st;
        int size = arr.size();
        int max = 0;
        for(int i=0;i<size;i++)
        {
             if(arr[i] < arr[i+1])
             {
                st.push(arr[i]);
             }
             if(max < st.size())
             {
                max = st.size();
                st.pop();
             }
        }
        return max ;
    }
};
