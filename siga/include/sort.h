#ifndef SORT_H__
#define SORT_H__

#include <chrono>
#include <iostream>
using namespace std;

#include "metrics.h"


// Use essa função para movimentar dados 
template <typename T>
void swap(T* a, T *b)
{

    T* tmp = a;
    a      = b;
    b      = tmp;
}


template <typename T>
void bubble_sort_internal(T* array, int size, bool (*compare)(T&, T&), PerformanceMetrics *p)  
{
    // bubble sort
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            p->n_comp++;   // incrementa o número de comparações
            if (compare(array[j], array[j + 1]))
            {
                p->n_mov+=3; // swap realiza tres movimentacao de dados
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}



template <typename T>
void insert_sort_internal(T* array, int size,  bool (*compare)(T&, T&), PerformanceMetrics *p)
{
    // TODO: Implementação do Insert Sort
    // Coloque aqui a implementação da atividade passada
}


template <typename T>
void selection_sort_internal(T* array, int size, bool (*compare)(T&, T&), PerformanceMetrics *p)
{
    // TODO: Implementação do selection Sort
    // Coloque aqui a implementação da atividade passada
}



template <typename T>
void merge_sort_internal(T* array, int size, bool (*compare)(T&, T&), PerformanceMetrics *p)
{
    // TODO: Implementação do merge_sort
    // Coloque aqui a implementação da atividade passada
}


template <typename T>
void quick_sort_internal(T* array, int size, bool (*compare)(T&, T&), PerformanceMetrics *p)
{
    // TODO: Implementação do quicksort
    // Coloque aqui a implementação da atividade passada
}


template <typename T>
void bubble_sort(T* array, int size, bool (*compare)(T&, T&))  
{
    PerformanceMetrics p;
    SetUpPerformanceMetrics(&p);
    auto t1 = Clock::now();
    bubble_sort_internal(array, size, compare, &p);
    auto t2 = Clock::now();
    std::chrono::duration<double> diff = t2 - t1;
    PerformanceMetricsCPUTime(&p, diff.count());
    cout << "Bubble Sort:" << endl; 
    PerformanceMetricsPrint(&p);
}

#endif /* SORT_H__ */
