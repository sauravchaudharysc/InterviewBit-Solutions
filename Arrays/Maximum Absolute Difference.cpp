int Solution::maxArr(vector<int> &arr) {
      int n= arr.size();
    int max1 = INT_MIN, min1 = INT_MAX; 
    int max2 = INT_MIN, min2 = INT_MAX; 
  
    for (int i = 0; i < n; i++) { 
  
        // Updating max and min variables 
        // as described in algorithm. 
        
        //If a[i]>a[j] then mod doesnt effect
        max1 = max(max1, arr[i] + i); 
        min1 = min(min1, arr[i] + i); 
        
        //If a[i]<a[j] then mod does effect
        max2 = max(max2, arr[i] - i); 
        min2 = min(min2, arr[i] - i); 
    } 
  
    // Calculating maximum absolute difference. 
    return max(max1 - min1, max2 - min2);
}
