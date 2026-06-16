class MedianFinder {
public:
priority_queue<int>max_heap;
priority_queue<int,vector<int>,greater<int>>min_heap;
int count=0;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        count++;
        if(max_heap.empty()||num<max_heap.top())
        max_heap.push(num);
        else
        min_heap.push(num);


        if(max_heap.size()>min_heap.size()+1)
        {
            int k=max_heap.top();
            min_heap.push(k);
            max_heap.pop();
            
        }
  if(min_heap.size()>max_heap.size())
  {
             int k=min_heap.top();
            max_heap.push(k);
            min_heap.pop();
            

        }
        
    }
    
    double findMedian() {
        if(count&1)
        return max_heap.top();
        else
        return (min_heap.top()+max_heap.top())/2.0;
        
    }
};
