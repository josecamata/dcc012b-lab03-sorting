# Algoritmos de Ordenação (Parte 2)

## Objetivos:
Aprender os algoritmos mais eficientes de ordenação. 

Espera-se que ao final desta atividade você seja capaz de classificar informaçoes usando métodos mais eficientes de ordenação e 
compreender os principais conceitos por tras dessas métodos.
Alem disso, iremos comparar os métodos de ordenação usando as seguintes métricas: numero de comparações, movimentações 
e tempo de processamento.

## 📝 Métodos de Ordenação Eficientes:

Os métodos básicos que iremos abordar nesta atividade são: 
 - [Método MergeSort](https://pt.wikipedia.org/wiki/Merge_sort)
 - [Método Quicksort](https://pt.wikipedia.org/wiki/Quicksort)

## O que deve ser feito? 

### Implementação dos Métodos Eficientes de Ordenação
Os dois métodos de ordenação supracitados deve ser implementados no(s) mesmos(s) arquivo(s) onde foram codificados
os métodos básicos de ordenação.

Assim, como anteriormente a utilização dos métodos de ordenação se dará na chamada dos seguintes métodos da classe Siga:

 - SalvaListaOrdenadoPorNome()
 - SalvaListaOrdenadaEstudantesPorCurso()

Os detalhes do que deve ser implementado, encontram-se no arquivo [siga.cc](siga/src/siga.cc).

Nessa atividade, além de implementação acima, vocês devem gerar um relatório de comparação entre os métodos.Para tanto, vocês devem incluir na implementação 
dos métodos de ordenação, contadores do número de comparações e do número de movimentações de dados.  O tempo de processamento também deve ser calculado. Uma estrutura para gerenciar essas metricas e rotinas auxiliares estão nos arquivos arquivos [metrics.h](siga/include/metrics.h) e [metrics.cc](siga/src/metrics.cc).
Veja como o bubblesort foi implementado usando essas métricas de desempenho. A ideia é que vocês adaptem seus algoritmos seguindo esse padrão.
Esse estudo comparativo está no arquivo [test6.cc](tests/test6.cc). 

## Compilação e execução

```
cmake -B build 
cd build 
ctest
...

```
O comando ctest irá executar o conjunto de testes unitaŕios para avaliar ssua implementação.
Veja no arquivo [CMakeLists.txt](CMakeLists.txt) o que os testes estão fazendo.

```
Test project /home/camata/git/dcc012/dcc012b-lab03-sorting/build
      Start  1: Setup
 1/10 Test  #1: Setup ............................   Passed    0.01 sec
      Start  2: TestImportacao1000
 2/10 Test  #2: TestImportacao1000 ...............   Passed    0.13 sec
      Start  3: TestMergeSort1000
 3/10 Test  #3: TestMergeSort1000 ................   Passed    0.01 sec
      Start  4: MergeSortCompare
 4/10 Test  #4: MergeSortCompare .................   Passed    0.02 sec
      Start  5: TestQuickSort1000
 5/10 Test  #5: TestQuickSort1000 ................   Passed    0.01 sec
      Start  6: QuickSortCompare
 6/10 Test  #6: QuickSortCompare .................   Passed    0.02 sec
      Start  7: Importe2000
 7/10 Test  #7: Importe2000 ......................   Passed    0.29 sec
      Start  8: OrdenaCursoENome
 8/10 Test  #8: OrdenaCursoENome .................   Passed    0.02 sec
      Start  9: OrdenaCursoENomeCompare
 9/10 Test  #9: OrdenaCursoENomeCompare ..........   Passed    0.01 sec
      Start 10: Compara
10/10 Test #10: Compara ..........................   Passed    0.98 sec

100% tests passed, 0 tests failed out of 10
```


## Como seu código será avaliado?

Seu código irá passar por um sistema de autocorreção onde algumas funcionalidades serão testadas.
Passar em todos testes é importante pois indica que você está no caminho certo. No entanto,
outros aspectos podem afetar a sua nota, a saber:
 - código desorganizado e/ou sem documentação/comentários
 - detectação de vazamentos de memória
 - Implementação ineficiente

## Procure saber mais...
Tente saber com os testes unitários foram implementados no CMakeList. 


