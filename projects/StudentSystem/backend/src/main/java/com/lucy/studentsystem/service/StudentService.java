package com.lucy.studentsystem.service;

import java.util.List;

import com.lucy.studentsystem.model.Student;

public interface StudentService {
    public Student saveStudent(Student student);
    public List<Student> getAllStudents();
}
