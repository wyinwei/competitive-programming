#include<bits/stdc++.h>

using namespace std;

char compare(int, int);

int main() {
    FILE *inf = fopen("input.txt", "r");
    FILE *ouf = fopen("output.txt", "w");
    int TC, a, b;
    fscanf(inf, "%d", &TC);
    while(TC--) {
        fscanf(inf, "%d %d", &a, &b);
        char res = compare(a, b);
        fprintf(ouf, "%c\n", res);
    }
    return 0;
}

char compare(int a, int b) {
    char res;
    if(a == b) {
        res = '=';
    } else if(a > b) {
        res = '>';
    } else {
        res = '<';
    }
    return res;
}
