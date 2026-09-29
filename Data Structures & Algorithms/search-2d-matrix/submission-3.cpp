class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for (int row = 0; row < matrix.size(); row++) {
            cout << row << endl;
            if (matrix[row][0] < target &&
                target < matrix[row][matrix[row].size() - 1]) {
                cout << "here in row " << row << endl;
                int low = 0;
                int high = matrix[row].size() - 1;

                while (low <= high) {
                    int mid = low + (high - low) / 2;
                    cout<< matrix[row][mid]<<endl;
                    if (target == matrix[row][mid]) {
                        cout<<" here in if 1 "<<endl;
                        return true;
                    }
                    if (target < matrix[row][mid]) {
                        cout<<" here in if 2 "<<endl;
                        high = mid - 1;
                    }
                    if (target > matrix[row][mid]) {
                        cout<<" here in if 3 "<<endl;
                        low = mid + 1;
                    }
                }
                return false;
            }

            if (matrix[row][0] == target) {
                cout << "here in 2nd if at row " << row << "and col" << "0"
                     << endl;
                return true;
            }
            if (target == matrix[row][matrix[row].size() - 1]) {
                cout << "here in 3rd if at row " << row << endl;
                return true;
            }
        }

        return false;
    }
};
