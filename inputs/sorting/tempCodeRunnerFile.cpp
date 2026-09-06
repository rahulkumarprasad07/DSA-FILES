    vector<int> test = {3,2,4,43,21,23};

    sort(test.begin(),test.end());

    int n = test.size();
    int target = 21;

    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(target == test[mid]){
            cout << "target at " << mid << endl;
            return 0;
        }
        else if(target < test[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return -1;
   