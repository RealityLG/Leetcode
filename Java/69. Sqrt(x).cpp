class Solution {
public:
    int mySqrt(int x) {
        unsigned long i = 0;
        while(true) {
            if((i * i <= (unsigned long) x) && (((i+1) * (i+1)) > (unsigned long) x)) {
                break;
            } else {
                i += 1;
            } 
        }
        return i;
    }
};