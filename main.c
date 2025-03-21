#include <stdio.h>
#include "queue.h"

int main()
{
    Queue Q;
    CreateQueue(&Q);

    infotype num;
    address newNode;
    int choice;
    int current_number = 0;

    do
    {
        printf("\n--- Antrian Bank ---\n");
        printf("1. Ambil Antrian\n");
        printf("2. Proses Antrian\n");
        printf("3. Cetak Antrian\n");
        printf("4. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            current_number++;
            allocate(&newNode, current_number);
            enqueue(&Q, newNode);
            printf("Anda mendapat nomor antrian: %d\n", current_number);
            printf("Antrian sekarang:\n");
            printQueue(Q);
            break;

        case 2:
            if (!isEmptyQueue(Q))
            {
                dequeue(&Q, &num);
                printf("Memproses nomor antrian: %d\n", num);
                printf("Antrian sekarang:\n");
                printQueue(Q);
            }
            else
            {
                printf("Antrian kosong!\n");
            }
            break;

        case 3:
            if (!isEmptyQueue(Q))
            {
                printf("Antrian sekarang:\n");
                printQueue(Q);
            }
            else
            {
                printf("Antrian kosong!\n");
            }
            break;

        case 4:
            printf("Program selesai\n");
            break;

        default:
            printf("Pilihan tidak valid!\n");
        }
    } while (choice != 4);

    deleteQueue(&Q);
    return 0;
}