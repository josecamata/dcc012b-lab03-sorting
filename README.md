# Algoritmos de Ordenação (Parte 2)

## Objetivos:
Aprender os algoritmos mais eficientes de ordenação. 

Espera-se que ao final desta atividade você seja capaz de classificar informaçoes usando métodos mais eficientes de ordenação e 
compreender os principais conceitos por tras dessas métodos.
Alem disso, iremos comparar os métodos de ordenação usando as seguintes métricas: numero de comparações, movimentações 
e tempo de processamento.

## 📝 Métodos de Ordenação Eficientes:

Os métodos básicos que iremos abordar nesta atividade são: 
 - [Método MergeSort](https://pt.wikipedia.org/wiki/Bubble_sort)
 - [Método Quicksort](https://pt.wikipedia.org/wiki/Selection_sort)
 - [Método HeapSort](https://pt.wikipedia.org/wiki/Insertion_sort) 
 
## O que deve ser feito? 

### Implementação dos Métodos de ordenação
Os três métodos de ordenação supracitados deve ser implementados no(s) mesmos(s) arquivo(s) onde foram codificados
os métodos básicos de ordenação.

A utilização dos métodos de ordenação se dará na chamada dos seguintes métodos da classe Siga:

 - SalvaListaOrdenadoPorNome()
 - SalvaListaOrdenadaEstudantes()

Novamente, os detalhes do que deve ser implementado, encontra-se no arquivo [siga.cc](siga/src/siga.cc].

## Compilação e execução

```
cmake -B build 
cmake --build build 
./build/tests/test1 tests/input/siga1000.csv
...

```

Veja os codigos dos testes para detalhes. Alguns testes, esperam arquivos de entradas e/ou saída 
como argumento na linha comando!

## Como seu código será avaliado?

Seu código irá passar por um sistema de autocorreção onde algumas funcionalidades serão testadas.
Passar em todos testes é importante pois indica que você está no caminha certo. No entanto,
outros aspectos pocem afetar a sua nota, a saber:
 - código desorganizado e/ou sem documentação/comentários
 - vazamentos de memoria
 - Implementação ineficiente





