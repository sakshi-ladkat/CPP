class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int sz=arr.size();
        if(sz<3)
            return false;

        int i=0;
        while (i + 1 < sz && arr[i] < arr[i + 1]) {
            i++;
        }
        if (i == 0 || i == sz - 1) 
            return false;
        while (i + 1 < sz && arr[i] > arr[i + 1]) {
            i++;
        }
         return i == sz - 1;
    }
};
