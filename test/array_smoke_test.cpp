// Smoke test for the two hand-written container templates this coursework
// keeps in src/tool/: the dynamic array in src/tool/MyArray.h and the
// singly linked list in src/tool/LinkedList.h. Both are header-only
// templates with no platform dependency, so they build and run on the CI
// runner directly.
//
// Only MyArray.h is actually included by an exercise today
// (src/2021-3-15/Q4.cpp's search for perfect numbers), but LinkedList.h
// ships in the same folder and nothing else in the repository would notice
// if it broke -- so it is exercised here too.
//
// Build and run from the repository root:
//     g++ -std=c++20 -I src/tool -o array_smoke_test test/array_smoke_test.cpp
//     ./array_smoke_test
//
// Every check below is an assert that can fail; the goal is to catch a
// change that breaks storing, finding or removing an element, not to reach
// full coverage of either template.

#include <cassert>
#include <cstdio>

#include "MyArray.h"
#include "LinkedList.h"

static void array_stores_and_returns_in_order() {
    Array<int> numbers;
    assert(numbers.isEmpty());
    assert(numbers.getSize() == 0);
    assert(numbers.getCapacity() == 5);

    numbers.addLast(10);
    numbers.addLast(20);
    numbers.addFirst(5);

    assert(numbers.getSize() == 3);
    assert(!numbers.isEmpty());
    assert(numbers.get(0) == 5);
    assert(numbers.get(1) == 10);
    assert(numbers.get(2) == 20);
}

static void array_grows_past_its_initial_capacity() {
    Array<int> numbers;
    const int initial = numbers.getCapacity();

    for (int i = 0; i < initial * 2; ++i) {
        numbers.addLast(i);
    }

    assert(numbers.getSize() == initial * 2);
    assert(numbers.getCapacity() > initial);
    for (int i = 0; i < initial * 2; ++i) {
        assert(numbers.get(i) == i);
    }
}

static void array_finds_sets_and_removes() {
    Array<int> numbers;
    numbers.addLast(1);
    numbers.addLast(2);
    numbers.addLast(3);

    assert(numbers.contains(2));
    assert(numbers.find(3) == 2);
    assert(numbers.find(99) == -1);

    const int removed = numbers.remove(1);
    assert(removed == 2);
    assert(numbers.getSize() == 2);
    assert(!numbers.contains(2));

    numbers.set(0, 7);
    assert(numbers.get(0) == 7);

    assert(numbers.removeElement(3) == 1);
    assert(numbers.getSize() == 1);
    assert(numbers.removeElement(3) == -1);
}

static void perfect_number_divisors_sum_correctly() {
    // The shape src/2021-3-15/Q4.cpp actually uses Array<int> for: collect
    // 28's proper divisors and check that they sum back to 28.
    Array<int> divisors;
    for (int i = 1; i < 28; ++i) {
        if (28 % i == 0) {
            divisors.addLast(i);
        }
    }
    int total = 0;
    for (int i = 0; i < divisors.getSize(); ++i) {
        total += divisors.get(i);
    }
    assert(total == 28);
}

static void linked_list_stores_and_returns_in_order() {
    LinkedList<int> list;
    assert(list.isEmpty());

    list.addLast(1);
    list.addLast(2);
    list.addFirst(0);

    assert(list.getSize() == 3);
    assert(list.getFirst() == 0);
    assert(list.getLast() == 2);
    assert(list.get(1) == 1);
    assert(list.contains(2));
    assert(!list.contains(42));
}

static void linked_list_sets_and_removes_by_index() {
    LinkedList<int> list;
    list.addLast(1);
    list.addLast(2);
    list.addLast(3);

    list.set(1, 20);
    assert(list.get(1) == 20);

    assert(list.remove(1) == 20);
    assert(list.getSize() == 2);
    assert(!list.contains(20));

    assert(list.removeFirst() == 1);
    assert(list.removeLast() == 3);
    assert(list.isEmpty());
}

int main() {
    array_stores_and_returns_in_order();
    array_grows_past_its_initial_capacity();
    array_finds_sets_and_removes();
    perfect_number_divisors_sum_correctly();
    linked_list_stores_and_returns_in_order();
    linked_list_sets_and_removes_by_index();
    std::printf("array/linked-list smoke test: all checks passed\n");
    return 0;
}
