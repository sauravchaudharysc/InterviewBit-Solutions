vector<int> Solution::flip(string A) {
    vector<int>result;
    int n=A.size();
    int left=0;
    int right=0;
    int currOne=0;
    int maxOne=0;
    int tempLeft=0;
    for(int i=0;i<n;i++){
        int val = (A[i]=='0')?1:-1;
        currOne=currOne+val;
        if(currOne<0){
            tempLeft=i+1;
            currOne=0;
        }else{
            if(currOne>maxOne){
                maxOne=currOne;
                left=tempLeft+1;
                right=i+1;
            }
        }
    }
    if(maxOne){
            result.push_back(left);
            result.push_back(right);
    }
    return result;
}
