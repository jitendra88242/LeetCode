class Solution {
public:
    int maxE(vector<vector<int>>& mat,int n,int m,int col){
        int maxValue=-1;
        int index=-1;
        for(int i=0;i<n;i++){
            if(mat[i][col]>maxValue){
                maxValue=mat[i][col];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int maxele=maxE(mat,n,m,mid);
            int left=-1,right=-1;
            if(mid-1>=0){
                left=mat[maxele][mid-1];
            }
            if(mid+1<m){
                right=mat[maxele][mid+1];
            }
            if(mat[maxele][mid]>left && mat[maxele][mid]>right){
                return {maxele,mid};
            }else if(mat[maxele][mid]<left){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};