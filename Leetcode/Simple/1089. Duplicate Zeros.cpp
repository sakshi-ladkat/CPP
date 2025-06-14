class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 0 , temp = 0;
        bool edgeZero = false;

        //finding new End point
        while(temp < arr.size())
        {
            if(arr[i] == 0)
            {
                i++;
                if(temp == arr.size()-1)
                {
                    edgeZero = true;
                    temp++;
                }
                else { temp += 2;}
            } else { i++;
                     temp++;
                   }
        }

        //Handling Edge case if only one zero at end 
        i--;temp--;
        if(edgeZero == true)
        {
            arr[temp] = arr[i];
            temp--;
            i--;
        }

        //Updating Element 
        while(i>=0)
        {
            if(arr[i] == 0)
            {
                arr[temp] = 0;
                arr[temp-1] = 0;
                temp -=2;
                i--;
            }
            else
            {
                arr[temp] = arr[i];
                i--;temp--;
            }
        }
        
    }
};s