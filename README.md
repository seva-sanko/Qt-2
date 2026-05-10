# Qt-2

Qt lab — 2D draggable shapes canvas. Two separate implementations (lab7, lab72).

**lab7** — manual rendering via `paintEvent` / `mousePressEvent` / `mouseMoveEvent` / `mouseReleaseEvent`. Shapes (rectangle, triangle, ellipse) inherit from `Shape`; clicking a shape activates it (brings to front); only the active shape moves under the cursor. Bounding box used for hit detection.

**lab72** — same task using `QGraphicsScene` / `QGraphicsView`. Each shape is a `QGraphicsItem` subclass (`RectangleItem`, `EllipseItem`, `TriangleItem`) with exact boundary control. `ShapeScene` manages the scene.

**Files:** `figure.h` — base for lab7; `shapescene.h` — scene for lab72.
