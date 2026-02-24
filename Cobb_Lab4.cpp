//Preprocessors
#include <iostream>
#include <iomanip>
using namespace std;

//calculate weighted average function
double calculateWeightedAverage(double assignmentScore, double quizScore,
    double midtermExamScore, double finalExamScore, double assignmentWeight, double quizWeight,
    double midtermExamWeight, double finalExamWeight) {
   

    double weightedAverage = ((assignmentScore * assignmentWeight) / 100) + (quizScore * quizWeight / 100) + (midtermExamScore * midtermExamWeight / 100) + (finalExamScore * finalExamWeight / 100);
    return weightedAverage;
}

//Show letter grade function
char determineLetterGrade(double finalGrade) {
    
    if (finalGrade >= 90) return 'A';
    else if (finalGrade >= 80) return 'B';
    else if (finalGrade >= 70) return 'C';
    else if (finalGrade >= 60) return 'D';
    else return 'F';
}

void displayGrade(double finalGrade, char letterGrade) {
    cout << fixed << setprecision(2);
    cout << "\n--- Grade Results --" << endl;
    cout << "Final Grade: " << finalGrade << "%" << endl;
    cout << "Letter Grade " << letterGrade << endl;
}

int main() {
    char choice;
    do {
        double assignmentScore, quizScore, midtermExamScore, finalExamScore;
        double assignmentWeight, quizWeight, midtermExamWeight, finalExamWeight;

        //Get Scores
        cout << "\nEnter the score for each assignment: " << endl;
        cout << "Assignment: ";
        cin >> assignmentScore;
        cout << "Quiz: ";
        cin >> quizScore;
        cout << "Midterm Exam: ";
        cin >> midtermExamScore;
        cout << "Final Exam: ";
        cin >> finalExamScore;

        //Get Weights
        cout << "\nEnter the weight for each assignment (must equal 100%): " << endl;
        cout << "Assignment Weight: ";
        cin >> assignmentWeight;
        cout << "Quiz Weight: ";
        cin >> quizWeight;
        cout << "Midterm Exam Weight: ";
        cin >> midtermExamWeight;
        cout << "Final Exam Weight: ";
        cin >> finalExamWeight;

        // Validate weights
        double totalWeight = assignmentWeight + quizWeight + midtermExamWeight + finalExamWeight;
        if (totalWeight != 100) {
            cout << "Weight not equal to 100%. Current Weight: " << totalWeight << "%. Please re-enter amounts." << endl;
            continue;
        }

        //Calcuate and display
        double finalGrade = calculateWeightedAverage(assignmentScore, quizScore, midtermExamScore, finalExamScore, assignmentWeight, quizWeight, midtermExamWeight, finalExamWeight);
        char letterGrade = determineLetterGrade(finalGrade);
        displayGrade(finalGrade, letterGrade);

        cout << "\nDo you want to calculate grades for another student? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "See you later!" << endl;

    return 0;
}