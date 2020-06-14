#ifndef __FUNCTIONAL_SUM__
#define __FUNCTIONAL_SUM__

template <class Container>
typename Container::value_type sum(const Container& container)
{
  using Value = typename Container::value_type;
  
  Value result = Value{};
  
  for(const auto& e : container)
  {
    result += e;
  }
  
  return result;
}

#endif
