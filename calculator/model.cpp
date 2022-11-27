#include "model.h"

model::model()
{
    this->num1=this->num2=0;
}

void model::setn1(int num){
    this->num1=num;
}

void model::setn2(int num){
    this->num2=num;
}

void model::setflag(QString flag){
    this->flag=flag;
}

QString model::expr(){
    int result=0;
    if(this->flag=="+"){
        result=this->num1+this->num2;

    }else if(this->flag=="-"){
        result=this->num1-this->num2;

    }else if(this->flag=="*"){
        result=this->num1*this->num2;

    }else if(this->flag=="/"){
        if(this->num2==0){
            return "Error";
        }else if(this->num2!=0){
            result=this->num1/this->num2;
        }

    }else{
        return QString::number(this->num1);
    }

    return QString::number(result);
}
