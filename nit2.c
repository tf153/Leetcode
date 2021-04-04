#include <stdio.h>
#include <stdlib.h>
int arr_final[100];
void mrge(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0, z = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] > arr2[j])
        {
            arr_final[z++] = arr1[i++];
        }
        else
        {
            arr_final[z++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        arr_final[z++] = arr1[i++];
    }
    while (j < n2)
    {
        arr_final[z++] = arr2[j++];
    }
}
int search(int srch, int l, int r)
{
    int m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (arr_final[m] == srch)
        {
            return m;
        }
        if (arr_final[m] > srch)
        {
            return search(srch, l, m - 1);
        }
        else
        {
            return search(srch, m + 1, r);
        }
    }
    return -1;
}
int main()
{
    int n1, n2, i, srch, ans;
    int arr1[100], arr2[100];
    printf("enter length of two arrays:-\n");
    scanf("%d%d", &n1, &n2);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    mrge(arr1, arr2, n1, n2);
    printf("enter searching element:-\n");
    scanf("%d", &srch);
    ans = search(srch, 0, n1 + n2);
    if (ans == -1)
        printf("Not found");
    else
    {
        printf("Found at=%d location", ans + 1);
    }
    return 0;
}