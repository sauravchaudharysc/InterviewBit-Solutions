int Solution::solve(vector<string> &A) {
    int n = A.size();
    vector<double> v(n);
    for(int i = 0;i<n;++i){
        //To parse a string to a decimal number
        v[i] = stod(A[i]);
    }
    //Sort the array
    sort(v.begin() , v.end());
    
    //Choose a=l-1, b=l and c=r 
    //Adjust accordingly
    int l = 1, r = n-1;
    while(l < r){
        double val = v[l-1] + v[l] + v[r];
        if(val >= 2.0){
            r--;
        }
        else if(val < 1){
            l++;
        }
        else return 1;
        
    }
    return 0;
    
}