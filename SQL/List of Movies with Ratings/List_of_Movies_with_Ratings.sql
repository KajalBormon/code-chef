CREATE Table Cinema(
    Movie_id int PRIMARY KEY,
    Movie_name VARCHAR(255),
    Description VARCHAR(255),
    Rating DOUBLE(10,1)
);

INSERT INTO Cinema (movie_id, movie_name, description, rating) VALUES
(1, 'War', 'great 3D', 8.9),
(2, 'Science', 'fiction', 8.5),
(3, 'Irish', 'boring', 6.2),
(4, 'Ice Song', 'Fantasy', 8.6),
(5, 'House Card', 'Interesting', 9.1),
(6, 'The Escape', 'Thriller', 7.8),
(7, 'Solar Flare', 'Sci-Fi', 8.3),
(8, 'The Joker', 'Drama', 9.0),
(9, 'Lost Dreams', 'Mystery', 7.5),
(10, 'Galaxy War', 'Action', 8.7);


-- Task
-- Write a query to select only the movie names where the ratings are greater than 7 but less than 9.

select Movie_name
from Cinema
where Rating > 7.0 And Rating < 9.0;