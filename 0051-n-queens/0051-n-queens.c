/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
char*** solveNQueens(int n, int* returnSize, int** returnColumnSizes) {
    *returnSize = 0;

    // allocation t3 result
    char ***result = malloc(500 * sizeof(char **));
    *returnColumnSizes = malloc(500 * sizeof(int));

    // allocation t3 lboard
    char **board = malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        board[i] = malloc((n + 1) * sizeof(char));
        for (int j = 0; j < n; j++) board[i][j] = '.';
        board[i][n] = '\0';
    }

    //  check function
    int isValid(int row, int col) {
        for (int i = 0; i < row; i++)
            if (board[i][col] == 'Q') return 0;
        for (int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q') return 0;
        for (int i = row-1, j = col+1; i >= 0 && j < n; i--, j++)
            if (board[i][j] == 'Q') return 0;
        return 1;
    }

    // backtracking
    void backtrack(int row) {
        if (row == n) {
            result[*returnSize] = malloc(n * sizeof(char*));
            for (int i = 0; i < n; i++)
                result[*returnSize][i] = strdup(board[i]);
            (*returnColumnSizes)[*returnSize] = n;
            (*returnSize)++;
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isValid(row, col)) {
                board[row][col] = 'Q';
                backtrack(row + 1);
                board[row][col] = '.';
            }
        }
    }

    backtrack(0);
    return result;
}
