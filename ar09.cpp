#include <iostream>
#include <cstring>
using namespace std;

void swap(char *a, char *b);
void sorting(char arr[], int size, int order);

int main()
{
    char str[14];
    cin.getline(str, 14);

    int k = 0, i = 0;
    int size = (strlen(str) + 1) / 2;
    char *sub_str[size];
    char arr[size];

    // 儲存分割後的子字串
    char *sptr = strtok(str, ",");
    while (sptr != NULL)
    {
        sub_str[k++] = sptr;
        sptr = strtok(NULL, ",");
    }

    // 字串轉整數再轉字符
    for (i = 0; i < size; i++)
    {
        char temp = atoi(sub_str[i]) + '0';
        arr[i] = temp;
    }

    // 小 -> 大
    sorting(arr, size, 1);
    int min = atoi(arr);
    // 大 -> 小
    sorting(arr, size, 2);
    int max = atoi(arr);

    cout << max - min << endl;
}


void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void sorting(char arr[], int size, int order)
{
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if ((arr[j] > arr[j + 1] && order == 1) || (arr[j] < arr[j + 1] && order == 2))
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
