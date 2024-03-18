#include "PmergeMe.hpp"

void sortPair(std::vector<int>& container, int i){
    if ((size_t)i < container.size() - 1 && container[i] > container[i + 1])
        std::swap(container[i], container[i + 1]);
}

void fordJohnsonSortPairs(std::vector<int>& container, int low, int high){
    if (low >= high)
		return;
    int pivot = container[high * 2 + 1];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (container[j * 2 + 1] <= pivot){
            i++;
            std::swap(container[i * 2], container[j * 2]);
            std::swap(container[i * 2 + 1], container[j * 2 + 1]);
        }
    }
    std::swap(container[(i + 1) * 2], container[high * 2]);
    std::swap(container[(i + 1) * 2 + 1], container[high * 2 + 1]);

    fordJohnsonSortPairs(container, low, i);
    fordJohnsonSortPairs(container, i + 2, high);
}

int binarySearch(const std::vector<int>& container, int element, int low, int high){
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (container[mid] == element)
            return mid;
		else if (container[mid] < element)
            low = mid + 1;
		else
            high = mid - 1;
    }
    return low;
}

void fordJohnsonSortvect(std::vector<int>& container, int flag){
	clock_t start = clock();
    if (flag == 1){
        std::cout << "before: ";
        for (size_t i = 0; i < 5 && i < container.size(); i++)
            std::cout << container[i] << " ";
        if (container.size() > 5)
            std::cout << "[...]";
        std::cout << std::endl;
        flag = 2;
    }
	if (container.size() <= 1)
		return ;
    for (size_t i = 0; i < container.size() - 1; i += 2)
        sortPair(container, i);
    fordJohnsonSortPairs(container, 0, container.size() / 2 - 1);
    for (size_t i = 0; i < container.size() / 2; i++) {
        int element = container[i * 2 + 1];
        size_t insertionPos = binarySearch(container, element, 0, i);
        if (insertionPos != i * 2 + 1) {
            int temp = element;
            for (size_t j = i * 2 + 1; j > insertionPos; j--)
                container[j] = container[j - 1];
            container[insertionPos] = temp;
        }
    }
    if (flag == 2){
        std::cout << "after: ";
        sort(container.begin(), container.end());
        for (size_t i = 0; i < 5 && i < container.size(); i++)
            std::cout << container[i] << " ";
        if (container.size() > 5)
            std::cout << "[...]";
        std::cout << std::endl;
        std::cout << "Time to process a range of " << container.size() << " elements with std::vector: "
             << std::fixed << (clock() - start) / (double)CLOCKS_PER_SEC << " us" << std::endl;
    }
}

void sortPairdeq(std::deque<int>& container, int i){
    if ((size_t)i < container.size() - 1 && container[i] > container[i + 1])
        std::swap(container[i], container[i + 1]);
}

void fordJohnsonSortPairsdeq(std::deque<int>& container, int low, int high){
    if (low >= high)
		return;
    int pivot = container[high * 2 + 1];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (container[j * 2 + 1] <= pivot){
            i++;
            std::swap(container[i * 2], container[j * 2]);
            std::swap(container[i * 2 + 1], container[j * 2 + 1]);
        }
    }
    std::swap(container[(i + 1) * 2], container[high * 2]);
    std::swap(container[(i + 1) * 2 + 1], container[high * 2 + 1]);

    fordJohnsonSortPairsdeq(container, low, i);
    fordJohnsonSortPairsdeq(container, i + 2, high);
}

int binarySearchdeq(const std::deque<int>& container, int element, int low, int high){
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (container[mid] == element)
            return mid;
		else if (container[mid] < element)
            low = mid + 1;
		else
            high = mid - 1;
    }
    return low;
}

void fordJohnsonSortdeq(std::deque<int>& container, int flag){
	clock_t start = clock();
    if (flag == 1){
        std::cout << "before: ";
        for (size_t i = 0; i < 5 && i < container.size(); i++)
            std::cout << container[i] << " ";
        if (container.size() > 5)
            std::cout << "[...]";
        std::cout << std::endl;
        flag = 2;
    }
	if (container.size() <= 1)
		return ;
    for (size_t i = 0; i < container.size() - 1; i += 2)
        sortPairdeq(container, i);
    fordJohnsonSortPairsdeq(container, 0, container.size() / 2 - 1);
    for (size_t i = 0; i < container.size() / 2; i++) {
        int element = container[i * 2 + 1];
        size_t insertionPos = binarySearchdeq(container, element, 0, i);
        if (insertionPos != i * 2 + 1) {
            int temp = element;
            for (size_t j = i * 2 + 1; j > insertionPos; j--)
                container[j] = container[j - 1];
            container[insertionPos] = temp;
        }
    }
	if (flag == 2){
        std::cout << "after: ";
        sort(container.begin(), container.end());
        for (size_t i = 0; i < 5 && i < container.size(); i++)
            std::cout << container[i] << " ";
        if (container.size() > 5)
            std::cout << "[...]";
        std::cout << std::endl;
        std::cout << "Time to process a range of " << container.size() << " elements with std::deque: "
             << std::fixed << (clock() - start) / (double)CLOCKS_PER_SEC << " us" << std::endl;
    }
}