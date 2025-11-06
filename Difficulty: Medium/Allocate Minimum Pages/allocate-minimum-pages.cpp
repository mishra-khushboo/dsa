class Solution {
  public:
  
  bool isValid(vector<int> &arr, int k,int n,int maxAllowedPages){
      int students = 1,pages=0;
      for(int i = 0;i<n;i++){
          if(pages + arr[i] <= maxAllowedPages){
              pages+= arr[i];
          }else{
              students++;
              pages = arr[i];
          }
      }
      return students <= k ? true : false;
  }
  
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k > n) return -1;
        int end = 0,st=0;
        for(int i = 0;i<n;i++){
            end += arr[i];
            st = max(st,arr[i]);
        }
        int ans = -1;
        while(st <= end){
            int mid = st +(end - st)/2;
            if(isValid(arr,k,n,mid)){
                ans = mid;
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return ans;
        
    }
};