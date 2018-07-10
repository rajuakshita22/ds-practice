#include<iostream>

using namespace std;

struct student{
    char name;
    int marks;
};
void swap(student arr[],int i,int j);
class tfive{
    int maxsize;
    student *arr;
    int current_size;
public:
    tfive()
    {
        maxsize=5;
        arr=new student[maxsize];
        current_size=0;
    }
    ~tfive(){
        delete arr;
    }
    student top(){
        if(current_size!=0){
            return arr[0];
        }
        //else return NULL;
    }
    void insertion(student s)
    {
        if(current_size<maxsize)
        {
            arr[current_size]=s;
            int child=current_size;
            int parent=(child-1)/2;
            cout<<parent<<child<<endl;
            current_size++;
            this->display();
            while(parent>=0 && arr[parent].marks>arr[child].marks)
            {
                //swap(&arr[child],&arr[parent]);
                swap(arr, child, parent);
                cout<<"--";
                this->display();
                
                child=parent;
                parent=(child-1)/2;
            }
        }
        else if(current_size==maxsize && s.marks>arr[0].marks)
        {
            arr[0]=s;
            int a=0;
            while((a*2 + 1) < (current_size) )
            {
                int left  = 2*a+1;
                int right = 2*a+2;
                int smallest = a;
                if(left<current_size && arr[left].marks < arr[a].marks)
                {
                    smallest = left;
                }
                if(left<current_size &&arr[right].marks < arr[smallest].marks){

                    smallest = right;
                }
                cout<<smallest<<",";
                if(smallest==a){break;}
                swap(arr, smallest, a);
                a = smallest;
            }
        }
    }
    void display(){
        for(int j=0;j<5;j++){
            cout<<arr[j].name;
        }
        cout<<endl;
    }
}top_five;
int main(){
    int number,mks;
    char nm;
    cin>>number;
    for(int i=0;i<number;i++){
        student m;
        cin>>nm;
        m.name=nm;
        cin>>mks;
        m.marks=mks;
        top_five.insertion(m);
        top_five.display();
    }
   top_five.display();
    return 0;   
}
void swap(student arr[],int i,int j)
{
    student temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
