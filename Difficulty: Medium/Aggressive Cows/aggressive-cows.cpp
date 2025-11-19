class Solution {
  public:
  
  
  bool isPossible(vector<int> &stalls,int n, int k,int minAllowedDis){
      int cow =1,lastStallPos = stalls[0];
      for(int i =1;i<n;i++){
          if(stalls[i] - lastStallPos >= minAllowedDis){
              cow++;
              lastStallPos = stalls[i];
          }
          if(cow == k){
              return true;
          }
      }
      return false;
      
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int st = 1,end = stalls[n-1]- stalls[0], ans= -1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(isPossible(stalls,n,k,mid)){
                ans = mid;
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return ans;
        
    }
};