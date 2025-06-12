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
    
    for(int i = 0; i < t; i++)
    {
        int n;
        char s;
        cin >> n >> s;

        for(int j = 0; j<n; j++)
        {
            cout << s << " ";
        }
        cout << endl;

    }

    return 0;
}