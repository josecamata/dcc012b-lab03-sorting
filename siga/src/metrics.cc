
#include <iostream>
#include "metrics.h"


void SetUpPerformanceMetrics(PerformanceMetrics* pm)
{
    pm->n_comp = 0;
    pm->n_swap = 0;
    pm->time   = 0.0;
}


void PerformanceMetricsPrint(PerformanceMetrics* pm)
{   
#ifdef CPU_TIME
    cout << " Tempo de execução: "     << pm->time    << " segundos" << endl;
#endif
    cout << " Comparacoes: " << pm->n_comp << endl;
    cout << " Trocas: "      << pm->n_swap << endl; 
}

void PerformanceMetricsCPUTime(PerformanceMetrics* pm, double time)
{
    pm->time = time;
}


