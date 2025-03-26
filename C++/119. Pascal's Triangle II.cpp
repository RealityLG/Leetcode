class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> firstline = {1};

        if (rowIndex == 0) return firstline;

        vector<int> secondline = {1,1};

        if (rowIndex == 1) return secondline;

        vector<int> currentline = secondline;
        vector<int> nextline = {};

        for (int i = 1; i < rowIndex; i += 1) {
            if (rowIndex == i) return currentline;
            nextline.push_back(1);
            for (int y = 0; y < currentline.size() - 1; y += 1) {
                nextline.push_back(currentline[y] + currentline[y + 1]);
            }
            nextline.push_back(1);
            currentline = nextline;
            nextline = {};
        }
        return currentline;
    }
};