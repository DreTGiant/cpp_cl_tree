#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> Range(int start, int max, int step);

int main()
{
    //     #
    //    ###
    //   #####
    //  #######
    //     #

    //1. Decrement spaces by one each time through loop.
    //2. Increment the hashes by two each time.
    //3. Save spaces to the stump by calculating tree height -1
    //4. Decrement from tree height until equals zero
    //5. Print spaces and then hashes for each row
    //6. Print stump spaces and then 1 Hash

    int treeHeight = 0, spaces = 0,
        hashes = 1, stumpSpaces = 0;

    cout << "How tall would you like your tree? ";
    cin >> treeHeight;

    spaces = treeHeight - 1;
    stumpSpaces = treeHeight - 1;

    while (treeHeight != 0)
    {
        for (auto x : Range(1, spaces, 1))
        {
            cout << " ";
        }

        for (auto x : Range(1, hashes, 1))
        {
            cout << "#";
        }

        cout << "\n";
        spaces -= 1;
        treeHeight -= 1;
        hashes += 2;
    }

    for (auto x : Range(1, stumpSpaces, 1))
    {
        cout << " ";
    }

    cout << "#\n";

    return 0;
}

// Functions

vector<int> Range(int start, int max, int step)
{
    vector<int> range;
    int i = start;

    while (i <= max)
    {
        range.push_back(i);
        i += step;
    }
    return range;
}