class MedianFinder {
public:
    MedianFinder() {
        
    }
    vector<int> store;
    
    void addNum(int num) {
        store.push_back(num);
    }
    
    double findMedian() {
        sort(store.begin(), store.end()); 
        int size = store.size();
        if (size % 2 != 0) {
            return store[size / 2];
        } else {
            return (store[size / 2 - 1] + store[size / 2]) / 2.0; 
        }
    }
};


/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */