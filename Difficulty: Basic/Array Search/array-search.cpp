class Solution {
  public:
  
    int linearSearch(vector<int>& arr, int x,int index,int n ){
        if(index == n){
            return -1;
        }
        if(arr[index] == x){
            return index;
        }else{
            linearSearch(arr,x,index + 1,n);
        }
    }
    int search(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        return linearSearch(arr,x,0,n);
    }
};