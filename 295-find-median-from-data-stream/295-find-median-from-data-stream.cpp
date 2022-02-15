class MedianFinder {
public:
    priority_queue<int, vector<int>, greater<int>>minHeap;
    priority_queue<int>maxHeap;
    MedianFinder() {}
    
    void addNum(int num) {
        if(maxHeap.empty() or maxHeap.top()>num){
            maxHeap.push(num);
        }
        else{
            minHeap.push(num);
        }
        // pehle apan maxheap me daalte h then min heap me then according to their size
        if(maxHeap.size()>1+minHeap.size()){
        while(maxHeap.size()>1+minHeap.size()){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
            }
        
        }
        else if(minHeap.size()>1+maxHeap.size()){
            while(minHeap.size()>1+maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
            }
        }
        
    }
    
    double findMedian() {
        if(maxHeap.size()==minHeap.size()){

            if(maxHeap.empty())return 0;
            else{
                return (double)1.0*(maxHeap.top()+ minHeap.top())/2;    
                
            }
        }
        
        return maxHeap.size()>minHeap.size()?maxHeap.top():minHeap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */