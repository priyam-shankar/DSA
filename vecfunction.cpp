//6 types of vector function : size , push_back, pop_back, front, back, at;

//size : tells what is the size of the vector 
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec = {'a','b','c','d','e'};
    cout<< "size = "<<vec.size() <<endl;
    for(char val : vec){
        cout << val<< endl;
    }
    return 0;
}*/

//push_back: add new elements in our array ;
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<< "size = "<<vec.size() <<endl;
    vec.push_back(70);
    vec.push_back(50);
    vec.push_back(60);
    vec.push_back(30);
    cout<< "after push_back,size = "<<vec.size() <<endl;
    for(int val : vec){
        cout << val <<" ";
    }
    return 0;
}*/

// pop_back : delete any elements from the vector and it is already the last one!
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<< "size = "<<vec.size() <<endl;
    vec.push_back(70);
    vec.push_back(50);
    vec.push_back(60);
    vec.push_back(30);
    cout<< "after push_back,size = "<<vec.size() <<endl;
    for(int val : vec){
        cout << val <<" "<<"\n";
    }
    vec.pop_back();
    vec.pop_back();
    cout<< "after pop_back,size = "<<vec.size() <<endl;
    for(int val : vec){
        cout << val <<" ";
    }
    return 0;
}