class Solution {
public:
    std::vector<int> stringtoArray(const std::string& s) {
        std::vector<int> arr(s.length());
        
        for(size_t i = 0; i < s.length(); i += 1) {
            arr[i] = s[i] - '0';
        }

        return arr;
    }

    int longerword(std::vector<int>& worda, std::vector<int>& wordb) {
        return (worda.size() > wordb.size()) ? 1 : 0;
    }
    string Addition(std::vector<int> longword, std::vector<int> shortword, int longsize, int shortsize) {
        int carry = 0;

        std::string endword = "";
        for (int i = longsize - 1; i >= 0; i -= 1) {
            int shortIndex = i - (longsize - shortsize);
            int shortDigit = (shortIndex >= 0) ? shortword[shortIndex] : 0;

            int sum = longword[i] + shortDigit + carry;

            if (sum == 0) {
                endword = "0" + endword;
                carry = 0;
            } else if (sum == 1) {
                endword = "1" + endword;
                carry = 0;
            } else if (sum == 2) {
                endword = "0" + endword;
                carry = 1;
            } else if (sum == 3) {
                endword = "1" + endword;
                carry = 1;
            }
        }

        if (carry == 1) {
            endword = "1" + endword;
        }

        return endword;
    }

    string addBinary(string a, string b) {
        std::vector<int> worda = stringtoArray(a);
        std::vector<int> wordb = stringtoArray(b);
        std::string endword = "";
        if (longerword(worda, wordb) == 1) {
            endword = Addition(worda, wordb, worda.size(), wordb.size());
        } else if (longerword(worda, wordb) == 0) {
            endword = Addition(wordb, worda, wordb.size(), worda.size());
        }
        return endword;
    }
};