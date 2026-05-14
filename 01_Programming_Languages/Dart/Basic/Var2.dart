void main() {
  print("Hello Dart!");

  int age = 21;
  double cgpa = 3.75;
  String name = "MRX";
  bool isStudent = true;

  print("Name: $name");
  print("Age: $age");
  print("CGPA: $cgpa");
  print("Student: $isStudent");

  var city = "Khulna"; // type inferred
  final country = "BD"; // run-time constant
  const pi = 3.1416; // compile-time constant

  print("City: $city, Country: $country, PI: $pi");
}
