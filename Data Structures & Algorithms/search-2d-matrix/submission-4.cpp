class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for (int row = 0; row < matrix.size(); row++) {
            cout << row << endl;
            int right = matrix[row][0];
            int left = matrix[row][matrix[row].size() - 1];
            if (right <= target && target <= left) {
                cout << "here in row " << row << endl;
                int low = 0;
                int high = matrix[row].size() - 1;
                while (low <= high) {
                    int mid = low + (high - low) / 2;
                    cout << matrix[row][mid] << endl;
                    if (target == matrix[row][mid]) {
                        cout << " here in if 1 " << endl;
                        return true;
                    } else if (target < matrix[row][mid]) {
                        cout << " here in if 2 " << endl;
                        high = mid - 1;
                    } else {
                        cout << " here in if 3 " << endl;
                        low = mid + 1;
                    }
                }
                return false;
            }
        }

        return false;
    }
};
