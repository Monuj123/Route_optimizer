# Route_optimizer

# Overview
This C++ application finds optimal routes between cities based on either the fastest or cheapest path. It implements Dijkstra's algorithm to calculate the best route and generates an HTML output displaying the journey details.

# Features
- Finds optimal routes between two cities
- Supports two optimization criteria:
  - Fastest route (minimizes travel time)
  -  Cheapest route (minimizes cost)
- Generates visual HTML output of the route
- Handles invalid input gracefully

# Requirements
- C++ compiler (supporting C++11 or later)
- Standard Library headers

# Usage
- Compile the program with your C++ compiler
- Run the executable
- Provide the following inputs when prompted:
      Cities filename (text file containing city data)
      Routes filename (text file containing route/connection data)
      Output filename (for the HTML results, must end with .html)
      Origin city
      Destination city
      Preference ("fastest" or "cheapest")

# Input Files
- Cities File Format
  - The cities file should contain city information with one city per line.
- Routes File Format
  - The routes file should contain route/connection information between cities, including:
    - Origin city
    - Destination city
    - Cost
    - Time
    - Transport method

# Output
 - The program generates an HTML file that visually displays:
   - The optimal route from origin to destination
   - Each segment of the journey with details
   - Total cost and time for the entire trip

# Example
    Enter filename containing cities: cities.txt
    Enter filename containing routes: routes.txt
    Enter filename for output (.html): journey.html
    Origin: New York
    Destination: Los Angeles
    Enter a preference (fastest/cheapest): cheapest
    This will generate journey.html showing the cheapest route from New York to Los Angeles.

# Error Handling
- The program checks for:
  - Invalid preference entries (must be "fastest" or "cheapest")
  - Nonexistent cities in the input
  - Valid file inputs
