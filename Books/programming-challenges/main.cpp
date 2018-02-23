#include<bits/stdc++.h>

using namespace std;

int fn(int, int);
int fn2(int);
int fn3(int, int);

int main() {
    FILE *inf = fopen("input.txt", "r");
    FILE *ouf = fopen("output.txt", "w");
    int a, b;
    while(fscanf(inf, "%d %d", &a, &b) != EOF) {
        int largest = fn(a, b);
        //cout << a << " " << b << " " << largest << endl;
        fprintf(ouf, "%d %d %d\n", a, b, largest);
    }
    return 0;
}

int fn(int a, int b) {
    int largest = 0;
    if(a > b) {
        int temp = b;
        b = a;
        a = temp;
    }
    while(a <= b) {
        int res = fn2(a);
        if(res > largest) {
            largest = res;
        }
        a++;
    }
    return largest;
}

int fn2(int num) {
    return fn3(num, 0);
}

int fn3(int num, int count) {
    if(num == 1) {
        count++;
        return count;
    } else {
        if(num % 2 == 0) {
            num = num / 2;
            count++;
            return fn3(num, count);
        } else {
            num = (num * 3) + 1;
            count++;
            return fn3(num, count);
        }
    }
}


