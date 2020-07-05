class Solution {
public:
    int hammingDistance(int x, int y) {
        if(x==y)
            return 0;
        int dist=0;
        while(x>0 && y>0){
            
            if(x%2!=y%2)
                dist++;
            
            x/=2;
            y/=2;
        }
        
        while(x>0){
            if(x%2!=0){
                dist++;
            }
            x/=2;
        }
        while(y>0){
            if(y%2!=0){
                dist++;
            }
            y/=2;
        }
        
        return dist;
    }
};