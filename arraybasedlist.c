#include <stdio.h>
#include <string.h>

#define MAX 10
#define SIZE 50

int main()
{
    char books[MAX][SIZE] = {
        "AI Basics",
        "Data Science",
        "Python 101",
        "Algorithms",
        "Machine Learning"
    };

    int n = 5, i, pos;

    // Insert "Cyber Security" at position 3
    pos = 3;

    for(i = n; i >= pos; i--)
    {
        strcpy(books[i], books[i - 1]);
    }

    strcpy(books[pos - 1], "Cyber Security");
    n++;

    // Delete "Python 101"
    for(i = 0; i < n; i++)
    {
        if(strcmp(books[i], "Python 101") == 0)
        {
            break;
        }
    }

    if(i < n)
    {
        for(int j = i; j < n - 1; j++)
        {
            strcpy(books[j], books[j + 1]);
        }
        n--;
    }

    // Display final list
    printf("Final List of Books:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, books[i]);
    }

    return 0;
}#include <stdio.h>
#include <string.h>

#define MAX 10
#define SIZE 50

int main()
{
    char books[MAX][SIZE] = {
        "AI Basics",
        "Data Science",
        "Python 101",
        "Algorithms",
        "Machine Learning"
    };

    int n = 5, i, pos;

    // Insert "Cyber Security" at position 3
    pos = 3;

    for(i = n; i >= pos; i--)
    {
        strcpy(books[i], books[i - 1]);
    }

    strcpy(books[pos - 1], "Cyber Security");
    n++;

    // Delete "Python 101"
    for(i = 0; i < n; i++)
    {
        if(strcmp(books[i], "Python 101") == 0)
        {
            break;
        }
    }

    if(i < n)
    {
        for(int j = i; j < n - 1; j++)
        {
            strcpy(books[j], books[j + 1]);
        }
        n--;
    }

    // Display final list
    printf("Final List of Books:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, books[i]);
    }

    return 0;
}
