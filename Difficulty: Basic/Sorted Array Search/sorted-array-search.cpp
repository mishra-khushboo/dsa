class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int> arr, int k) {

        // Your code here
        int start = 0;
        int end = arr.size();
        
        while(start <= end){
            int mid = (start + end)/2;
            
            if(arr[mid] == k){
                return true;
            }
            else if(k < arr[mid]){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return false;
    }
};