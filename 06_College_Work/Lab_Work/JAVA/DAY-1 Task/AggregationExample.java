import java.util.*;

class Professor {
    private String name;
    private String subject;
    
    public Professor(String name, String subject) {
        this.name = name;
        this.subject = subject;
    }

    public String getName() {
        return name;
    }
    
    public void teach() {
        System.out.println(name + " is teaching " + subject);
    }
}

class University {
    private String universityName;
    private List<Professor> professors;

    public University(String universityName) {
        this.universityName = universityName;
        this.professors = new ArrayList<>();
    }

    public void addProfessor(Professor professor) {
        professors.add(professor);
    }

    public void showProfessors() {
        System.out.println("Professors at " + universityName + ":");
        for (Professor professor : professors) {
            System.out.println(" - " + professor.getName());
        }
    }
}

public class AggregationExample {
    public static void main(String[] args) {
        Professor prof1 = new Professor("Dr. Smith", "Computer Science");
        Professor prof2 = new Professor("Dr. Johnson", "Mathematics");

        University university = new University("Harvard University");
        university.addProfessor(prof1);
        university.addProfessor(prof2);

        university.showProfessors();

        prof1.teach();
        prof2.teach();
    }
}
