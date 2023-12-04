<p><strong><span style="font-size: 24px;">The Factory Method Pattern</span></strong></p>
<p><br></p>
<p>The factory method pattern is where the creation of an object is deferred to a subclass. This is typically done within an overridden protected method.</p>
<p>In this project we have the following classes:</p>
<ul>
    <li><strong>ViewEngine</strong>: This is an abstract class that contains the method for rendering an engine.</li>
    <li><strong>SharpEngine</strong>: This is a childclass of ViewEngine that contains the specific logic for rendering a sharp with a sharpengine. It returns the data.</li>
    <li><strong>MatchaEngine</strong>: This is a childclass of ViewEngine that contains the specific logic for rendering a sharp with a MatchaEngine. It returns the data.</li>
    <li><strong>Controller</strong>: This is a class that contains default logic for rendering by creating and containing a MatchaEngine. It has the protected class creatViewEngine that can be overriden or &quot;deferred&quot; to a subclass for creation.</li>
    <li><strong>SharpController:&nbsp;</strong>This is the class that overrides and is the center of the factory method pattern. It overrides the createViewEngine logic and instead will force the render to use a sharpEngine instead.</li>
    <li><strong>ProductsController</strong>: This is the actual controller the user will use. It can inherit either the controller class or the SharpController class. Depending on the class it inherits from will determine which engine ultimately gets created and therefore how the data is rendered.</li>
</ul>
<p><br></p>
<p><br></p>