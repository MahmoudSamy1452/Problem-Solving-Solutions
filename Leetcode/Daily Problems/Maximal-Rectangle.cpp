1class Solution {
2public:
3    int maximalRectangle(vector<vector<char>>& matrix) {
4        if (matrix.empty() || matrix[0].empty())
5            return 0;
6        
7        int rows = matrix.size();
8        int cols = matrix[0].size();
9        vector<int> heights(cols + 1, 0);
10        int maxArea = 0;
11        
12        for (const auto& row : matrix) {
13            for (int i = 0; i < cols; i++) {
14                heights[i] = (row[i] == '1') ? heights[i] + 1 : 0;
15            }
16            
17            int n = heights.size();
18            
19            for (int i = 0; i < n; i++) {
20                for (int j = i, minHeight = INT_MAX; j < n; j++) {
21                    minHeight = min(minHeight, heights[j]);
22                    int area = minHeight * (j - i + 1);
23                    maxArea = max(maxArea, area);
24                }
25            }
26        }
27        
28        return maxArea;
29    }
30};