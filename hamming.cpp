#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int hammingDistance(const string &str1, const string &str2)
{
    int distance = 0;
    for (size_t i = 0; i < str1.length(); ++i)
    {
        if (str1[i] != str2[i])
        {
            ++distance;
        }
    }
    return distance;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string str;
        cin >> str;

        int A, B;
        cin >> A >> B;

        bool valid = true;
        for (char c : str)
        {
            if (c != '0' && c != '1')
            {
                valid = false;
                break;
            }
        }

        if (!valid)
        {
            cout << "INVALID\n";
            continue;
        }

        int cost = 0;
        for (size_t i = 0; i < str.length() - 1; ++i)
        {
            if (str[i] != str[i + 1])
            {
                cost += (str[i] == '0') ? A : B;
            }
        }

        string minCostStr = str;
        int minCost = cost;
        int minHammingDistance = 0;

        // Try swapping adjacent 0s and 1s to minimize cost
        for (size_t i = 0; i < str.length() - 1; ++i)
        {
            if (str[i] != str[i + 1])
            {
                swap(str[i], str[i + 1]);
                int newCost = 0;
                for (size_t j = 0; j < str.length() - 1; ++j)
                {
                    if (str[j] != str[j + 1])
                    {
                        newCost += (str[j] == '0') ? A : B;
                    }
                }
                if (newCost < minCost)
                {
                    minCost = newCost;
                    minCostStr = str;
                    minHammingDistance = hammingDistance(str, minCostStr);
                }
                else if (newCost == minCost)
                {
                    int newHammingDistance = hammingDistance(str, minCostStr);
                    if (newHammingDistance < minHammingDistance)
                    {
                        minCostStr = str;
                        minHammingDistance = newHammingDistance;
                    }
                }
                swap(str[i], str[i + 1]);
            }
        }

        cout << minHammingDistance << endl;
    }

    return 0;
}