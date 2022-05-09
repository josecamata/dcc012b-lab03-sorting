#include <iostream>
#include <chronos>

#include "siga.h"
#include "sort.h"



int main(int argc, char* argv[])
{
   // Abre o dataset 
   Siga siga("dataset.bin");
  
   if(siga.esta_vazio())
      siga.ImportCSVData(argv[1]);
  
    int n_estudantes = siga.Obter();
    Estudante *list  = siga.ExtractAllData();
  
    delete [] estudantes;
    return 0;
}
  
  
    
    
