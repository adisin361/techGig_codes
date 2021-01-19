#include <vector>
#include <unordered_map>
using namespace std;

vector<int> largestRange(vector<int> array)
{
    vector<int> bestRange = {};
    int currLength = 0;
    int longestLength = 0;
    unordered_map<int, bool> visited = {};
    for (int nums : array)
        visited[nums] = false;
    for (int nums : array)
    {
        if (visited[nums] == true)
            continue;
        visited[nums] = true;
        currLength = 1;
        int r = nums + 1;
        int l = nums - 1;
        while (visited.find(l) != visited.end())
        {
            visited[l] = true;
            currLength++;
            l--;
        }
        while (visited.find(r) != visited.end())
        {
            visited[r] = true;
            currLength++;
            r++;
        }
        if (currLength > longestLength)
        {
            longestLength = currLength;
            bestRange = {l + 1, r - 1};
        }
    }
    return bestRange;
}