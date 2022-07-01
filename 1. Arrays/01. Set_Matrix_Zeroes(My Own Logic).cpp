// Approach : Record row and column where zero is present
// Convert every element of these rows and colums to zero

class Solution
{
public:
    void setZeroes(vector<vector < int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<pair<int, int>> zeroes;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    pair<int, int> p = make_pair(i, j);
                    zeroes.push_back(p);
                }
            }
        }

        for (int x = 0; x < zeroes.size(); x++)
        {
            int i = zeroes[x].first;
            int j = zeroes[x].second;

            for (int k = 0; k < n; k++)
                matrix[i][k] = 0;
            for (int k = 0; k < m; k++)
                matrix[k][j] = 0;
        }
    }
};