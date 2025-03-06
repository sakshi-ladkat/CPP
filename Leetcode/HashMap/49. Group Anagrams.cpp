class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::unordered_map<string,vector<string>>umap;
        for( const auto& s : strs)
        {
           string sortedstr = s;
            sort(sortedstr.begin(), sortedstr.end()); 
            umap[sortedstr].push_back(s); 
        }

         std::vector<vector<string>>ans;
        for (auto& n : umap) {
           ans.push_back(move(n.second));
        }

        return ans;
    }
}; 