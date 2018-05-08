#include "maf.hpp"

template<class T, int N>
CircularBuffer<T,N>::CircularBuffer(){
  _count = 0;
}

template<class T, int N>
void CircularBuffer<T,N>::push(T val){
  if(_count < N){
    _sum += val;
    buf[_count] = val;
    _count++;
    _index++;
    return;
  }

  _sum += val - _buf[_index];
  _buf[_index] = val;
  _index++;
}

template<class T, int N>
T CircularBuffer<T,N>::sum(){
  return _sum;
}

template<class T, int N>
T CircularBuffer<T,N>::mean(){
  return _sum / _count;
}
