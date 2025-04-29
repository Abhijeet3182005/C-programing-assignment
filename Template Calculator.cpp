#include <iostream>
using namespace std;
template<typename T>
T findMax(T a,T b){
    return (a>b)?a:b;
}
template<typename T>
class Calculator{
private:
    T a,b;
public:
    Calculator(T x,T y){
        a=x;
        b=y;
    }
    T add(){
	return a+b;
	}
    T subtract(){ 
	return a-b;
	}
    T multiply(){
	return a*b;
	}
    T divide(){
        return (b!=0)?(a/b):0;
    }
};
int main(){
    cout<<"Max of 5 and 10 is:"<<findMax(5,10)<<endl;
    cout<<"Int add:"<<Calculator<int>(5,10).add()<<endl;
    cout<<"Float mul:" << Calculator<float>(3.5f, 2.0f).multiply() << endl;
    cout<<"Double div:"<<Calculator<double>(7.25,3.5).divide()<<endl;
    return 0;
}
