template <class T>
T maximum(T val1,T val2,T val3){
  T valMax=val1;
  if (val2>valMax) {
    valMax=val2;
  }
  if (val3>valMax) {
    valMax=val3;
  }
  return valMax;
}
