import massive.munit.TestSuite;

import ExampleTest;
import some.AnotherTest;
import some.SomeTest;

/**
 * Auto generated Test Suite for MassiveUnit.
 * Refer to munit command line tool for more information (haxelib run munit)
 */

class TestSuite extends massive.munit.TestSuite
{		

	public function new()
	{
		super();

		add(ExampleTest);
		add(some.AnotherTest);
		add(some.SomeTest);
	}
}
