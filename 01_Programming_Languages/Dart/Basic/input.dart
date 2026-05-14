import 'dart:io';

void main() {
  print("Enter your name:");
  String? name = stdin.readLineSync();
  print("Enter your age:");

  String? ageInput = stdin.readLineSync();

  int? age = int.tryParse(ageInput ?? '');
  if (age == null) {
    print("Invalid age input.");
    return;
  }
  print("Welcome $name");
}
