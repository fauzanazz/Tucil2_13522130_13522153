import matplotlib.pyplot as plt
from typing import List


class Point:
    def __init__(self, x: float, y: float):
        self.x = x
        self.y = y


class MidPoint(Point):
    def __init__(self, p1: Point, p2: Point):
        super().__init__((p1.x + p2.x) / 2, (p1.y + p2.y) / 2)


def populateBezierPoints(ctrl1: Point, ctrl2: Point, ctrl3: Point, currentIteration: int, bezierPoints: List[Point],
                         iterations: int) -> List[Point]:
    """Populates the list of Bezier points using De Casteljau's algorithm."""
    if currentIteration < iterations:
        mid_point1 = MidPoint(ctrl1, ctrl2)
        mid_point2 = MidPoint(ctrl2, ctrl3)
        mid_point3 = MidPoint(mid_point1, mid_point2)
        currentIteration += 1

        populateBezierPoints(ctrl1, mid_point1, mid_point3, currentIteration, bezierPoints, iterations)
        bezierPoints.append(mid_point3)
        populateBezierPoints(mid_point3, mid_point2, ctrl3, currentIteration, bezierPoints, iterations)

    return bezierPoints


def plotBezierPoints(bezierPoints: List[Point]) -> None:
    """Plots the Bezier points."""
    x = [point.x for point in bezierPoints]
    y = [point.y for point in bezierPoints]
    plt.plot(x, y, 'ro')
    plt.plot(x, y)
    plt.show()


def main() -> int:
    ctrl1 = Point(0, 0)
    ctrl2 = Point(1, 2)
    ctrl3 = Point(3, 1)

    bezierPoints = [ctrl1]
    bezierPoints = populateBezierPoints(ctrl1, ctrl2, ctrl3, 0, bezierPoints, 3)
    bezierPoints.append(ctrl3)

    for point in bezierPoints:
        print(point.x, point.y)

    plotBezierPoints(bezierPoints)

    return 0


main()