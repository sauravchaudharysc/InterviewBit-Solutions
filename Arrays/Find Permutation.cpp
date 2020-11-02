vector<int> Solution::findPerm(const string str, int B) {
     int p=0,q=0;
    int i;
    vector<int>ans;
    int n=str.length();
    for(i=0;i<n;i++){
        //Fill the number simply when encountered 'D'
        ans.push_back(i+1);
        //As soon as 'I' encountered reverse all the 'D' encountered value
        //Move the D encountered to I position and p to next of I position
        if(str[i]=='I'){
            while(p<q){
                int t=ans[p];
                ans[p]=ans[q];
                ans[q]=t;
                p++;
                q--;
            }
            p=i+1;
            q=i;
        }
        //The count of D encountered
        q++;
    }
    ans.push_back(n+1);
    //Reverse the string if NO 'I' encountered from p to q
    while(p<q){
                int t=ans[p];
                ans[p]=ans[q];
                ans[q]=t;
                p++;
                q--;
    }
    return ans;
}
