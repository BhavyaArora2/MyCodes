#include <stdio.h> 
#include <stdlib.h> 
#define MAX_TREE_HT 100 
 
struct MinHeapNode { 
 
    char symbol; 
    float freq; 
    struct MinHeapNode *left, *right,*mid; 
}; 
  

struct MinHeap { 
    int size; 
    int capacity; 
    struct MinHeapNode** array; 
}; 
  
 
struct MinHeapNode* newNode(char symbol, float freq) 
{ 
    struct MinHeapNode* temp = (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode)); 
  
    temp->left = temp->right =temp->mid= NULL; 
    temp->symbol = symbol; 
    temp->freq = freq; 
  
    return temp; 
} 
  

struct MinHeap* createMinHeap(int capacity) 
  
{ 
  
    struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap)); 
  
    // current size is 0 
    minHeap->size = 0; 
    minHeap->capacity = capacity; 
    minHeap->array = (struct MinHeapNode**)malloc(minHeap->capacity * sizeof(struct MinHeapNode*)); 
    return minHeap; 
} 
  
void swapMinHeapNode(struct MinHeapNode** a,struct MinHeapNode** b) 
{ 
  
    struct MinHeapNode* t = *a; 
    *a = *b; 
    *b = t; 
} 


void minHeapify(struct MinHeap* minHeap, int idx) 
  
{ 
  
    int smallest = idx; 
    int left = 3 * idx ; 
    int mid =3 * idx;
    int right = 3 * idx + 2; 
    
    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq) 
        smallest = left; 
    if (mid<minHeap->size && minHeap->array[mid]->freq<minHeap->array[smallest]->freq)
        smallest=mid;
    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq) 
        smallest = right; 
  
    if (smallest != idx) { 
        swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]); 
        minHeapify(minHeap, smallest); 
    } 
} 

int isSizeOne(struct MinHeap* minHeap) 
{ 
  
    return (minHeap->size == 1); 
} 
  
struct MinHeapNode* extractMin(struct MinHeap* minHeap) 
{ 
  
    struct MinHeapNode* temp = minHeap->array[0]; 
    minHeap->array[0] 
        = minHeap->array[minHeap->size - 1]; 
  
    --minHeap->size; 
    minHeapify(minHeap, 0); 
  
    return temp; 
}

void insertMinHeap(struct MinHeap* minHeap,struct MinHeapNode* minHeapNode) 
  
{ 
  
    ++minHeap->size; 
    int i = minHeap->size - 1; 
  
    while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq) { 
  
        minHeap->array[i] = minHeap->array[(i - 1) / 2]; 
        i = (i - 1) / 2; 
    } 
    minHeap->array[i] = minHeapNode; 
}

void buildMinHeap(struct MinHeap* minHeap) 
{ 
  
    int n = minHeap->size - 1; 
    int i; 
  
    for (i = (n - 1) / 2; i >= 0; --i) 
        minHeapify(minHeap, i); 
} 


void printArr(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; ++i) 
        printf("%d", arr[i]); 
    printf("\n"); 
} 

int isLeaf(struct MinHeapNode* root) 
  
{ 
    return !(root->left) && !(root->right); 
}

struct MinHeap* createAndBuildMinHeap(char symbol[], float freq[], int size) 
{ 
  
    struct MinHeap* minHeap = createMinHeap(size); 
  
    for (int i = 0; i < size; ++i) 
        minHeap->array[i] = newNode(symbol[i], freq[i]); 
  
    minHeap->size = size; 
    buildMinHeap(minHeap); 
  
    return minHeap; 
} 

struct MinHeapNode* buildHuffmanTree(char symbol[], float freq[], int size) 
  
{ 
    struct MinHeapNode *left, *right, *top;
    struct MinHeap* minHeap = createAndBuildMinHeap(symbol, freq, size); 
    while (!isSizeOne(minHeap)) { 
        left = extractMin(minHeap); 
        right = extractMin(minHeap); 
        top = newNode('$', left->freq + right->freq); 
        top->left = left; 
        top->right = right; 
        insertMinHeap(minHeap, top); 
    } 
    return extractMin(minHeap);
}
void printCodes(struct MinHeapNode* root, int arr[], int top) 
  
{ 
  
    // Assigning 0 to left edge and recur 
    if (root->left) { 
  
        arr[top] = 0; 
        printCodes(root->left, arr, top + 1); 
    } 
    // Assign 1 to right edge and recur 
    if (root->right) { 
  
        arr[top] = 1; 
        printCodes(root->right, arr, top + 1); 
    } 
      if (isLeaf(root)) { 
  
        printf("%c: ", root->symbol); 
        printArr(arr, top); 
    }
}
void HuffmanCodes(char symbol[], float freq[], int size) 
  
{ 
 
    struct MinHeapNode* root = buildHuffmanTree(symbol, freq, size); 

    int arr[MAX_TREE_HT], top = 0; //range of heap tree
  
    printCodes(root, arr, top); 
} 
int main() 
{ 
  
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' }; 
    float freq[] = { 1.0,1.5,2.2,3.4,2.4,1.2}; 
  
    int size = sizeof(arr) / sizeof(arr[0]); 
  
    HuffmanCodes(arr, freq, size); 
  
    return 0; 
} 
