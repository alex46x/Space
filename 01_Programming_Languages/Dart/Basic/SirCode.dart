import 'dart:io';

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
  stdout.write('Enter Student Name: ');
  String name = stdin.readLineSync()?.trim() ?? 'Unknown Student';
  if (name.isEmpty) name = 'Unknown Student';

  Map<String, int> subjects = {};

  while (true) {
    stdout.write('Enter subject name (or type "done" to finish): ');
    String? subject = stdin.readLineSync()?.trim();

    if (subject == null || subject.toLowerCase() == 'done') {
      if (subjects.isEmpty) {
        print('Please enter at least one subject.');
        continue;
      }
      break;
    }

    if (subject.isEmpty) {
      print('Subject name cannot be empty.');
      continue;
    }

    stdout.write('Enter mark for $subject: ');
    String? markStr = stdin.readLineSync()?.trim();
    int? mark = int.tryParse(markStr ?? '');

    if (mark != null && mark >= 0 && mark <= 100) {
      subjects[subject] = mark;
    } else {
      print('Invalid mark. Please enter a valid integer between 0 and 100.');
    }
  }

  int totalMarks = 0;
  print('\nStudent Name: $name');
  print('Subjects and Grades:');

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
