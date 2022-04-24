class UndergroundSystem {
    map<int,pair<string,int>> m_in;
    map<pair<string,string>,pair<int,int>> avg;
public:
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        if(m_in.find(id)==m_in.end())
            m_in[id]={stationName,t};
        
        else{
            if(m_in[id].second!=t)
                m_in[id]={stationName,t};
        }
    }
    
    void checkOut(int id, string stationName, int t) {
        if(m_in.find(id)!=m_in.end()){
            pair<string,string> temp={m_in[id].first,stationName};
            avg[temp].first++;
            avg[temp].second+=(t-m_in[id].second);
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        pair<string,string> temp={startStation,endStation};
        int count=avg[temp].first;
        int sum=avg[temp].second;
        return (double)sum/count;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */