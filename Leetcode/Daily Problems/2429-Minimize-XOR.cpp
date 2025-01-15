class Solution {
public:
    int minimizeXor(int num1, int num2) {
        string b1, result; int cnt2 = 0;
        while(num1) {
            b1 += (num1 % 2) ? '1' : '0';
            result += '0';
            num1 /= 2;
        }

        while(num2) {
            cnt2+= num2 % 2;
            num2 /= 2;
        }
        
        for(int i = b1.size() - 1; i >= 0; i--) {
            if(!cnt2) break;
            result[i] = b1[i];
            cnt2 -= b1[i] == '1';
        }

        for(int i = 0; i < b1.size(); i++) {
            if(!cnt2) break;
            result[i] = '1';
            cnt2 -= b1[i] == '0';
        }

        while(cnt2) {
            result += '1'; cnt2--;
        }

        int ans = 0;
        for(int i = result.size() - 1; i >= 0; i--) {
            if(result[i] == '1') ans += 1;
            if(i) ans *= 2;
        }
        return ans;
    }
};