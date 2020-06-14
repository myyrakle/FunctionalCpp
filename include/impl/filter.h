#ifndef __FUNCTIONAL_FILTER__
#define __FUNCTIONAL_FILTER__

#include <vector>

template <class Container, class Function>
Container filter(const Container& container, Function f)
{
  using Value = typename Container::value_type;
  std::vector<Value> filtered;
  filtered.reserve(container.size());
  
  for(auto& e : container)
  {
    if(f(e))
    {
      filtered.push_back(e);
    }
  }
  
  return Container(filtered.begin(), filtered.end());
}

#endif
