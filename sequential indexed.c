#include <stdio.h>
#include <string.h>

struct fileTable {
    char name[20];
    int nob;
    int blocks[30];
} ft[30];

int main() {
    int i, j, n;
    char s[20];

    printf("Enter number of files: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter file name %d: ", i + 1);
        scanf("%s", ft[i].name);

        printf("Enter number of blocks in file %d: ", i + 1);
        scanf("%d", &ft[i].nob);

        printf("Enter the block numbers: ");
        for (j = 0; j < ft[i].nob; j++) {
            scanf("%d", &ft[i].blocks[j]);
        }
    }

    printf("\nEnter the file name to be searched: ");
    scanf("%s", s);

    // Search for the file
    for (i = 0; i < n; i++) {
        if (strcmp(s, ft[i].name) == 0) {
            break;
        }
    }

    if (i == n) {
        printf("\nFile Not Found\n");
    } else {
        printf("\n%-15s %-12s %-15s\n", "FILE NAME", "NO OF BLOCKS", "BLOCKS OCCUPIED");
        printf("%-15s %-12d", ft[i].name, ft[i].nob);
        for (j = 0; j < ft[i].nob; j++) {
            printf("%d ", ft[i].blocks[j]);
        }
        printf("\n");
    }

    return 0;
}
