#pragma once



class GetArray{
private:
    int **arr;
    int width, height;
public:
    GetArray();
    void sizes();
    int getWidth();
    int getHeight();
    int** getArr();
    //void ArrayFromFile();
    void setCellStatus(int val, int a, int b);
};
