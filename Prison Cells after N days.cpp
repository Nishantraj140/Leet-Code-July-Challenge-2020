class Solution {
   public:
   vector<int> prisonAfterNDays(vector<int>& cells, int N) {

       
       unordered_map <int, vector <int> > mp ;
     
       for(int i = 1 ; i <= 14 ; i++ ){ // After 14 times of change , it goes on loop 
        
         vector <int> temp(8);
         for(int j = 1; j < 7; j++)
             temp[j] = ( cells[j-1] == cells[j+1]  ) ? 1 : 0 ; 
            
         cells = temp;
         mp[i] = temp;
           
      }
      return mp[N % 14 == 0 ? 14 : N % 14];
          
   }
};