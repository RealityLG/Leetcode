class Solution {
public:
    std::vector<int> nextlayer(std::vector<int>& layer) {
        std::vector<int> newlayer = {};
        newlayer.push_back(1);
        for (int i = 0; i < layer.size() - 1; i+= 1) {
            newlayer.push_back(layer[i] + layer[i + 1]);
        }
        newlayer.push_back(1);
        return newlayer;
    }

    std::vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> ausgabe;
        ausgabe.push_back({1});
        if (numRows == 1) return ausgabe;
        ausgabe.push_back({1,1});
        
        if(numRows == 2) return ausgabe;

        for (int i = 2; i < numRows; i+= 1) {
            ausgabe.push_back(nextlayer(ausgabe[i - 1]));
        }
        return ausgabe;
    }
};