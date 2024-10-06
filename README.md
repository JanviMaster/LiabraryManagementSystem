 <h1>Library Management System</h1>
    <p>
        This is a simple console-based Library Management System developed in C++. It allows users to manage books by adding, 
        removing, placing orders, generating bills, and viewing available books in the library.
    </p>
    <h2>Features</h2>
    <ul>
        <li><strong>Add Book</strong>: Users can add books to the library by entering the book's title, author, price, and quantity.</li>
        <li><strong>Remove Book</strong>: Users can remove books from the library by providing the book's title.</li>
        <li><strong>Place Order</strong>: Users can place an order for a book, specifying the quantity. The system will calculate and display the total cost for the order.</li>
        <li><strong>Generate Bill</strong>: Users can view the total bill of all orders placed during the session.</li>
        <li><strong>Show Available Books</strong>: The system will display all the available books in the library, including the title, author, price, and quantity.</li>
    </ul>
    <h2>How to Run</h2>
    <h3>Prerequisites</h3>
    <p>A C++ compiler (e.g., g++, Visual Studio Code with C++ extension, etc.)</p>
    <h3>Steps to Run</h3>
    <ol>
        <li><strong>Clone the repository</strong>:
            <pre><code>git clone https://github.com/your-username/library-management-system.git</code></pre>
        </li>
        <li><strong>Navigate to the project directory</strong>:
            <pre><code>cd library-management-system</code></pre>
        </li>
        <li><strong>Compile the program</strong>:
            <pre><code>g++ library_management.cpp -o library</code></pre>
            <p>or if you are using Visual Studio Code, simply press <code>Ctrl + Shift + B</code> to build the project.</p>
        </li>
        <li><strong>Run the program</strong>:
            <pre><code>./library</code></pre>
        </li>
    </ol>
    <h3>Sample Usage</h3>
    <p>
        1. The system starts by adding two books to the library automatically.<br>
        2. Users can then interact with the system using the menu options to add more books, remove books, place orders, generate bills, or display available books.<br>
        3. The program will continue running until the user chooses the option to exit.
    </p>
    <h2>Code Structure</h2>
    <ul>
        <li><strong>Book Structure</strong>: Represents a book with properties like title, author, price, and quantity.</li>
        <li><strong>Library Class</strong>: Handles the management of books, including adding, removing, ordering, billing, and showing books.</li>
    </ul>
    <h2>Menu Options</h2>
    <ol>
        <li><strong>Add Book</strong>: Adds a new book to the library.</li>
        <li><strong>Remove Book</strong>: Removes a book from the library by title.</li>
        <li><strong>Place Order</strong>: Orders a book by specifying the title and quantity.</li>
        <li><strong>Generate Bill</strong>: Displays the total amount of all orders placed.</li>
        <li><strong>Show Available Books</strong>: Displays all books currently in the library.</li>
        <li><strong>Exit</strong>: Exits the system.</li>
    </ol>
   
 
