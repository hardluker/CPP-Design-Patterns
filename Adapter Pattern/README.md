<p><strong><span style="font-size: 24px;">The Adapter Pattern</span></strong></p>
<p>This is a simple structural pattern. It is used to adapt an interface of an object to a different form.</p>
<p>This project contains the following classes:</p>
<ul>
    <li><strong>Image:&nbsp;</strong>This is an empty class that is used to represent an image.</li>
    <li><strong>ImageView</strong>: This is a class that contains the images and applies the filters.</li>
    <li><strong>Filter:</strong> This is the abstract class that contains the abstract logic for applying a filter.</li>
    <li><strong>Caramel:&nbsp;</strong>This is an independent class that contains logic for applying a filter. However, it does not match up with the filter class itself. Therefore an adapter will be needed.</li>
    <li><strong>CaramelFilter:&nbsp;</strong>This class functions as the adapter between filter and caramel. In the apply method of this class it contains the logic of the Caramel class.</li>
</ul>