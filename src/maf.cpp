#include "maf.hpp"

//template<typename T, int N>
template<typename T>
CircularBuffer<T>::CircularBuffer(){
//CircularBuffer::CircularBuffer(){
  _count = 0;
}

template<typename T>
void CircularBuffer<T>::push(T val){
  if(_count < N){
    _sum += val;
    _buf[_count] = val;
    _count++;
    _index++;
    return;
  }

  _sum += val - _buf[_index];
  _buf[_index] = val;
  _index++;
}

template<typename T>
T CircularBuffer<T>::sum(){
  return _sum;
}

template<typename T>
T CircularBuffer<T>::mean(){
  return _sum / _count;
}
