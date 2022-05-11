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
Esse estudo comparativo deve ser implementado no arquivo [compara.cc](tests/compara.cc). 
Lá está pronto o caso para o bubblesort. 

## Compilação e execução

```
cmake -B build 
cmake --build build 
./build/tests/test1 tests/input/siga1000.csv
...

```

Veja os códigos dos testes para mais detalhes. Alguns testes, esperam arquivos de entradas e/ou saída 
como argumento na linha comando!

## Como seu código será avaliado?

Seu código irá passar por um sistema de autocorreção onde algumas funcionalidades serão testadas.
Passar em todos testes é importante pois indica que você está no caminho certo. No entanto,
outros aspectos podem afetar a sua nota, a saber:
 - código desorganizado e/ou sem documentação/comentários
 - detectação de vazamentos de memória
 - Implementação ineficiente





