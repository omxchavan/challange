

vector<pair<int, int> > findSubArrays(int arr[], int n)
{

  
    vector<pair<int, int> > output;
    for (int i = 0; i < n; i++) {
        int prefix = 0;
        for (int j = i; j < n; j++) {
            prefix += arr[j];
            if (prefix == 0)
                output.push_back({ i, j });
        }
    }

    return output;
}
