class Solution {
public:
    int nthUglyNumber(int n) {
        long x = 1;
        n--;
        int t=0,r=0,f=0;
        map<long,long>m;
        priority_queue <long, vector<long>, greater<long> > s; 
        while(n--)
        {
            s.push(x*2);
            s.push(x*3);
            s.push(x*5);
            x = s.top();
            s.pop();
                        
            while(m[x]!=0)
            {
                x = s.top();
                s.pop();
            }
            m[x]=1;
            
        }
        return x;
    }
};