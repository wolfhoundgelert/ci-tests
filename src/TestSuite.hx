import massive.munit.TestSuite;

import ExampleTest;
import test.some.AnotherOneTest;
import test.some.AnotherTest;
import test.some.SomeTest;

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
		add(test.some.AnotherOneTest);
		add(test.some.AnotherTest);
		add(test.some.SomeTest);
	}
}
