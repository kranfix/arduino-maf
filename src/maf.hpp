/*
 * Created by Kranfix on 08/05/2018
 */

class CircularBuffer {
  float * _buf;
  int N;
  
  int _index;
  int _count;
 
  float _min, _max;
  float _sum;

public:
  CircularBuffer(float * buf, int N);
  void reset();
  void push(float val);
  
  void searchMinAndMax();
  float getMin();
  float getMax();
  float sum();
  float mean();

};