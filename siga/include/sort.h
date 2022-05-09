#ifndef SORT_H__
#define SORT_H__


// Use essa função para movimentar dados 
template <typename T>
void swap(T* a, T *b)
{
    T* tmp = a;
    a      = b;
    b      = tmp;
}


template <typename T>
void bubble_sort(T* array, int size, bool (*compare)(T&, T&))  
{
    // TODO: Implementação do Bubble Sort
    // Coloque aqui a implementação da atividade passada
}



template <typename T>
void insert_sort(T* array, int size,  bool (*compare)(T&, T&))
{
    // TODO: Implementação do Insert Sort
    // Coloque aqui a implementação da atividade passada
}


template <typename T>
void selection_sort(T* array, int size, bool (*compare)(T&, T&))
{
    // TODO: Implementação do selection Sort
    // Coloque aqui a implementação da atividade passada
}



template <typename T>
void merge_sort(T* array, int size, bool (*compare)(T&, T&))
{
    // TODO: Implementação do merge_sort
    // Coloque aqui a implementação da atividade passada
}



template <typename T>
void quick_sort(T* array, int size, bool (*compare)(T&, T&))
{
    // TODO: Implementação do quicksort
    // Coloque aqui a implementação da atividade passada
}





#endif /* SORT_H__ */
