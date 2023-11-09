<p><strong><span style="font-size: 26px;">The Visitor Pattern</span></strong></p>
<p>The Visitor pattern is great to implement when you have a stable object structure but would like to add and remove operations on these objects regularly.</p>
<p>Essentially you have a &quot;visitor&quot; that centrally contains all the logic for operations on the specific objects. Therefore you can just update and add new &quot;visitor&quot; in one place allowing an easy implementation of new logic without having to modify every class related.</p>
<p>This project is to simulate the behavior of syntax highlighting etc... within an html document.</p>
<p>The classes in the project are the following:</p>
<p><strong>HtmlDocument:&nbsp;</strong>This class contains all the nodes in a list. It can add nodes. It can execute the operations contained with in the nodes by iterating through the list.</p>
<p><strong>HtmlNode:&nbsp;</strong>This is an abstract class. The Document contains these and the child behaviors are implemented through polymorphism.&nbsp;</p>
<p><strong>HeadingNode:&nbsp;</strong>This class is a child of HtmlNode. It contains the method for executing the operation. Within the method it calls the operation that it is using and passes itself through it.</p>
<p><strong>AnchorNode:&nbsp;</strong>This class works exactly the same as the HeadingNode.</p>
<p><strong>Operation:&nbsp;</strong>This is the abstract class that is used by the HtmlNode. It contains an apply() method for each object type to use.</p>
<p><strong>Highlight Operation:&nbsp;</strong>This class inherits and specifies the logic for the operation.apply() highlight specifically.</p>
<p><strong>PlainTextOperation:&nbsp;</strong>This class is essentially the same as the Highlight Operation.</p>
<p><br></p>