class Solution {
    public boolean isValid(String s) {Map<Character, Character> symbols = new HashMap<>();
        symbols.put('(', ')');
        symbols.put('{', '}');
        symbols.put('[', ']');

        Stack<Character> stack = new Stack<>();
        for (char c : s.toCharArray()) {
            if (symbols.containsKey(c)) {
                stack.push(c);
            } else {
                if (stack.isEmpty() || c != symbols.get(stack.pop())) {
                    return false;
                }
            }
        }
        return stack.isEmpty();
        }
}