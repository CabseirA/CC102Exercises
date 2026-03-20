#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numStudents, numQuizzes;

    cout << "Enter number of students: ";
    cin >> numStudents;

    cout << "Enter number of quizzes: ";
    cin >> numQuizzes;

    vector<vector<double>> scores(numStudents, vector<double>(numQuizzes));
    vector<double> averages(numStudents, 0.0);

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEntering scores for Student " << i + 1 << ":\n";
        double sum = 0;
        for (int j = 0; j < numQuizzes; j++) {
            cout << "Quiz " << j + 1 << ": ";
            cin >> scores[i][j];
            sum += scores[i][j];
        }
        averages[i] = sum / numQuizzes;
    }

    cout << "\n--- Student Quiz Averages ---\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << " average: " << averages[i] << endl;
    }

    return 0;
}
