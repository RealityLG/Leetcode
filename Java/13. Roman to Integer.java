class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> alterMap = new HashMap<>();
        alterMap.put('I' , 1);
        alterMap.put('V', 5);
        alterMap.put('X', 10);
        alterMap.put('L', 50);
        alterMap.put('C', 100);
        alterMap.put('D', 500);
        alterMap.put('M', 1000);

        int x = 0;

        char[] input = s.toCharArray();

        for(int i = input.length - 1; i >= 0; i--) {
            int value = alterMap.get(input[i]);
            if(i > 0 && alterMap.get(input[i - 1]) < value) {
                x += value - alterMap.get(input[i - 1]);
                i--;
            }
            else {
                x += value;
            }
        }
        return x;
    }
}