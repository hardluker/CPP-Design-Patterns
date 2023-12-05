<p><strong><span style="font-size: 24px;">The Builder Pattern</span></strong></p>
<p><br></p>
<p>The builder pattern is used to separate the construction of an object from it&apos;s representation.</p>
<p>In this, the Presentation class is dependent on the abstract PresentationBuilder class. The subclasses then implement the logic to actually build and return the specific object.</p>
<p><br></p>
<p>Classes in the project are as follows:</p>
<ul>
    <li>Slide: This is a class that represents a slide and just contains a string for simplicity purposes.</li>
    <li>Presentation: This is the class that is the center of everything. This class contains the slides and invokes the abstract builder when exporting the file and simply a file format (builder type) is passed through the export method.</li>
    <li>Presentation Builder: This is the abstract class that is used as representation that is separate from the object creation.</li>
    <li>MovieBuilder: This is a concrete implementation that contains the Movie object, adds to it, and then returns it.</li>
    <li>PdfBuilder: This is a concrete implementation that contains the PdfDocument object, adds to it, and then returns it.</li>
    <li>PdfDocument: This is an object that simply contains the slides as pages.</li>
    <li>Movie: This is an object that adds frames as the slides and takes a duration.</li>
</ul>
<p>A very useful class and a common example of this is exporting to specific file types in an application.</p>
<p><br></p>
<p><br></p>