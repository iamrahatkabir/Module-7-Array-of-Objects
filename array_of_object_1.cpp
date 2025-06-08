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


class Student{
    public:
    string name;
    int roll;
    int marks;
};


int main()
{
    int n;
    cin >> n;

    Student a[n];

    for(int i = 0; i<n; i++)
    {
        cin.ignore(); //Ignoring the enter of n;

        //Takes input for Name, Roll, Marks;
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;

        // cin >> a[i].name >> a[i].roll >> a[i].marks; Normal Input;
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}