/*
class Solution 
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c)
    {
        int n = mat.size(), m = mat[0].size();
        
            if (n * m != r * c)
            
           return mat;
        
        vector<vector<int>> ans(r, vector<int>(c));
        int i,j,x=0,y=0;
        for (int i = 0; i < r * c; i++)
        {
            for(j=0;j<c;j++)
            {
            ans[i][j] = mat[x][y++];
            if (y==m)
                y%=m,x++;
            }
        }
        return ans;
    }
};
*/
-----------------------------------------------------------------------------
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c)
    {
        int n = nums.size(), m = nums[0].size();
        
        if (n * m != r * c) 
        return nums;
        
        vector<vector<int>> ans(r, vector<int>(c));
        
        for (int i = 0; i < r * c; i++) 
        ans[i/c][i%c] = nums[i/m][i%m];
        return ans;
    }
};
