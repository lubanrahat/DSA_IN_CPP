#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <array>
#include <set>
#include <map>
#include <utility>
using namespace std;
typedef long long i64;
typedef unsigned long ul;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0;i < n;i++)
#define tr(it,a) for (auto it = a.begin(); it != a.end(); it++)

class Node {
public:
    Node* prev;
    int data;
    Node* next;
    Node(int data) {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
    Node* head;
    Node* tail;
public:
    void insertTail(int data) {
        Node* newNode = new Node(data);
        if(head = NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail->next;
            tail = newNode; 
        }
    }
    void insertPosition(int position,int data) {
        Node* newNode = new Node(data);
    }
};

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    
    return 0;
}