void reverse(vector<int> &arr,int si,int ei){
    while(si<ei){
        int temp=arr[si];
        arr[si]=arr[ei];
        arr[ei]=temp;
        si++;
        ei--;
    }
}

vector<int> Solution::nextPermutation(vector<int> &A) {
    
    int n=A.size();
    //There is no permutation for single digit
    if(n<2){
        return A;
    }
    //To find next greater permutation
        /* Searching From Right To Left,make both p and q zero initially
        1. Search for the element whose previous element 
        is smaller than current store the index in p.
        2. Search for the element whose value is greater 
           than element found in step 1 store it in q.
        3. If both p and q are zero. Reverse the vector else 
            swap p and q. reverse from index p+1 to n-1.*/
    int p=0,q=0;
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            p=i;
            break;
        }
    }
    
    for(int i=n-1;i>p;i--){
        if(A[i]>A[p]){
            q=i;
            break;
        }
    }
    if(p==0 && q==0){
        reverse(A,0,n-1);
    }else{
        swap(A[p],A[q]);
        if(p<n-1){
            reverse(A,p+1,n-1);
        }
    }
    return A;
}
