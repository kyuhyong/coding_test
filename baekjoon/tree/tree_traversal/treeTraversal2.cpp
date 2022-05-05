#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;


struct node {
    char left;
    char right;
};

struct node arr[27];

void preOrder(char root) {
    if (root == '.')
        return;
    cout << root;
    preOrder(arr[root].left);
    preOrder(arr[root].right);
}

void inOrder(char root) {
    if (root == '.')
        return;
    inOrder(arr[root].left);
    cout << root;
    inOrder(arr[root].right);
}

void postOrder(char root) {
    if (root == '.')
        return;
    postOrder(arr[root].left);
    postOrder(arr[root].right);
    cout << root;
}
#define DEBUG
int main(int argc, const char* argv[]) {
    int n;
#ifdef DEBUG
    n = 7;
    char input[7][3] = {
        {'A','B','C'},
        {'B','D','.'},
        {'C','E','F'},
        {'E','.','.'},
        {'F','.','G'},
        {'D','.','.'},
        {'G','.','.'},
    };
#else
    cin >> n;
#endif
    char a, b, c;
    for (int i = 1; i <= n; i++) {
#ifndef DEBUG
        cin >> a >> b >> c;
#else
        a=input[i-1][0];
        b=input[i-1][1];
        c=input[i-1][2];
#endif
        arr[a].left = b;
        arr[a].right = c;
    }

    preOrder('A');
    cout << "\n";
    inOrder('A');
    cout << "\n";
    postOrder('A');
    cout << "\n";

    return 0;
}