 std::unordered_set<int> uniqueCandies(candyType.begin(), candyType.end());
    return std::min(uniqueCandies.size(), candyType.size() / 2);
