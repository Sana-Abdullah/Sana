CREATE DATABASE student_courses_db;
USE Student_courses_db;
CREATE TABLE students(
    student_id INT PRIMARY KEY,
    name VARCHAR(20) NOT NULL,
    email VARCHAR(50) UNIQUE NOT NULL,
    age INT NOT NULL
);
CREATE TABLE course(
    course_id INT PRIMARY KEY,
    title VARCHAR(50) NOT NULL,
    duration INT NOT NULL
);
INSERT INTO course VALUES
CREATE TABLE enrollments (
    enrollment_id INT NOT NULL AUTO_INCREMENT,
    student_id INT NOT NULL,
    course_id INT NOT NULL,
    enrollment_date DATE NOT NULL,
    PRIMARY KEY (enrollment_id),
    FOREIGN KEY (student_id) REFERENCES students(student_id),
    FOREIGN KEY (course_id) REFERENCES course(course_id)
);
