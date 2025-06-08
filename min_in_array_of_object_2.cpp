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


int main() {
    int n;
    cin >> n;
    
    Student a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    Student minimum;
    minimum.marks = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if(a[i].marks < minimum.marks)
        {
            minimum = a[i]; //Assigning a[i] object to minimum named object if a[i].marks if less than minimum.marks;
        }
    }

    cout << minimum.name << " " << minimum.roll << " " << minimum.marks << endl;

    return 0;
}