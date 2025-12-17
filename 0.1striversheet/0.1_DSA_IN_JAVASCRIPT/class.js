class Rectangle {
  constructor(width, height) {
    this._width = width;
    this._height = height;
  }

  // getter for width
  get width() {
    return this._width;
  }

  // getter for height
  get height() {
    return this._height;
  }

  // method to calculate area
  getArea() {
    return this._width * this._height;
  }
}

class Square extends Rectangle {
  constructor(side) {
    // call parent constructor
    super(side, side);
    this._side = side;
  }

  // method to calculate perimeter
  getPerimeter() {
    return 4 * this._side;
  }
}

console.log("---------------------") ; 
const rectangle = new Rectangle(5, 10);
console.log(rectangle.width); // Output: 5
console.log(rectangle.height); // Output: 10
console.log(rectangle.getArea()); // Output: 50
console.log("---------------------") ; 
// Creating a Square instance
const square = new Square(7);
console.log(square.width); // Output: 7
console.log(square.height); // Output: 7
console.log(square.getArea()); // Output: 49
console.log(square.getPerimeter()); // Output: 28
console.log("---------------------") ; 