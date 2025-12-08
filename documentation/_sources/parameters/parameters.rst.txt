##########################
Parameters Guide
##########################

Launching an application requires an executable of the required solver, and a parameters file (with extension ``.prm``). The parameter file controls all aspects of Lethe and drives the simulation. The parameter file is structured with different subsections, as explained in the following: 

.. toctree::
    :maxdepth: 1
    :glob:
    :titlesonly:

    rpt/rpt

.. note::
	* The parameters are established one by one using the following syntax: ``set parameter name = value``
	* Comments are preceded by the sharp symbol (e.g. ``#comment``)
	* The parameter file format has a sanity checking mechanism in place and will throw an error if an unknown parameter or an invalid value is entered.
