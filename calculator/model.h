#ifndef MODEL_H
#define MODEL_H
#include <QString>

class model
{
public:
    model();
    void setn1(int num);
    void setn2(int num);
    void setflag(QString flag);
    QString expr();

private:
    int num1;
    int num2;
    QString flag;
};

#endif // MODEL_H
