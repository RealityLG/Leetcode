class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }

        if (n == 2) {
            return 2;
        }
        std::vector<unsigned long long> Folge;
        Folge.push_back(1);
        Folge.push_back(2);
        unsigned long long zahl = 0;
        for(int i = 2; i <= n; i += 1) {
            zahl = Folge[i - 1] + Folge[i - 2];
            Folge.push_back(zahl);
        }
        return Folge[n - 1];
    }
};