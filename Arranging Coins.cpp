class Solution {
public:
    int arrangeCoins(int n) {
        int cnt=0;
        int i=1;
        while(1){
            n-=i;
            if(n<0)
            return i-1;
            i++;
        }
    }
};