vector<int> Solution::wave(vector<int> &A) {
     int n=A.size();
     sort(A.begin(),A.end());
    for(int i=0;i<n;i+=2){
        //prev element
        if(i!=0 and A[i]<A[i-1]){
            swap(A[i],A[i-1]);
        }
        //next element
        if(i!=(n-1) and A[i]<A[i+1]){
            swap(A[i],A[i+1]); 
        }
    }
    return A;
}
