vector<int> Solution::plusOne(vector<int> &A) {
    //Size of given array
    int n=A.size();
    //Reverse the array so the opertions become simpler
    reverse(A.begin(),A.end());
    //Answer array
    vector<int>ans;
    //variables to store sum and carry
    int sum=0,carry=0;
    for(int i=0;i<n;i++){
        //Add 1
        if(i==0){
            sum=A[i]+carry+1;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
        }else{
            sum=A[i]+carry;    
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
        }
    }
    //For carry at MSB
    if(carry){
        ans.push_back(carry);
        n++;
    }
    //To iterate over the ans and store the final result
    int i=0;
    vector<int>result;
    //Reverse it
    reverse(ans.begin(),ans.end());
    //Count starting zeroes
    while(ans[i]==0){
        i++;
    }
    //Skip those and insert rest
    for(i;i<n;i++){
        result.push_back(ans[i]);
    }
    return result;
}
