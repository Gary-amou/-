//踩地雷地圖
#ifndef Minesweeper_h //踩地雷標頭檔開始
#define Minesweeper_h
#include <iostream>

class Map //設遊戲範圍
{
  public:
    Map(int width,int height,int mine);//建構地圖
    
  private:
    int  width; //寬度
    int  height; //高度
    int  mine//地雷數量
};

#endif
