#include <unistd.h>

void putboard(int *board)
{
    int i;
    int temp;

    temp = 0;
    i = 0;
    while (i < 10)
    {
        temp = board[i] + 48;
        write(1, &temp, 1);
        i++;
    }
    write(1, "\n", 1);
}

int check_placement(int *board, int col, int row)
{
    int i;

    i = 0;
    while (i < row)
    {
        if (board[i] == col || board[i] - i == col - row || board[i] + i == col + row)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int putqueens(int *board, int row)
{
    int col;

    col = 0;
    if (row == 10)
    {
        putboard(board);
        board[10]++;
    }
    else
    {
        while (col < 10)
        {
            if (check_placement(board, col, row))
            {
                board[row] = col;
                putqueens(board, row + 1);
            }
            col++;
        }
    }
    return (board[10]);
}

int ft_ten_queens_puzzle()
{
    int row;
    int board[11];
    int i;

    row = 0;
    i = 0;
    while (i < 10)
    {
        board[i] = -1;
        i++;
    }
    board[i] = 0;
    i = putqueens(board,row);
    return (i);
}
