/*
Christopher Bennett
To make a emulate a circular queue data type.
Date: 02/03/2024
*/



#include <stdio.h>



struct Circular_Queue
{
    int array[30];
    int MAX;
    int MIN;
    int front;
    int end;
};


int Check_Empty(struct Circular_Queue *pCQ);
int Check_Full(struct Circular_Queue *pCQ);
void EnQueue(struct Circular_Queue *pCQ, int value);
int DeQueue(struct Circular_Queue *pCQ);
void Initialize_Array(struct Circular_Queue *pCQ, int m);
void Output_Array(struct Circular_Queue *pCQ);


void main()
{
    printf("We Ball!\n");

    struct Circular_Queue CQ; CQ.MIN=1; CQ.MAX=10; CQ.front=CQ.MIN; CQ.end=CQ.MIN; Initialize_Array(&CQ, CQ.MAX);
}


void Initialize_Array(struct Circular_Queue *pCQ, int m)
{
    printf("Initialize Queue Array\n");
    pCQ->array[0] = m;

    for (int i=1; i<=m ; i++)
    {
        pCQ->array[i] = 00;
    }
    Output_Array(pCQ);
}

void Output_Array(struct Circular_Queue *pCQ)
{
    //printf("CIRCULAR QUEUE\n");

    if (pCQ->front > pCQ->end){
            //printf("FRONT\n");
            for (int i=pCQ->front; i<=pCQ->MAX ; i++)
            {
                printf("INDEX %i:\t%i\n", i, pCQ->array[i]);
            }
            for (int i=1; i<pCQ->end ; i++)
            {
                printf("INDEX %i:\t%i\n", i, pCQ->array[i]);
            }
    }else{for(int i=pCQ->front; i<pCQ->end - 1; i++){printf("%i\n");}}

    //printf("END\n");
}

int Check_Empty(struct Circular_Queue *pCQ)
{
    if (pCQ->front == pCQ->end){
        //printf("EMPTY\n");
        return -1;
    }else{return 0;}
}

int Check_Full(struct Circular_Queue *pCQ)
{
    if (pCQ->end == pCQ->MAX & pCQ->front == pCQ->MIN|| pCQ->end == (pCQ->front - 1)){
        //printf("FULL\n");
        return -1;
    }else{return 0;}
}

void EnQueue(struct Circular_Queue *pCQ, int value)
{
    printf("ENQUEUE\n");

    if (Check_Full(pCQ) == 0){
        //printf("VALUE TO ADD: %i\n", value);
        pCQ->array[pCQ->end] = value;
        if (pCQ->end == pCQ->MAX){
            pCQ->end = pCQ->MIN;
        }else{pCQ->end ++;}
        //printf("END OF QUEUE: %i\n", pCQ->end);
    }
}

int DeQueue(struct Circular_Queue *pCQ)
{
    if (Check_Empty(pCQ) == 0){
            int value = pCQ->array[pCQ->front];

            if (pCQ->front == pCQ->MAX){
                pCQ->front = pCQ->MIN;
            }else{pCQ->front ++;}

            return value;
    }

}
