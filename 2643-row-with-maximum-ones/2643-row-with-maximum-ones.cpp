class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int cnt_max=0;
        int index=0;
        for(int i=0;i<row;i++){
            int cnt1=0;
            for(int j=0;j<col;j++){
                cnt1+=mat[i][j];
            }
            if(cnt1>cnt_max){
                cnt_max=cnt1;
                index=i;
            }
        }    
        return {index, cnt_max};
    }
};