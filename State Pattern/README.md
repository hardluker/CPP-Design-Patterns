<p><strong><span style="font-size: 26px;">The State Pattern</span></strong></p>
<p>This is a clear example of the &quot;Open Closed Principle.&quot; This means our classes are open for extension and closed for modification</p>
<p>In this specific implementation, we have several tools for a paint application.</p>
<p>The Canvas class is composed of Tool objects. The tool class is abstract. All the specific tools are children of the Tool class. The Tool is passed through the functions through polymorphism.</p>
<p>Essentially the child-specific implementation of the function is called. This is different from the strategy pattern in that the state of the object determines its functions. In the strategy pattern, the central class uses multiple subclass methods that are not dependent on a specific state. You can use multiple different ones at a time.</p>
