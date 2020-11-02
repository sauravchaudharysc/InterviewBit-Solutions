vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    //To store answer
    vector<int>ans;    
    int n=A.size();
    int o=A[0].size();
    //Row Movement && Row Size
    int l=0,row=n;
    //Col Movement && Col Size
    int m=0,col=o;
    while(l<row && m<col){
        
        if(l<row){
            for(int i=m;i<col;i++){
                ans.push_back(A[l][i]);
            }
            //A row from top is completed
            l++;
        }
        if(m<col){
            for(int i=l;i<row;i++){
                ans.push_back(A[i][col-1]);
            }
            //A col from right is completed
            col--;
        }
        if(l<row){
            for(int i=col-1;i>=m;i--){
                ans.push_back(A[row-1][i]);
            }
            //A row from bottom is completed
            row--;
        }
        if(m<col){
            for(int i=row-1;i>=l;i--){
                ans.push_back(A[i][m]);
            }
            //A col from left is completed
            m++;
        }
    }
    return ans;
}
