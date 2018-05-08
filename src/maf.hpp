/*
 * Created by Kranfix on 08/05/2018
 */

template<class T,int N>
class CircularBuffer {
  T _buf[N];
  
  int _index;
  int _count;
 
  T _min, _max, _sum;

public:
  CircularBuffer();
  void push(T val);
  
  void searchMinAndMax();
  T getMin();
  T getMax();
  T sum();
  T mean();
}