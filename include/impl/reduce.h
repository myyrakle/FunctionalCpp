#ifndef __FUNCTIONAL_REDUCE__
#define __FUNCTIONAL_REDUCE__

template <class Container, class Function>
typename Container::value_type reduce(const Container& container, Function f)
{
  using Value = typename Container::value_type;
  
  auto it = container.begin();
  Value result = *it;
  
  it++;
  
  while(it!=container.end())
  {
    result = f(result, *it);
    it++;
  }
  
  return result;
}

#endif
