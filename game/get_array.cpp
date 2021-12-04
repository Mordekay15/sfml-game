#include "get_array.hpp"
#include "field.hpp"
#include <iostream>
#include <fstream>
#include <string>

GetArray::GetArray() {
    sizes();
    std::ifstream in("arr.txt");


    arr = new int*[height];
    for (int i = 0; i < height; i++) arr[i] = new int[width];
    int k = 0;
    if (in.is_open())
    {
        while (!in.eof()){
      //  Считаем матрицу из файла
            for (int i = 0; i < height; i++)
                for (int j = 0; j < width; j++){
                    in >> arr[i][j];
                    k++;

            }
        }


        in.close();
    }
    else
    {
        std::cout << "Файл не найден.";
    }
//    arr[7][3] = 6;
//    arr[4][5] = 4;
//    arr[8][7] = 5;
//    for (int i = 0; i < height; i++){
//        for (int j = 0; j < width; j++)
//            std::cout << arr[i][j] << " ";
//        std::cout << "\n";
//    }
}

//void GetArray::ArrayFromFile(){
//
//}

int GetArray::getWidth(){
    return width;
}

int GetArray::getHeight(){
    return height;
}

int** GetArray::getArr() {
    return arr;
}

void GetArray::sizes() {
    std::ifstream in("arr.txt");

    if (in.is_open()) {
        height = 0;
        std::string temp;
        while (std::getline(in, temp))
        {
            height++;
            width = temp.length()/2 + 1;
        }
    }
    in.close();
}

void GetArray::setCellStatus(int val, int a, int b) {
    arr[a][b] = val;
    //Field field;
}



