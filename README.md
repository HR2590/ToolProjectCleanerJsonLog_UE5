<p><span class="Y2IQFc" lang="en">C++ Blueprint Library tool that lists all assets in the project that have dependencies following this format:</span></p>
<p><span class="Y2IQFc" lang="en">This tool automatically starts when the editor is Open, the exported file address can be change.</span></p>
<div class="oSioSc">
<div id="tw-target">
<div id="kAz1tf" class="g9WsWb PZPZlf" data-attrid="tw-targetArea" data-entityname="Google Translate">
<div id="tw-target-text-container" class="tw-ta-container tw-nfl" tabindex="0">
<pre class="tw-data-text tw-text-large tw-ta" dir="ltr" style="text-align: left;" data-placeholder="Traducci&oacute;n" data-ved="2ahUKEwi4jrnszY6OAxVwJNAFHVHyPLgQ3ewLegQICRAU"><span class="Y2IQFc" lang="en">Asset Root [ROOT]
|- Dependency
|- Dependency
|- Subdependency<br />
▪ AssetRoot is any asset that is not referenced
▪ Ignore assets that have no dependencies or references
▪ Make the function fire when the editor starts (Running Blueprints at Editor Startup)
▪ Export this list to the Saved/Logs folder as RefLogOutput_&lt;date&gt;.log [e.g.,
RefLogOut_20231017.log]
▪ Display a message (FMessageDialog) or a confirmation window
<br />Lists all StaticMesh objects that have:
▪ A The number of Tris exceeded 10k.
▪ More than 5 material slots.
▪ Occupies an absolute space of more than 6,000 units.</span></pre>
<pre id="tw-target-text" class="tw-data-text tw-text-large tw-ta" dir="ltr" style="text-align: left;" data-placeholder="Traducci&oacute;n" data-ved="2ahUKEwi4jrnszY6OAxVwJNAFHVHyPLgQ3ewLegQICRAU"><span class="Y2IQFc" lang="en">▪Export these SMs to the Saved/Rework folder in the project directory.</span></pre>
<pre id="tw-target-text" class="tw-data-text tw-text-large tw-ta" dir="ltr" style="text-align: left;" data-placeholder="Traducci&oacute;n" data-ved="2ahUKEwi4jrnszY6OAxVwJNAFHVHyPLgQ3ewLegQICRAU"><span class="Y2IQFc" lang="en">▪Create a JSON file indicating the problem for each asset.</span></pre>
</div>
<div id="tw-target-rmn-container" class="tw-target-rmn tw-ta-container tw-nfl" tabindex="0">&nbsp;</div>
</div>
</div>
</div>
