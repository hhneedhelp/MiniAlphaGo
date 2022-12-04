#include "MiniAlphaGoUI.h"
#include "MiniAlphaGoBoard.h"
#include "MiniAlphaGoMgr.h"

//constructor
MiniAlphaGoUI::MiniAlphaGoUI(QWidget *parent)
    : QMainWindow(parent)
{
    this->createGameUi();
}

//deconstructor
MiniAlphaGoUI::~MiniAlphaGoUI()
{
    if(name != nullptr){
        delete name;
        name = nullptr;
    }

    if(player_first != nullptr){
        delete player_first;
        player_first = nullptr;
    }

    if(ai_first != nullptr){
        delete ai_first;
        ai_first = nullptr;
    }
}

//create game ui
void MiniAlphaGoUI::createGameUi(){
    //set window title
    setWindowTitle("Mini Alpha Go");

    //set background color
    QPalette pal = this->palette();
    pal.setColor(QPalette::Window,QColor("blue"));//Window is background
    this->setPalette(pal);//***set palette, this can be neglect

    //set name
    name = new QLabel(this);
    name->setText("MiniAlphaGo");
    name->setGeometry(200,50,350,100);
    name->setStyleSheet("color: white; font: 45px; background: red");
    name->setAlignment(Qt::AlignCenter);

    //player first button
    player_first = new QPushButton("PLAYER FIRST",this);
    player_first->setGeometry(250,250,250,70);
    player_first->setStyleSheet("color: black; font: 25px; background: white");
    QObject::connect(player_first, &QPushButton::clicked,this,&MiniAlphaGoUI::playerFirst);

    //ai first button
    ai_first = new QPushButton("AI FIRST",this);
    ai_first->setGeometry(250,350,250,70);
    ai_first->setStyleSheet("color: black; font: 25px; background: white");
    QObject::connect(ai_first,&QPushButton::clicked,this,&MiniAlphaGoUI::aiFirst);
}

//player first
void MiniAlphaGoUI::playerFirst(){
    //close window
    this->close();

    //switch first
    MiniAlphaGoBoard::getInstance().switchFirst(NS_MAGBOARD::PLAYER_FIRST);

    //init start time of single step
    MiniAlphaGoMgr::getInstance().initSingleTime();

    //show board
    MiniAlphaGoBoard::getInstance().show();
}

//ai first
void MiniAlphaGoUI::aiFirst(){
    //close window
    this->close();

    //switch first
    MiniAlphaGoBoard::getInstance().switchFirst(NS_MAGBOARD::AI_FIRST);

    //init start time of single step
    MiniAlphaGoMgr::getInstance().initSingleTime();

    //show board
    MiniAlphaGoBoard::getInstance().show();

    // ai play chess
    MiniAlphaGoMgr::getInstance().updateBoard(NS_MAGBOARD::AI_FIRST);//**
}
