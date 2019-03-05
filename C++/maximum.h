template <class T>
T maximum(T val1,T val2,T val3){ //not useful if we want the parameter name and return type to be of different datatype
  T valMax=val1;
  if (val2>valMax) {
    valMax=val2;
  }
  if (val3>valMax) {
    valMax=val3;
  }
  return valMax;
}
