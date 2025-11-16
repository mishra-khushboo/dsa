class Solution {
  public:
  
   bool isPossible(vector<int>& arr, int k,int n,int maxAllowedTime){
       int painters =1,time =0;
       for(int i =0;i<n;i++){
           if(time + arr[i] <=maxAllowedTime){
               time += arr[i];
           }else{
               painters++;
               time = arr[i];
           }
       }
       return painters<= k;
   }
  
    int minTime(vector<int>& arr, int k) {
        // code here
        int sum = 0,maxi=INT_MIN;
        int n = arr.size();
        for(int i =0;i<n;i++){
            sum += arr[i];
            maxi = max(maxi,arr[i]);
        }
        
        int st= maxi,end = sum,ans = -1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(isPossible(arr,k,n,mid)){
                ans = mid;
                end = mid -1;
            }else{
                st = mid + 1;
            }
        }
        return ans;
    }
};