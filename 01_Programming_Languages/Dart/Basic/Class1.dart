// String name = 'Jhon Doe';

// Map<String, int> subjects = {'Math': 90, 'Science': 85, 'History': 92};

// String getGrade(int score) {
//   if (score >= 90) {
//     return 'A';
//   } else if (score >= 80) {
//     return 'B';
//   } else if (score >= 70) {
//     return 'C';
//   } else if (score >= 60) {
//     return 'D';
//   } else {
//     return 'F';
//   }
// }

// void main() {
//   print('Student Name: $name');
//   print('Subjects and Grades:');

//   subjects.forEach((subject, score) {
//     String grade = getGrade(score);
//     print('$subject: $score ($grade)');
//   });
// }



String name = 'Jhon Doe';

Map<String, int> subjects = {'Math': 90, 'Science': 85, 'History': 92};

String getGrade(int score) {
  if (score >= 90) {
    return 'A';
  } else if (score >= 80) {
    return 'B';
  } else if (score >= 70) {
    return 'C';
  } else if (score >= 60) {
    return 'D';
  } else {
    return 'F';
  }
}

void main() {
  print('Student Name: $name');
  print('Subjects and Grades:');

  int totalMarks = 0;

  subjects.forEach((subject, mark) {
    print('$subject: $mark (Grade: ${getGrade(mark)})');
    totalMarks += mark;
  });

  double averageMark = totalMarks / subjects.length;
  String finalGrade = getGrade(averageMark.round());

  print('\n--- Final Result ---');
  print('Average Mark: ${averageMark.toStringAsFixed(2)}');
  print('Final Grade: $finalGrade');
}
