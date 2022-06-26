class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int score = 0;
        int currentScore = 0;
        int size = cardPoints.size();
        for(int i = 0; i < k; ++i)
            score += cardPoints[i];
        currentScore = score;
        for(int i = k - 1; i >= 0; --i) {
            currentScore -= cardPoints[i];
            currentScore += cardPoints[size - k + i];
            score = max(score,currentScore);
        }
        return score;
    }
};