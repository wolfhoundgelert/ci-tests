package test.some;

import massive.munit.Assert;
import some.Some;

/**
 * ...
 * @author gelert
 */
class SomeTest {
	
	@Test
	public function double() {
		Assert.areEqual(6, Some.double(3));
	}
}