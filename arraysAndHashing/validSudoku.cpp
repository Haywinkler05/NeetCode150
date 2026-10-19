class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<unordered_set<char>> row(9), col(9), box(9); //Make 3 vectors consisting of 9 sets
        for(size_t c = 0; c < board.size(); c++){ //Double for loop to loop through 2D array
            for(size_t r = 0; r < board[c].size();r++){
                int currBox = (r / 3) * 3 + (c / 3); //Math to find the current box
                if(board[c][r] == '.') continue; //Skip empty space
                if(!row[r].insert(board[c][r]).second) return false; //If it curr is in row set. It's not valid
                if(!col[c].insert(board[c][r]).second) return false; //If it curr is in col set. It's not valid
                if(!box[currBox].insert(board[c][r]).second) return false; //If it curr is in currBox. It's not valid
            }
        }
        return true;
    }
};
