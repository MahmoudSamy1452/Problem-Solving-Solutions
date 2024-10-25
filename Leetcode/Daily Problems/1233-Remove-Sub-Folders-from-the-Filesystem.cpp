class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end(), [](string& a, string& b){
            return a.length() < b.length();
        });
        unordered_set<string> folders; int n = folder.size();
        for(int i = 0; i < n; i++) {
            string path = folder[i], prefix;
            bool is_folder = true;
            for (char ch : path) {
                if (ch == '/' && !prefix.empty() && folders.find(prefix) != folders.end()) {
                    is_folder = false;
                    break;
                }
                prefix += ch;
            }

            if(is_folder) {
                folders.insert(path);
            }
        }

        return vector<string>(folders.begin(), folders.end());
    }
};