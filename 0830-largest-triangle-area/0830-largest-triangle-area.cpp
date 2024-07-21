class Solution {
public:
    double triangleArea(vector<int>& p1, vector<int>& p2, vector<int>& p3) {
    return 0.5 * abs(p1[0] * (p2[1] - p3[1]) + p2[0] * (p3[1] - p1[1]) + p3[0] * (p1[1] - p2[1]));
}

double largestTriangleArea(vector<vector<int>>& points) {
    int n = points.size();
    double maxArea = 0.0;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                double area = triangleArea(points[i], points[j], points[k]);
                if (area > maxArea) {
                    maxArea = area;
                }
            }
        }
    }

    return maxArea;
}
};