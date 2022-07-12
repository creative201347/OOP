# Maps in C++ (std::map and std::unordered_map)

Maps are part of the C++ STL (Standard Template Library). Maps are the associative containers that store sorted key-value pair, in which each key is unique and it can be inserted or deleted but cannot be altered. Values associated with keys can be changed.
For example: A map of Employees where employee ID is the key and name is the value can be represented as:
| Keys | Values |
|--------|--------|
| 101 | Nabin |
| 102 | Singh |
| 103 | Dhami |

## Some basic functions associated with Map:

- `empty()` – Returns whether the map is empty.
- `clear()` – Removes all the elements from the map.
- `size()` – Returns the number of elements in the map.
- `erase(const g)`– Removes the key-value ‘g’ from the map.
- `begin()` – Returns an iterator to the first element in the map.
- `pair insert(keyvalue, mapvalue)` – Adds a new element to the map.
- `max_size()` – Returns the maximum number of elements that the map can hold.
- `erase(iterator position)` – Removes the element at the position pointed by the iterator.
- `end()` – Returns an iterator to the theoretical element that follows the last element in the map.

## List of all Functions of Map

1. map::insert() \
   Insert elements with a particular key in the map container –> O(log n)
2. map:: count() \
   Returns the number of matches to element with key-value ‘g’ in the map. –> O(log n)
3. map equal_range() \
   Returns an iterator of pairs. The pair refers to the bounds of a range that includes all the elements in the container which have a key equivalent to k.
4. map erase() \
   Used to erase elements from the container –> O(log n)
5. map rend() \
   Returns a reverse iterator pointing to the theoretical element right before the first key-value pair in the map(which is considered its reverse end).
6. map rbegin() \
   Returns a reverse iterator which points to the last element of the map.
7. map find() \
   Returns an iterator to the element with key-value ‘g’ in the map if found, else returns the iterator to end.
8. map crbegin() and crend() \
   crbegin() returns a constant reverse iterator referring to the last element in the map container. crend() returns a constant reverse iterator pointing to the theoretical element before the first element in the map.
9. map cbegin() and cend() \
   cbegin() returns a constant iterator referring to the first element in the map container. cend() returns a constant iterator pointing to the theoretical element that follows the last element in the multimap.
10. map emplace() \
    Returns a reverse iterator which points to the last element of the mInserts the key and its element in the map container.ap.
11. map max_size() \
    Returns the maximum number of elements a map container can hold –> O(1)
12. map upper_bound() \
    Returns an iterator to the first element that is equivalent to mapped value with key-value ‘g’ or definitely will go after the element with key-value ‘g’ in the map
13. map operator= \
    Assigns contents of a container to a different container, replacing its current content.
14. map lower_bound() \
    Returns an iterator to the first element that is equivalent to the mapped value with key-value ‘g’ or definitely will not go before the element with key-value ‘g’ in the map –> O(log n)

15. map emplace_hint() \
    Inserts the key and its element in the map container with a given hint.
16. map value_comp() \
    Returns the object that determines how the elements in the map are ordered (‘<‘ by default).
17. map key_comp() \
    Returns the object that determines how the elements in the map are ordered (‘<‘ by default).
18. map::size() \
    Returns the number of elements in the map.
19. map::empty() \
    Returns whether the map is empty
20. map::begin() and end() \
    begin() returns an iterator to the first element in the map. end() returns an iterator to the theoretical element that follows the last element in the map
21. map::operator[] \
    This operator is used to reference the element present at the position given inside the operator.
22. map::clear() \
    Removes all the elements from the map.
23. map::at() and map::swap() \
    at() function is used to return the reference to the element associated with the key k. swap() function is used to exchange the contents of two maps but the maps must be of the same type, although sizes may differ.
