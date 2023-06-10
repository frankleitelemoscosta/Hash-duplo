#include"File.hpp"
#include"Hashtable.hpp"

using namespace std;

void ReadFile(FILE **File)
{

    char Row[100];
    HashTable hash;
    char lixo[100];
    int Size = 0;
    int Counter = 0;
    int Counter_aux = 0;

//initialize the vet
    for(int i = 0; i < 100; i++)
    {
        lixo[i] = '*';
    }

//extract the data of the file
    while(!feof(*File)){
        fscanf(*File,"%c",&lixo[Counter]);
        Counter++;
    }

//extract the quantiti of words that exist in the input file
    while(lixo[Counter_aux] != '*')
    {
        if(lixo[Counter_aux] == ' ' || lixo[Counter_aux] == '.')
        {
            Size++;
        }
        Counter_aux++; 
    }

    Initialize(&hash, Size);
}

void OpenFile(){

    FILE *File = fopen("dataset/input.data","r");

    ReadFile(&File);

}