import java.util.Objects;

/** Minimal assertion helper so the suite runs without external dependencies. */
final class TestUtil {

    private static int checks = 0;
    private static int failures = 0;

    private TestUtil() {}

    static void expectEquals(String name, Object actual, Object expected) {
        checks++;
        if (Objects.equals(actual, expected)) {
            return;
        }
        failures++;
        System.err.println("  FAIL " + name + ": expected " + expected + ", got " + actual);
    }

    static void report(String suite) {
        if (failures > 0) {
            System.err.println(suite + ": " + failures + " of " + checks + " checks failed");
            System.exit(1);
        }
        System.out.println(suite + ": " + checks + " checks passed");
    }
}
