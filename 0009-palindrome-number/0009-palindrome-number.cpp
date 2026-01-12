class Solution {
public:
    bool isPalindrome(int x) {
        long long reverseNum = 0;
        int firstNum = x;
        while(x>0){
            int last = x%10;
            x = x/10;
            reverseNum = (reverseNum * 10 ) + last;
        }
        if(reverseNum == firstNum){
            return true;
        }else{
            return false;
        }
        return 0;
    }
};