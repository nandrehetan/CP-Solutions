class MedianFinder {
public:
    // vector<int>v;
    priority_queue<int,vector<int>,greater<int>>s;
    priority_queue<int>l;
    MedianFinder() {}
    
    void addNum(int num) {
        s.push(num);

        int sz1=s.size();
        int sz2=l.size();

        if(abs(sz1-sz2)>1){
            l.push(s.top());
            s.pop();
        }
        if (!l.empty() && s.top() < l.top()) {
            int temp = s.top();
            s.pop();
            s.push(l.top());
            l.pop();
            l.push(temp);
        }
    }
    
    double findMedian() {
        // sort(v.begin(),v.end());
        int sz1=s.size();
        int sz2=l.size();

        if(s.size()>l.size()){
            return s.top();
        }

        int s1 = s.top();
        int s2 = l.top();
        double m = (s1+s2)/2.0;
        return m;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */