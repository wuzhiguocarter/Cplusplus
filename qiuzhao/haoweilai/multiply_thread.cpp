include <pthread.h>
#include <stdlib.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct matrixArgs
{
    int *pMatrixLineA;
    int *pMatrixLineB;
    int *pResult;
    int matrixLineCount;
};

void *calculate(void *arg)
{
    matrixArgs *args = (matrixArgs*) arg;
    *(args->pResult) = 0;
    for (int i = 0; i < args->matrixLineCount; i++)
    {
        *(args->pResult) += (*(args->pMatrixLineA + i))
                            * (*(args->pMatrixLineB + i));
    }
    pthread_exit(NULL);
}

int main()
{
    int i[3];
    cin << n;
    i[2] = i[1] = i[0] = n;
    int matrixACount = i[1] * i[0];
    int matrixBCount = i[2] * i[0];
    int matrixResultCount = i[1] * i[2];
    int *pMatrixA, *pMatrixB, *pMatrixResult;
    matrixArgs *pMatrixArgs;
    pMatrixA = (int*) malloc(matrixACount * sizeof(int));
    pMatrixB = (int*) malloc(matrixBCount * sizeof(int));
    pMatrixResult = (int*) malloc(matrixResultCount * sizeof(int));
    pMatrixArgs = 
        (matrixArgs*) malloc(matrixResultCount * sizeof(matrixArgs));

    cout<<"Please enter "<<matrixACount<<" number(s) for M1:";
    for (int j = 0; j < matrixACount; j++)
    {
        while (!(cin>>(*(pMatrixA + j))))
        {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout<<"Please enter a number for element #"<<j + 1<<":";
        }
    }
    cout<<"Please enter "<<matrixBCount<<" number(s) for M2:";
    for (int j = 0; j < matrixBCount; j++)
    {
        while (!(cin>>(*(pMatrixB + (j / i[2] + (j % i[2]) * i[0])))))
        {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout<<"Please enter a number for element #"<<j + 1<<":";
        }
    }
    pthread_t *pPthread;
    pPthread = (pthread_t*) malloc(matrixResultCount * sizeof(pthread_t));
    void *status;
    pthread_attr_t attr;
    int rc;
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
    matrixArgs *pMatrixArgsCurrent = pMatrixArgs;
    for (int j = 0; j < i[1]; j++)
    {
        for (int k = 0; k < i[2]; k++, pMatrixArgsCurrent++)
        {
            pMatrixArgsCurrent->matrixLineCount = i[0];
            pMatrixArgsCurrent->pMatrixLineA = pMatrixA + (j * i[0]);
            pMatrixArgsCurrent->pMatrixLineB = pMatrixB + (k * i[0]);
            pMatrixArgsCurrent->pResult = pMatrixResult + (j * i[2] + k);
            rc = pthread_create(pPthread + (j * i[2] + k), 
                                &attr, 
                                calculate, 
                                (void*) pMatrixArgsCurrent);

            if (rc)
            {
                cout<<"ERROR: return code from pthread_create() is "
                    <<rc<<"\n";

                exit(-1);
            }
        }
    }
    pthread_attr_destroy(&attr);
    for (int j = 0; j < i[1]; j++)
    {
        for (int k = 0; k < i[2]; k++, pMatrixArgsCurrent++)
        {
            rc = pthread_join(*(pPthread + (j * i[2] + k)), &status);
            if (rc)
            {
                cout<<"ERROR: return code from pthread_join() is "<<rc<<"\n";
                exit(-1);
            }
        }
    }
    cout<<"Result:\n";
    for (int j = 0; j < i[1]; j++)
    {
        for (int k = 0; k < i[2]; k++, pMatrixArgsCurrent++)
        {
            cout<<*(pMatrixResult + (j * i[2] + k))<<" ";
        }
        cout<<"\n";
    }
    free(pMatrixA);
    free(pMatrixB);
    free(pMatrixResult);
    free(pMatrixArgs);
    free(pPthread);
    pthread_exit(NULL);
    return 0;
}