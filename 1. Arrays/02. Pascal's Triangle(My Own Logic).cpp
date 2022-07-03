class Solution
{
public:
    vector<vector < int>> generate(int numRows)
    {
        vector<vector < int>> ans;
        vector<int> ans_one;

        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                    ans_one.push_back(1);
                else
                    ans_one.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
            }
            ans.push_back(ans_one);
            ans_one.clear();
        }
        return ans;
    }
};