class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        vector<int> result;
        int carry = k;

        for (int i = n - 1; i >= 0; i--) {
            int sum = num[i] + carry;
            result.push_back(sum % 10);  // Letzte Ziffer der Summe
            carry = sum / 10;  // Übertrag
        }

        while (carry > 0) {
            result.push_back(carry % 10);
            carry /= 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};