#include <iostream>
using namespace std;

class Numpy{

    private:
        int arr[10] = {0,0,0,0,0,0,0,0,0,0};
        int s;
    public:
        Numpy(){}
        Numpy(int size){
            int i;
            for(int i=0;i<size;i++){
                cin >> arr[i];
            }
            s = size;
        }

        friend Numpy operator+(const Numpy &a);
        Numpy operator + (const Numpy &a)const{
            Numpy temp;
            temp.s = s;
            for(int i=0;i<s;i++){
                temp.arr[i] = arr[i] + a.arr[i];
            }
            return temp;
        }
        Numpy operator + (const int num)const{
            Numpy temp;
            temp.s = s;
            for(int i=0;i<s;i++){
                temp.arr[i] = arr[i] + num;
            }
            return temp;
        }

        void show(){
            cout << "[";
            for(int i=0;i<s-1;i++){
                cout << arr[i] << ", ";
            }
            cout << arr[s-1] << "]";
            cout << endl;
        }
};

int main(){

    int size, num;
    cin >> size;
    Numpy n1(size),n2(size);
    cin >> num;

    Numpy n3 = n1 + n2;
    Numpy n4 = n1 + num;

    cout << "n1 + n2 = ";
    n3.show();
    cout << "n1 + " << num << " = ";
    n4.show();


    return 0;
}



