#include<bits/stdc++.h>
using namespace std;


class MyMap{
private:
    // private variables/functions
    vector<pair<int,int>> myMap;

public:

    // Constructor
    MyMap(){

    }


    // insert function
    void insert(int key, int value){
        for(auto &p: myMap){
            if(p.first == key){
                p.second = value;
                return;
            }
        }
        myMap.push_back({key, value});
    }


    // erase function
    void erase(int key){

      for(auto i =myMap.begin();i!=myMap.end();i++){
        if(i->first==key){
          myMap.erase(i);
          return;
        }
      }
    }


    // find function
    bool find(int key){
      for(auto &search:myMap){
        if(search.first==key){
          return true;
        }
        }
        return false;         
      }
      


    // get function
    int get(int key){

      for(auto &get:myMap){
        if(get.first==key){
          return get.second;
        }
      }
      return -1;
    }


    // size function
    int size(){
      return myMap.size();

    }


    // empty function
    bool empty(){
      return myMap.empty();
    }


    // clear function
    void clear(){
        myMap.clear();
        
    }


    // display function
    void display(){
      vector<pair<int,int>> temp=myMap;
      sort(temp.begin(),temp.end());
      for(auto &display: temp){
        cout<<display.first<<" "<<display.second<<endl;
      }
    }
};


int main(){
    // Add some examples for every function mentioned in MyMap class here
    MyMap myMap;
    myMap.insert(1,100);
    myMap.insert(2,200);
    myMap.insert(3,300);
    myMap.display();
    cout<<"Size: "<<myMap.size()<<endl;
    cout<<"Find 2: "<<myMap.find(2)<<endl;
    cout<<"Get 3: "<<myMap.get(3)<<endl;
    myMap.erase(2);
    cout<<"Find 2 after erasing: "<<myMap.find(2)<<endl;
    myMap.clear();
    cout<<"Size after clearing: "<<myMap.size()<<endl;
    
    return 0;
}