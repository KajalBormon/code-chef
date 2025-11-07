DROP Table departments; 

CREATE Table departments (
    department_id int PRIMARY KEY,
    department_name VARCHAR(255),
    location VARCHAR(255)
);

INSERT INTO departments (department_id, department_name, location) VALUES
(1, 'Human Resources', 'New York'),
(2, 'Research and Development', 'San Francisco'),
(3, 'Sales', 'Los Angeles'),
(4, 'Marketing', 'New York'),
(5, 'Customer Support', 'Boston'),
(6, 'Finance', 'Austin'),
(7, 'IT Support', 'Seattle'),
(8, 'Product Management', 'San Francisco'),
(9, 'Quality Assurance', 'Los Angeles'),
(10, 'Legal', 'Boston');

-- Write a query to retrieve the department_name and location of people who live in location that starts with 'S'.

SELECT department_name, location 
FROM departments
where location LIKE "S%";