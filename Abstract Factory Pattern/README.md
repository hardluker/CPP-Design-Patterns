<p><strong><span style="font-size: 24px;">The Abstract Factory Pattern</span></strong></p>
<p><br></p>
<p>The abstract factory method is another fun design pattern. This is using an abstract interface to create families of objects.</p>
<p>In this project it is designed to simulate different themes of widget and having the widget factory create these widgets through a polymorphic argument of the specific factory type.</p>
<p>Classes are the following:</p>
<ul>
    <li>WidgetFactory: This is an abstract class that contains the methods for createButton and createTextBox as these are the only two widgets we have.</li>
    <li>AntWidgetFactory: This is a child class of WidgetFactory. In the inherited create methods it creates and returns the specific themed buttons and textboxes.</li>
    <li>MaterialWidgetFactory: This class works exactly the same as the AntWidget factory but with the material themes objects.</li>
    <li>Widget: This class is an abstraction of all the different types of widgets (TextBoxes, Buttons etc...)</li>
    <li>ContactForm: This class is dependent on the WidgetFactory class as it passes it through it&apos;s own render method. When it passes the object through, it creates the buttons and textbox without needing the logic for a specific theme as this is all separately contained in the specific factory&apos;s logic.</li>
</ul>
<p>This is an excellent design pattern when you want to create objects that have different variations depending on a setting or some</p>
<p><br></p>
<p><br></p>