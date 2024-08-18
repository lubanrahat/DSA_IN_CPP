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
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node LinkedList {
    Node* head;
    Node* tail;
public:
    LinkedList() {
        this->head = NULL;
        this->tail = NULL;
    }
    void insert(int data) {
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void insertPosition(int position,int data) {
        Node* newNode = new Node(data);
        Node* temp = head;
        rep(i,position) {
            temp = temp->next;
        }
        
    }
};

int binary_search(int *arr,int n,int target) {
    int left = 0,right = n-1;
    while(left <= right) {
        int mid = left + (right-left) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) left = mid+1;
        else right = mid-1;
    }
    return -1;
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n];
    rep(i,n) cin>>arr[i];
    int val;
    cin>>val;

    for(int i = 0; i < n; i++) {
        if(arr[i] == val) {
            for(int j = i; j < n; j++) {
                arr[i] = arr[i+1];
            }
            
        }
        n--;
    }

    rep(i,n) cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}