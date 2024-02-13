
class DataStream {
public:
    std::deque<int> stream;
    int value;
    int k;
    int valueCount;
    
    DataStream(int value, int k) {
        this->value = value;
        this->k = k;
        valueCount = 0;
    }
    
    bool consec(int num) {
        stream.push_back(num);
        if (stream.size() > k) {
            if (stream.front() == value) {
                valueCount--;
            }
            stream.pop_front();
        }
        
        if (num == value) {
            valueCount++;
        }
        
        return valueCount == k;
    }
};
