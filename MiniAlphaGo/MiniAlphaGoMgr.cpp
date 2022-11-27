#include "MiniAlphaGoMgr.h"

MiniAlphaGoMgr::MiniAlphaGoMgr(){}

MiniAlphaGoMgr::~MiniAlphaGoMgr(){}

//init
int32_t MiniAlphaGoMgr::init(){
    MiniAlphaGoUI::getInstance().show();
    return RET::SUC;
}

//init start time of single step
void MiniAlphaGoMgr::initSingleTime(){
    m_single_start_time = time(nullptr);
}
