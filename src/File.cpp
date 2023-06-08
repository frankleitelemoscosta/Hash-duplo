#include"File.hpp"

using namespace std;

void ReadFile(FILE *File)
{



}

void OpenFile(){

    FILE *File = fopen("dataset/input.data","r");

    ReadFile(File);

}