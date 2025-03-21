class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_set<string> available(supplies.begin(), supplies.end());
        int n = recipes.size(); unordered_set<string> ans;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                bool possible = true;
                for(string& ingredient: ingredients[j]) {
                    if(available.find(ingredient) == available.end()) {
                        possible = false;
                        break;
                    }
                }
                if(possible) {
                    available.insert(recipes[j]);
                    ans.insert(recipes[j]);
                }
            }
        }

        return vector(ans.begin(), ans.end());
    }
};