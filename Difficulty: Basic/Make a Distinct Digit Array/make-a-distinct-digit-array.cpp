class Solution {
  public:
    vector<int> distDigit(vector<int>& arr) {
        // Code here
        set<int> b;
   	    for( int i = 0 ; i < arr.size(); i++){
   	        int a = arr[i];
   	        int rem = 0;
   	        while(a){
   	           rem = a % 10;
   	           a = a / 10;
   	           b.insert(rem);
   	        }
   	    }
        vector<int> result(b.begin(),b.end());

   	    return result;
    }
};