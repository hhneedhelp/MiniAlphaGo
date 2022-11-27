#include "MiniAlphaGoBoard.h"

//constructor
MiniAlphaGoBoard::MiniAlphaGoBoard(QWidget *parent){
    first = NS_MAGBOARD::PLAYER_FIRST;

    black_num = 2;
    white_num = 2;

    board = new QPainter(this);
    msg = new QMessageBox(this);

    for(int32_t idx = 0; idx < NS_CALMACHINE::BOARD_SIZE; ++idx){
        for(int32_t idy = 0; idy < NS_CALMACHINE::BOARD_SIZE; ++idy){
            m_board[idx][idy] = NS_CALMACHINE::NULL_CHESS;
        }
    }

    int32_t left_pos = (NS_CALMACHINE::BOARD_SIZE - 1) / 2;
    int32_t right_pos = NS_CALMACHINE::BOARD_SIZE / 2;

    m_board[left_pos][left_pos] = NS_CALMACHINE::BLACK_CHESS;
    m_board[right_pos][left_pos] = NS_CALMACHINE::WHITE_CHESS;
    m_board[left_pos][right_pos] = NS_CALMACHINE::WHITE_CHESS;
    m_board[right_pos][right_pos] = NS_CALMACHINE::BLACK_CHESS;

    ai_single_time = 0;
    ai_total_time = 0;
    player_single_time = 0;
    player_total_time = 0;
}

//deconstructor
MiniAlphaGoBoard::~MiniAlphaGoBoard(){
    if(board != nullptr){
        delete board;
        board = nullptr;
    }

    if(msg != nullptr){
        delete msg;
        msg = nullptr;
    }
}

//paint event
void MiniAlphaGoBoard::paintEvent(QPaintEvent *){
    if(board == nullptr){
        return;
    }

    //set widow title
    if(first == NS_MAGBOARD::AI_FIRST){
        setWindowTitle("Mini Alpha Go(AI FIRST)");
    }
    else if(first == NS_MAGBOARD::PLAYER_FIRST){
        setWindowTitle("Mini Alpha Go(PLAYER FIRST)");
    }

    //set background color
    QPalette pal = palette();
    pal.setColor(QPalette::Window,Qt::gray);
    setPalette(pal);
}

//mouse press event
void MiniAlphaGoBoard::mousePressEvent(QMouseEvent *event){

}

void MiniAlphaGoBoard::switchFirst(int8_t first){
    this->first = first;
}
