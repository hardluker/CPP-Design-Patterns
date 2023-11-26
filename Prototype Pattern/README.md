<p><strong><span style="font-size: 24px;">The Prototype Pattern</span></strong></p>
<p><br></p>
<p>The prototype pattern is a simple pattern where you have a client that is dependent on an abstract object for creating clones of the children.</p>
<p>In this project we have 3 classes:</p>
<ul>
    <li><strong>ContextMenu:&nbsp;</strong>This is the &quot;client&quot; that interacts and is dependent on the parent &quot;component&quot; or prototype.</li>
    <li><strong>Component:&nbsp;</strong>This is the parent class that is passed through the methods of the ContextMenu</li>
    <li><strong>Circle:&nbsp;</strong>This is an example of a child class that contains the actual logic for cloning itself. It then returns a copy of itself to the in the method. This information is passed to the ContextMenu and the clone is successfully created.</li>
</ul>
<p>The great thing about this implementation is that the specific components contain the logic for cloning. As opposed to the ContextMenu containing the logic. This way we are not violating the open closed principle.</p>