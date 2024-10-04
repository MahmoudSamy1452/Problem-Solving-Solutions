class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());

        long long n = skill.size(),i = 0, j = n - 1, sum = skill[i] + skill[j], total = 0;
        while(i < j) {
            if(skill[i] + skill[j] != sum) return -1;
            total += skill[i++] * skill[j--];
        }
        return total;
    }
};