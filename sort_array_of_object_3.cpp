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

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r) // Custom Comparison Function;
{
    // Short in ascending order
    
    // if(l.marks <= r.marks) //If marks are same;

    // if(l.marks < r.marks)
    // {
    //     return true;
    // }
    // else{
    //     return false;
    // }
    // return l.marks < r.marks; // Shortcut way to Short in ascending order;

    //return l.marks > r.marks; //Short in descending order;

    
    //If all marks are equal sort according to roll  
    //sort in descending order;
    // if(l.marks > r.marks)
    // {
    //     return true;
    // }
    // else if(l.marks < r.marks)
    // {
    //     return false;
    // }
    // else{
        // if(l.roll < r.roll) //Small roll will come first;
        // {
        //     return true;
        // }
        // else{
        //     return false;
        // }

    //     return l.roll < r.roll; //Small roll will come first;
    // }


    //Optimized way to sort in descending marks order & if marks are equal sort with roll in ascending order(smallest roll will come first);
    if(l.marks == r.marks)
    {
        //This will return true or false
        return l.roll < r.roll; //Ascending order roll sorting when marks are equal;
    }
    else{
        return l.marks > r.marks; //Descending order sort;
    }

    //sort using turnery operator
    // return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;

}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp); //Call "cmp" function and assign value to parameter of cmp function;

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}