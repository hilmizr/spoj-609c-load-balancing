#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    scanf("%d", &n);
 
    int m[n], mtot = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
        mtot += m[i];
    }
    sort(m, m + n);
 
    double mavg = (double) mtot / n;
    int min = floor(mavg);
    int max = ceil(mavg);
 
    int sec_min = 0;
    int sec_max = 0;
    for (int i = 0; i < n; i++)
    {
        if(m[i] < min)
        {
            sec_min += (min-m[i]);
        }
        else if (m[i] > max)
        {
            sec_max += (m[i]-max);
        }
    }
 
    if(sec_min > sec_max) printf("%d\n", sec_min);
    else printf("%d\n", sec_max);
      
}

/* References
 * https://www.youtube.com/watch?v=9iQ6IfsDo2I
 * http://web.stanford.edu/class/msande319/Approximation%20Algorithm/lec1.pdf
 * https://codeantenna.com/a/yXsSJ8WM9W
 * https://codeantenna.com/a/HqaFoPuAcZ 
 * https://blog.51cto.com/u_15303184/3101989 */