class DynamicArray {

private:
        vector<int> v;
        int capacity;
        int l = 0;
public:

    DynamicArray(int capacity) {
        this->capacity = capacity;
    }

    int get(int i) {
        return v[i];
    }

    void set(int i, int n) {
        v[i] = n;
    }

    void pushback(int n) {
        if(v.size() == capacity){
            capacity *= 2;
            v.push_back(n);
        }
        else{
            v.push_back(n);
        }
        
    }

    int popback() {
       int num = v.back();
        v.pop_back();
        return num;
    }

    void resize() {
        capacity *= 2;
    }

    int getSize() {
        return v.size();
    }

    int getCapacity() {
        return capacity;
    }
};
