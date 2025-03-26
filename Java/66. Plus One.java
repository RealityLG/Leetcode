public class Solution {
    // Methode zur Erhöhung einer Zahl um eins
    public int[] plusOne(int[] digits) {
        // Variable zur Speicherung des Übertrags, beginnt mit 1, da wir um eins erhöhen wollen
        int carry = 1;

        // Durchlaufe das Array von rechts nach links
        for (int i = digits.length - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }

        // Prüfe, ob am Ende ein Übertrag übrig bleibt
        if (carry == 1) {
            int[] result = new int[digits.length + 1];
            result[0] = 1;
            return result;
        } else {
            return digits;
        }
    }
}