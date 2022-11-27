#ifndef MINIALPHAGOUI_H
#define MINIALPHAGOUI_H

#include <QMainWindow>
#include <QPushButton>
#include <QPalette>
#include <QLabel>
#include <QPainter>
#include <cstdint>
#include <cstdio>

QT_BEGIN_NAMESPACE
namespace Ui { class MiniAlphaGoUI; }
QT_END_NAMESPACE

class MiniAlphaGoUI : public QMainWindow
{
    Q_OBJECT

public:
    //get instance
    static MiniAlphaGoUI &getInstance(){
        static MiniAlphaGoUI _instance;
        return _instance;
    }

    //deconstructor
    ~MiniAlphaGoUI();

private:
    //constructor
    explicit MiniAlphaGoUI(QWidget *parent = nullptr);

    //create index
    void createGameUi();

    //player first
    void playerFirst();

    //ai first
    void aiFirst();

private:
    //index name
    QLabel *name;

    //ai button
    QPushButton *ai_first;

    //player button
    QPushButton *player_first;
};
#endif // MINIALPHAGOUI_H
