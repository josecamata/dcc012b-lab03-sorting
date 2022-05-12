#include <iostream>
#include <chrono>

#include "siga.h"
#include "sort.h"

int main(int argc, char* argv[])
{
   // Abre o dataset 
   Siga siga("dataset.bin");
   siga.ImportCSVData(argv[1]);
  
    int n_estudantes = siga.ObterNumeroEstudantesArmazenados();

    Estudante *list  = siga.ExtractAllEstudants();

    bubble_sort(list, n_estudantes, &CompareByNome);

    // TODO: 
    // 1. Inserir chamada para os outros metodos:
    // select_sort(list, n_estudantes, &CompareByNome);
    // insert_sort(list, n_estudantes, &CompareByNome);
    // merge_sort(list, n_estudantes, &CompareByNome);
    // quick_sort(list, n_estudantes, &CompareByNome);
    // 2. Teste sua implementação com a chamada do qsort do C++ e compare
    // os tempos de processamento.

    delete [] list;
    return 0;
}
  
  
    
    
