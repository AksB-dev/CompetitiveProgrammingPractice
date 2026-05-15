#include <stdio.h>
int main()
{
    int n, a[100000], t=0, team=0;
    int b[100][15];
    scanf("%d", &n);
    for (int i = 0; i<n;i++)
    scanf("%d", &a[i]);
    for (int i = 0;i<n;i=i+3)
    {   
        for (int t = 0; t<3;t++)
        {
            if (i+t<n)
            {
                b[team][t] = a[i+t];
                printf("%d\t", b[team][t]);
            }
            else
            break;
        }
        team++;
        printf("\n");
    }

}
/*#include <stdio.h>

int main()
{
    int n;
    // Arrays: 100,000 is large, make sure you have enough stack space
    int a[100000];
    // b is now structured to hold 'n/3' teams
    // A better size for b would be b[33334][3] or use dynamic allocation
    int b[33334][3]; 
    
    // 1. Read 'n'
    scanf("%d", &n);
    
    // 2. Read array 'a' (Removed the problematic space from scanf)
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    int team_count = 0;
    
    // Loop through the input array 'a' in steps of 3
    for (int i = 0; i < n; i += 3)
    {
        // Inner loop: t goes from 0 to 2 (3 elements)
        for (int t = 0; t < 3; t++)
        {
            // IMPORTANT: Check if we have run out of elements in 'a'
            if (i + t < n) {
                // Store element in b[team_count][t]
                b[team_count][t] = a[i + t];
                printf("%d\t", b[team_count][t]);
            } else {
                // Handle incomplete team (optional)
                // printf("-\t"); 
            }
        }
        
        team_count++; // Move to the next row in 'b'
        printf("\n");
        
        // Safety check to prevent going out of bounds for 'b'
        if (team_count >= 33334) break; 
    }

    // printf("Total teams: %d\n", team_count);
    return 0;
}*/