#include <iostream>
#include<climits>
using namespace std;

class heap
{
    int *heap_array;
    int max_size;
    int current_size;
public:
    heap(int size){
        heap_array = new int[size];
        max_size=size;
        current_size=0;
    }
    ~heap(){
        delete heap_array;
    }
    int top(){
        if(current_size!=0){
            return heap_array[0];
        }
        else return INT_MIN;
        
    }
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
    void insertion(int number){
        if(current_size<max_size){
            heap_array[current_size]=number;
            int child=current_size;
            int parent=(child-1)/2;
            current_size++;
            while(heap_array[child] < heap_array[parent] && parent>=0){
                swap(&heap_array[child],&heap_array[parent]);
                child=parent;
                parent=(child-1)/2;
            }
        }
        else {cout<<"overflow";}
    }
    void deletion(){
        int present=current_size-1;
        cout<<heap_array[present]<<endl;
        swap(&heap_array[0], &heap_array[present]);
        present--;
        int a = 0;
        while((a*2 + 1) < (current_size-1)){
            int left  = 2*a+1;
            int right = 2*a+2;
            int smallest = a;
            if(left < present && heap_array[left] < heap_array[a]){
                smallest = left;
            }
            if(right < present && heap_array[right] < heap_array[a]){
                smallest = right;
            }
            swap(&heap_array[smallest], &heap_array[a]);
            a = smallest;
        }
        current_size--;
    }
};

int main()
{
    
    heap h1(100);
    h1.insertion(5);
    cout<<h1.top()<<endl;
    h1.insertion(2);
    cout<<h1.top()<<endl;
    h1.insertion(6);
    cout<<h1.top()<<endl;
    h1.insertion(1);
    cout<<h1.top()<<endl;
    h1.deletion();
    cout<<h1.top()<<endl;
    
    return 0;
}

