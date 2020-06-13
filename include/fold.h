#include <vector>

template <class Container>
typename Container::value_type fold(const Container& container)
{
  using InnerContainer = 
    typename Container::value_type;
  using InnerValue = 
    typename InnerContainer::value_type;
  
  std::vector<InnerValue> buffer;
  
  for(const auto& inner:container)
  {
    for(const auto& e:inner)
    {
      buffer.push_back(e);
    }
  }
  
  return InnerContainer(buffer.begin(), buffer.end());
}
