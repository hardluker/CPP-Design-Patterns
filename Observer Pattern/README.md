<p><strong><span style="font-size: 26px;">The Observer Pattern</span></strong></p>
<p>This design pattern is used when you have objects that need to be notified whenever a value changes.</p>
<p>In this specific example, you have the following:</p>
<p>Subject: This is a parent class that provides the methods for adding, removing, and notifying observers of changes.</p>
<p>DataSource: This child class contains the value. When the value is changed it calls the parent method to notify the observers.&nbsp;</p>
<p>Observer: This is a purely abstract class for the sake of polymorphism in the Subject class. Allowing us to pass the specific concrete observers through the methods.</p>
<p>SpreadSheet / Chart: These are the concrete observers. This is to simulate a chart and spreadsheet updating automatically as a value changes. &nbsp;These objects will be composed of the DataSource pointer to be able to reference the current value during the update method.</p>
<p>This is a very useful design pattern that allows for dynamic updating.</p>