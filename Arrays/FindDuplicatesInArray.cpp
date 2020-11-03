int Solution::repeatedNumber(const vector<int> &arr) {
//n+1 element so total unique element are n
int n=arr.size()-1;    
//To reduce number of element in a bucket
int sq = sqrt(n); 
//No of buckets
int range = (n / sq)+1; // why +1 ?? Take the example of 10 elements . 
    /*So n=9 then sq=3 then range =3 if there is no +1 then when you do
    9/3 you get 3 and there is no index 3*/
// Count array is the buckets
int count[range] = {0}; 
  
    // Traversing the read only array and 
    // updating count 
    for (int i = 0; i <= n; i++) 
    { 
        //Why -1 ?
        //1 2 2 3 4 5 6 7 8 9
        //We need to handle this case using an extra condition
        //So better to subtract 1 and we handle the last block below
        count[(arr[i]-1) / sq]++; 
    } 
  
    // The selected_block is set to last 
    // block by default. Rest of the blocks 
    // are checked because the no of elements
    // in last block cant be predicted
    int selected_block = range - 1; 
    for (int i = 0; i < range - 1; i++) 
    { 
        if (count[i] > sq) 
        { 
            selected_block = i; 
            break; 
        } 
    } 
  
    // after finding block with size > sq 
    // method of hashing is used to find 
    // the element repeating in this block 
    unordered_map<int, int> m; 
    for (int i = 0; i <= n; i++){ 
        // checks if the element belongs to the 
        // selected_block 
        //While allocating bucket arr[i]-1/sq
        //So when bucket is know bucket*sq = arr[i]
        if ( ((selected_block * sq) < arr[i]) && 
        (arr[i] <= ((selected_block + 1) * sq))) 
        { 
            m[arr[i]]++; 
  
            // repeating element found 
            if (m[arr[i]] > 1) 
                return arr[i]; 
        } 
    } 
  
    // return -1 if no repeating element exists 
    return -1; 
}