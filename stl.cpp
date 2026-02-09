#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;

void explainpair(){

  // pair<int,int> student = {2,3};
  // cout << student.first << " " << student.second << endl;

    // pair<pair<int,int>,string> student_Details = {{1,+91},"Anshul Jain"};
    // cout << student_Details.first.first <<endl;
    // cout << student_Details.first.second << endl; 
    // cout << student_Details.second << endl;

    // pair<pair<pair<int,string>,int>,char> details = {{{1,"Ansh"},45313},'A'};
    // cout << details.first.first.first << endl;
    // cout << details.first.first.second << endl; 
    // cout << details.first.second << endl;
    // cout << details.second << endl;

    pair<pair<pair<pair<int,int>,string>,char>,string> students = {{{{1,2},"Anshul Jain"},'A'},"Loves You"};
    cout << students.first.first.first.first << endl;
    cout << students.first.first.first.second << endl;
    cout << students.first.first.second << endl;
    cout << students.first.second << endl; 
    cout << students.second << endl;
}

void explainvector(){

  vector<int> vec = {1,3,2};
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.pop_back();
  vec.push_back(4);

  vec.insert(vec.begin()+4,5);
  cout << *vec.begin() << endl;



  cout << "Size of the vector is: = " << vec.size() << endl;

  cout << vec.front() << endl;
  cout << vec.back() << endl;

  for(auto i : vec){
      cout << i << " ";
  }
      cout << endl;

  vec.erase(vec.begin()+3,vec.end()-1);
      for(auto it : vec){
          cout << it << " ";
      }
        cout << endl;

  vec.insert(vec.begin()+2, 10);
  for(auto i:vec){
      cout << i << " " ;
  }
  vector<int> vec1 = {2,5};

  swap(vec,vec1);
  for(auto ir : vec){
    cout << ir << " ";
  }
  for(int i=0;i<vec.size();i++){
    cout << vec[i] << " " ;
  }
  cout << endl;

    for(auto i : vec){
      cout  << i << " " << endl;
    }

    for(auto i:vec){
      cout << i << " ";
    }
    cout << endl;

      cout << endl;

      vector<int> dupVec(vec.begin()+2,vec.end());
      for(auto i : dupVec){
        cout << i << " ";
      }
      cout << endl;

  cout << endl;

}
  
void explainlist(){
    list<int> lst;
    lst.push_front(10);
    lst.push_back(20);
    lst.push_front(30);
    lst.push_back(40);
    lst.push_front(50);
    lst.pop_front();
    lst.pop_back();
    lst.push_back(40);
    
    list<int> lst1;
    lst1.push_front(10);
    lst1.push_front(20);
    lst1.push_front(30);
    lst1.push_front(40);
    lst1.push_front(50);

    swap(lst,lst1);
    cout <<"After swapping: ";
    for(auto l:lst){
        cout << l << " ";
    }
    cout << endl;


    lst.sort(); 
    for(auto x:lst){             //increasing order sorting
      cout << x << " " ;
    }
    cout << endl;

    lst.sort(greater<int>());     //decreasing order sorting
    for(auto j: lst){
      cout << j << " " ;
    }
    cout << endl;
    lst.erase(next(lst.begin(), 1), prev(lst.end(), 1));
    cout << "After erase: ";
    for(auto k : lst){
        cout << k << " ";
    }

    
    cout << endl;
    cout << lst.size() << endl;
    
    
}

void explainstack(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.push(6);
    // cout << st.top() << endl;
    cout << st.size() << endl;

    int n = st.size();
    for(int i=0;i<n;i++){
      cout << st.top() << " ";
      st.pop();
    }

    
    // while(!st.empty()){
    //   cout << st.top() << " ";
    //   st.pop();
    // }
    // cout << endl;

    // cout << st.top() << endl;
    // cout << st.size() << endl;
    

}

void explainpriorityqueue(){
  priority_queue <int,vector<int>,greater<int>>pq;
  pq.push(3);
  pq.push(8);
  pq.push(10);
  pq.push(12);
  while(pq.empty() == false){
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;
  cout << pq.top();

}

void explainset(){
  set<int> st;
  st.insert(2);
  st.insert(12);
  st.insert(21);
  st.insert(213);
  st.insert(211);
  for(auto i:st){
    cout << i << " ";
  }
  cout << endl;
  auto it  = st.end();
  it--;
  cout << *it << endl;

  // cout << *st.begin() << endl;
  // auto it = st.end();
  // it--;
  // cout << *it << endl;

  // auto x = st.find(100);
  // if(x != st.end()){
  //   cout << *x << endl;
  // }
  // else{
  //   cout << "Not found in the set";
  // }
  // cout << endl;

  // auto it1 = st.begin();
  // it1++;
  // auto it2 = st.end();
  // it2--;
  // st.erase(it1,it2);
  // for(auto i:st){
  //   cout << i << " ";
  // }
  // cout << endl;

  auto m  = st.lower_bound(214);
  if(m!=st.end()){
    cout << *m << endl;
  }
  else{
    cout << "end";
  }
  cout << endl;


  auto n = st.upper_bound(211);
  if(n!=st.end()){
    cout << *n << endl;
  }
  else{
    cout <<"Nothing";
  }


}

void explainmutliset(){
    multiset<int> mult;
    mult.insert(21);
    mult.insert(21);
    mult.insert(21);
    mult.insert(21);
    mult.insert(22);
    mult.insert(0);
    mult.insert(1);
    mult.insert(1);
    mult.insert(1);

    for(auto i:mult){
      cout << i << " ";
    }
    cout << endl;

    auto it = mult.find(21);
    if(it != mult.end()){
      int index = distance(mult.begin(),it);
      cout << index ;
    }
    cout << endl;

    auto start = mult.lower_bound(19);
    cout << *start << endl;
    auto end = mult.upper_bound(21);
    

    for(auto i=start;i!=end;i++){
      cout << distance(mult.begin(),i) << " ";
    }



}

void explainmap(){
  map<int,string> mp;
  mp[1] = "Anshul";
  mp[2] = "Riya";
  mp[3] = "Knaika";
  mp[4] = "Kushatgi";

    // for(auto i:mp){
    //     cout << i.first << " " << i.second << endl;
    // }

    auto it = mp.find(2);
    if(it!=mp.end()){
      cout << (*it).first << " " << (*it).second << endl;
    }
    else{
      cout << "not found";
    }
    



}





int main(){
  // explainpair();
  //explainvector();
  //explainlist();
  //explainstack();
  //explainpriorityqueue();
  //explainset();
  //explainmutliset();
  //explainmap();
  return 0;
}