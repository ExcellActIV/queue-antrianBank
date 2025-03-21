#include <stdio.h>
#include "queue.h"

int main()
{
    // Program simulasi antrian di bank
    Queue Q;
    CreateQueue(&Q);

    infotype jumlah_antrian, num;
    address newNode;

    printf("Masukkan jumlah orang yang ingin mengantri: ");
    scanf("%d", &jumlah_antrian);

    // Sebanyak jumlah_antrian orang mengantri
    for (int i = 1; i <= jumlah_antrian; i++)
    {
        allocate(&newNode, i);
        enqueue(&Q, newNode);
    }
    printQueue(Q);

    // Orang pertama keluar dari antrian
    dequeue(&Q, &num);
    printQueue(Q);

    // Orang kedua keluar dari antrian
    dequeue(&Q, &num);
    printQueue(Q);

    deleteQueue(&Q);

    return 0;
}