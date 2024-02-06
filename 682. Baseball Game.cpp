 int sum = 0;
        std::vector<int> scores;

        for (const std::string& op : operations) {
            if (op == "C" && !scores.empty()) {
                sum -= scores.back();
                scores.pop_back();
            } else if (op == "D" && !scores.empty()) {
                int doubledScore = 2 * scores.back();
                sum += doubledScore;
                scores.push_back(doubledScore);
            } else if (op == "+" && scores.size() >= 2) {
                int newScore = scores[scores.size() - 1] + scores[scores.size() - 2];
                sum += newScore;
                scores.push_back(newScore);
            } else {
                int newScore = std::stoi(op);
                sum += newScore;
                scores.push_back(newScore);
            }
        }

        return sum;
