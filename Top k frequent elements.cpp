class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>ans;
        map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        for(auto a:m)
        {
            
            ans.push_back(make_pair(a.first,a.second));
        }
        
        sort(ans.begin(),ans.end(),[](const pair<int,int>& a, const pair<int,int>& b) -> bool
        { 
            return a.second > b.second; 
        }); 
        vector<int>ans1;int i=0;
        //vector<pair<int,int>>::iterator it=ans.begin();
        for(auto it:ans)
        {
            if(i==k)
                break;
            ans1.push_back(it.first);
            i++;
            
        }
        return ans1;
    }
};