
class TimeMap {
public:
    map<string, vector<pair<int, string>>> mp;

    TimeMap() {}

    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {
        if (!mp.count(key)) {
            return "";
        }

        vector<pair<int, string>>& values = mp[key];
        auto it = upper_bound(values.begin(), values.end(), make_pair(timestamp, string("")),
                              [](const pair<int, string>& a, const pair<int, string>& b) {
                                  return a.first < b.first;
                              });

        if (it == values.begin()) {
            return "";
        } else {
            --it;
            return it->second;
        }
    }
};
