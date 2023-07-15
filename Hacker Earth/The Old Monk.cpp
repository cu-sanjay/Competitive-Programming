#include <iostream>
using namespace std;

int main() {
    long long int n1;
    cin >> n1;
    
    for (long long int i = 0; i < n1; ++i) {
        long long int n2;
        cin >> n2;
        
        long long int arr1[n2], arr2[n2], res1, res2 = 0;
        
        for (long long int y = 0; y < n2; ++y)
            cin >> arr1[y];
        
        for (long long int y = 0; y < n2; ++y)
            cin >> arr2[y];
        
        for (long long int y = 0; y < n2; ++y) {
            long long int num = arr2[y];
            long long int start = 0, end = y, mid;
            
            while (start <= end) {
                mid = (start + end) / 2;
                
                if (arr1[mid] > num)
                    start = mid + 1;
                else if (arr1[mid] < num)
                    end = mid - 1;
                else {
                    if (mid == 0 || arr1[mid] != arr1[mid - 1])
                        break;
                    else
                        end = mid - 1;
                }
            }
            
            if (arr1[mid] > num) {
                mid = mid + 1;
                
                if (mid > y)
                    res1 = 0;
                else
                    res1 = (y - mid);
            }
            else
                res1 = (y - mid);
            
            if (res1 > res2)
                res2 = res1;
        }
        
        cout << res2 << endl;
    }
    
    return 0;
}
