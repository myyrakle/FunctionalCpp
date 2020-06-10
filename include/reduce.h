#ifndef __FUNCTIONAL_REDUCE__
#define __FUNCTIONAL_REDUCE__

template <class Container>
typename Container::value_type reduce(const Container& container)
{
  using Value = typename Container::value_type;
  
  Value result = Value{};
  
  for(const auto& e : container)
  {
    result += f(result, e);
  }
  
  return result;
}

#endif
