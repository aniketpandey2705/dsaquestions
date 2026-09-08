class Solution {
public:
    int addDigits(int num) {
        int result=num;
        int tempsum=0;
        while(num>=10){
            tempsum+=result%10;
            result=result/10;
            if(result==0){
                result=tempsum;
                num=tempsum;
                tempsum=0;
            }
        }
    return result;
    }
};