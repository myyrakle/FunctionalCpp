#ifndef __FUNCTIONAL_MAP__
#define __FUNCTIONAL_MAP__

template <class Container, class Function>
Container map(const Container& container, Function f)
{
  Container result = container;
  
  for(auto& e : result)
  {
    e = f(e);
  }
  
  return result;
}

#endif
