#include <iostream>
using namespace std;

void qs(int a[], int l, int r) {
    int p = a[(l + r) / 2];
    int i = l, j = r;

    while (i <= j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if (l < j) qs(a, l, j);
    if (i < r) qs(a, i, r);
}

int solve(int a[], int n) {
    qs(a, 0, n - 1);// sap lai mang theo thu tu tang dan 
    //ly do: de de phat hien khoang trong giua cac so 	

    if (a[0] > 1) return 1; 
    //so nho nhat trong mang da la so 1 chua co thi tra ve 1 
    // vi du 3 4 5 => tra ve 1

    for (int i = 1; i < n; i++) {
        if (a[i] <= 0) continue; 
        // neu gap cac so 0 hoac am bo qua 
        if (a[i] - a[i - 1] > 1 && a[i - 1] > 0)
            return a[i - 1] + 1;
    }
    // so sanh 2 so lien tiep nhau kc lon hon 1 ==> bi thieu 
    /*
    a = [-1, 0, 1, 2, 4, 5]
    (a[3] = 2, a[4] = 4)
    a[4] - a[3] = 2 thieuso 3 tra ve a[3] +1 = 3 


    */

    return a[n - 1] <= 0 ? 1 : a[n - 1] + 1;
/*
Khi không có khoang trang 
vid a= [1,2 ,3 ]-> tat cac cac so nho da du -> thieu so tiep theo 3 + 1 = 4  
neu mang toan la so am thi tra ve 1  
*/
    
}

int main() {
    int n;
    int a[100000];  // fix kích thu?c

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << solve(a, n);
    return 0;
}

