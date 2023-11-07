<p style="text-align: left;"><strong><span style="font-size: 26px;">Iterator Design Pattern</span></strong></p>
<p style="text-align: left;">This implementation of the iterator design patterns uses a BrowseHistory, Iterator(abstract), ListIterator, and an ArrayIterator.</p>
<p style="text-align: left;">The ListIterator and ArrayIterator are nested within the BrowseHistory to provide access to its members.</p>
<p style="text-align: left;">The Iterator class is abstract. In C++ this is referred to as a class containing pure virtual methods. This serves the same purpose as an interface in java.</p>
<p style="text-align: left;">The benefit of this design pattern is you can modify the underlying data structure while the user interaction remains exactly the same.</p>
<p style="text-align: left;">This example implements both a fixed array and a vector(list) data structure utilization.</p>
