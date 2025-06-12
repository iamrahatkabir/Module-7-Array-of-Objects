#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int even = 0, odd = 0;

        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if(a[i]%2 == 0)
                {
                    even++;
                }
                else{
                    odd++;
                }
            }
            int operaction = n/2;

            if(even > odd)
            {
                cout << even-operaction << endl;
            }
            else{
                cout << odd-operaction << endl;
            }

            // cout << even << " " << odd << " " << operaction << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}