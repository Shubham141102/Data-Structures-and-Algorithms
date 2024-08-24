// question link => https://www.hackerrank.com/challenges/diagonal-difference/problem

int diagonalDifference(vector<vector<int>> arr)
{
    int sump = 0, sums = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sump = sump + arr[i][j];
            }
            if (i + j == n - 1)
            {
                sums = sums + arr[i][j];
            }
        }
    }

    cout << sump << " " << sums;

    return abs(sump - sums);
}

// -----------------------------------------------------------------------------
// question link -> https://www.hackerrank.com/challenges/plus-minus/problem
void plusMinus(vector<int> arr)
{
    double count_neg = 0, count_pos = 0, count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            count_neg++;
            // cout<<count_neg;
        }
        else if (arr[i] == 0)
        {
            count++;
            // cout<<count;
        }
        else
        {
            count_pos++;
            // cout<<count_pos;
        }
    }

    cout << setprecision(6) << fixed;
    double sum = count + count_neg + count_pos;
    cout << count_pos / sum << endl;
    cout << count_neg / sum << endl;
    cout << count / sum;
}

// --------------------------------------------------------------------------------
// question 3 -> https://www.hackerrank.com/challenges/staircase/problem
void staircase(int n)
{
    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = 1; cols <= n - rows; cols++)
        {
            cout << " ";
        }
        for (int cols = 1; cols <= rows; cols++)
        {
            cout << "#";
        }
        cout << endl;
    }
}
// ----------------------------------------------------------------------------
// question 4 =>https://www.hackerrank.com/challenges/mini-max-sum/submissions/code/396743432
void miniMaxSum(vector<int> arr)
{
    long minimum = arr[0], maximum = arr[0], sum = 0, sum_max = 0, sum_min = 0;
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    for (int i = 0; i <= arr.size() - 1; i++)
    {
        sum = sum + arr[i];
    }
    // cout<<minimum<<maximum;
    sum_max = sum - minimum;
    sum_min = sum - maximum;

    cout << sum_min << " " << sum_max;
}
