using namespace std;

//template so that it can be an "Airplane" queue (T=airplane, in our case)
template <class T>
class Queue {

   public:
    Queue();
    bool landing; //if is landing-type queue
    int crashed; //number of planes that have crashed
    void enqueue(T obj);
    T dequeue();
    T crash();
    int count();
}