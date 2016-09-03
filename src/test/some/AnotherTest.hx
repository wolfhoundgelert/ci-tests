package test.some;
import massive.munit.Assert;
import some.Another;

/**
 * ...
 * @author gelert
 */
class AnotherTest {

	@Test
	public function triple() {
		Assert.areEqual(9, new Another().triple(3));
	}
}