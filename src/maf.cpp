#include "maf.hpp"

CircularBuffer::CircularBuffer(float * buf, int N){
  _buf = buf;
  this->N = N;
  reset();
}

void CircularBuffer::reset(){
  _sum = 0;
  _count = 0;
}

void CircularBuffer::push(float val){
  if(_count < N){
    _sum += val;
    _buf[_count] = val;
    _count++;
    _index++;
    return;
  }

  if(_index == N){
    _index = 0;
  }
  _sum += val - _buf[_index];
  _buf[_index] = val;
  _index++;
}

float CircularBuffer::sum(){
  return _sum;
}

float CircularBuffer::mean(){
  return _sum / _count;
}
