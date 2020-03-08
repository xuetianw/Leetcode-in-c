//
// Created by fred on 2020-03-07.
//

int count_live_cells(int row, int colum, int** board);
void update_board(int** board, int boardSize, int* boardColSize);
// if cell transfer from cell to dies -1
// if cell transfer from dead to live -2
void gameOfLife(int** board, int boardSize, int* boardColSize){

    if (boardSize == 0) return;

    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < *boardColSize; j++) {
            int cell = board[i][j];
            if (cell == 0) {
                int live_cells = count_live_cells(i, j, board);
                if (live_cells == 3) {//three live neighbors becomes a live cell,
                    board[i][j] = -2 ;
                }
            } else if (cell == 1) {
                int live_cells = count_live_cells(i, j, board);
                //with fewer than two live neighbors dies
                //with more than three live neighbors dies
                if (live_cells < 2 || live_cells > 3) {
                    board[i][j] = -1 ;
                }
            }
        }
    }
    update_board(board, boardSize, boardColSize);

}

int count_live_cells(int row, int colum, int** board) {
    int dir_arr[8][2] =
    {
        {row - 1, colum - 1},//top_left
        {row - 1, colum    },//top
        {row - 1, colum + 1},//top_right
        {row,    colum - 1},//left
        {row,     colum + 1},//right
        {row + 1, colum - 1},//bottom_left
        {row + 1, colum    },//bottom
        {row + 1, colum + 1},//bottom_right
    };


    int count = 0;
    for (int i = 0; i < 8; i++) {
        if ((dir_arr[i][0] >= 0 && dir_arr[i][0] < row)
            && (dir_arr[i][1] >= 0 && dir_arr[i][1] < colum) ) {
            if (board [dir_arr[i][0]] [dir_arr[i][1]] == 1) {
                count++;
            }
        }
    }


    return count;
}


void update_board(int** board, int boardSize, int* boardColSize) {
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < * boardColSize; j++) {
            if (board[i][j] == -1) {
                board[i][j] = 0;
            } else if (board[i][j] == -2) {
                board[i][j] = 1;
            }
        }
    }
}