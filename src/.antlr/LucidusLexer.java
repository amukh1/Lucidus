// Generated from /home/amukh1/Lucidus/src/LucidusLexer.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class LucidusLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		AND=1, OR=2, NOT=3, EQ=4, PLUS=5, SUB=6, STAR=7, DIV=8, OPAREN=9, CPAREN=10, 
		COMMA=11, SEMI=12, DEF=13, STRUCT=14, DECL=15, ARROW=16, GTR=17, LESS=18, 
		DCOL=19, PTR=20, COL=21, RETURN=22, LABEL=23, GOTO=24, DOT=25, DOTS=26, 
		IF=27, IMPRT=28, ELSE=29, LCURLY=30, RCURLY=31, INT=32, FLOAT=33, ID=34, 
		WS=35, COMMENT=36, STRING=37;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", "CPAREN", 
			"COMMA", "SEMI", "DEF", "STRUCT", "DECL", "ARROW", "GTR", "LESS", "DCOL", 
			"PTR", "COL", "RETURN", "LABEL", "GOTO", "DOT", "DOTS", "IF", "IMPRT", 
			"ELSE", "LCURLY", "RCURLY", "INT", "FLOAT", "ID", "WS", "COMMENT", "STRING"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'&&'", "'||'", "'!'", "'='", "'+'", "'-'", "'*'", "'/'", "'('", 
			"')'", "','", "';'", "'def'", "'struct'", "'dec'", "'->'", "'>'", "'<'", 
			"':='", "'ptr'", "':'", "'return'", "'label'", "'goto'", "'.'", "'...'", 
			"'if'", "'import'", "'else'", "'{'", "'}'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", 
			"CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", "ARROW", "GTR", "LESS", 
			"DCOL", "PTR", "COL", "RETURN", "LABEL", "GOTO", "DOT", "DOTS", "IF", 
			"IMPRT", "ELSE", "LCURLY", "RCURLY", "INT", "FLOAT", "ID", "WS", "COMMENT", 
			"STRING"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public LucidusLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "LucidusLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000%\u00ea\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
		"\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004"+
		"\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007"+
		"\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b"+
		"\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002"+
		"\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002"+
		"\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002"+
		"\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002"+
		"\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002"+
		"\u001b\u0007\u001b\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002"+
		"\u001e\u0007\u001e\u0002\u001f\u0007\u001f\u0002 \u0007 \u0002!\u0007"+
		"!\u0002\"\u0007\"\u0002#\u0007#\u0002$\u0007$\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001"+
		"\t\u0001\t\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0014\u0001\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001"+
		"\u0017\u0001\u0017\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0001"+
		"\u0019\u0001\u0019\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001b\u0001"+
		"\u001b\u0001\u001b\u0001\u001b\u0001\u001b\u0001\u001b\u0001\u001b\u0001"+
		"\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001d\u0001"+
		"\u001d\u0001\u001e\u0001\u001e\u0001\u001f\u0003\u001f\u00b1\b\u001f\u0001"+
		"\u001f\u0004\u001f\u00b4\b\u001f\u000b\u001f\f\u001f\u00b5\u0001 \u0003"+
		" \u00b9\b \u0001 \u0004 \u00bc\b \u000b \f \u00bd\u0001 \u0001 \u0005"+
		" \u00c2\b \n \f \u00c5\t \u0001!\u0001!\u0005!\u00c9\b!\n!\f!\u00cc\t"+
		"!\u0001\"\u0004\"\u00cf\b\"\u000b\"\f\"\u00d0\u0001\"\u0001\"\u0001#\u0001"+
		"#\u0001#\u0001#\u0005#\u00d9\b#\n#\f#\u00dc\t#\u0001#\u0001#\u0001#\u0001"+
		"#\u0001$\u0001$\u0005$\u00e4\b$\n$\f$\u00e7\t$\u0001$\u0001$\u0002\u00da"+
		"\u00e5\u0000%\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005"+
		"\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019"+
		"\r\u001b\u000e\u001d\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0014)\u0015"+
		"+\u0016-\u0017/\u00181\u00193\u001a5\u001b7\u001c9\u001d;\u001e=\u001f"+
		"? A!C\"E#G$I%\u0001\u0000\u0004\u0001\u000009\u0003\u0000AZ__az\u0004"+
		"\u000009AZ__az\u0003\u0000\t\n\f\r  \u00f2\u0000\u0001\u0001\u0000\u0000"+
		"\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000"+
		"\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000"+
		"\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000"+
		"\u000f\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000\u0000\u0000"+
		"\u0013\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000\u0000\u0000"+
		"\u0017\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000\u0000\u0000"+
		"\u001b\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000\u0000\u0000\u0000"+
		"\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000\u0000\u0000#\u0001"+
		"\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000\'\u0001\u0000"+
		"\u0000\u0000\u0000)\u0001\u0000\u0000\u0000\u0000+\u0001\u0000\u0000\u0000"+
		"\u0000-\u0001\u0000\u0000\u0000\u0000/\u0001\u0000\u0000\u0000\u00001"+
		"\u0001\u0000\u0000\u0000\u00003\u0001\u0000\u0000\u0000\u00005\u0001\u0000"+
		"\u0000\u0000\u00007\u0001\u0000\u0000\u0000\u00009\u0001\u0000\u0000\u0000"+
		"\u0000;\u0001\u0000\u0000\u0000\u0000=\u0001\u0000\u0000\u0000\u0000?"+
		"\u0001\u0000\u0000\u0000\u0000A\u0001\u0000\u0000\u0000\u0000C\u0001\u0000"+
		"\u0000\u0000\u0000E\u0001\u0000\u0000\u0000\u0000G\u0001\u0000\u0000\u0000"+
		"\u0000I\u0001\u0000\u0000\u0000\u0001K\u0001\u0000\u0000\u0000\u0003N"+
		"\u0001\u0000\u0000\u0000\u0005Q\u0001\u0000\u0000\u0000\u0007S\u0001\u0000"+
		"\u0000\u0000\tU\u0001\u0000\u0000\u0000\u000bW\u0001\u0000\u0000\u0000"+
		"\rY\u0001\u0000\u0000\u0000\u000f[\u0001\u0000\u0000\u0000\u0011]\u0001"+
		"\u0000\u0000\u0000\u0013_\u0001\u0000\u0000\u0000\u0015a\u0001\u0000\u0000"+
		"\u0000\u0017c\u0001\u0000\u0000\u0000\u0019e\u0001\u0000\u0000\u0000\u001b"+
		"i\u0001\u0000\u0000\u0000\u001dp\u0001\u0000\u0000\u0000\u001ft\u0001"+
		"\u0000\u0000\u0000!w\u0001\u0000\u0000\u0000#y\u0001\u0000\u0000\u0000"+
		"%{\u0001\u0000\u0000\u0000\'~\u0001\u0000\u0000\u0000)\u0082\u0001\u0000"+
		"\u0000\u0000+\u0084\u0001\u0000\u0000\u0000-\u008b\u0001\u0000\u0000\u0000"+
		"/\u0091\u0001\u0000\u0000\u00001\u0096\u0001\u0000\u0000\u00003\u0098"+
		"\u0001\u0000\u0000\u00005\u009c\u0001\u0000\u0000\u00007\u009f\u0001\u0000"+
		"\u0000\u00009\u00a6\u0001\u0000\u0000\u0000;\u00ab\u0001\u0000\u0000\u0000"+
		"=\u00ad\u0001\u0000\u0000\u0000?\u00b0\u0001\u0000\u0000\u0000A\u00b8"+
		"\u0001\u0000\u0000\u0000C\u00c6\u0001\u0000\u0000\u0000E\u00ce\u0001\u0000"+
		"\u0000\u0000G\u00d4\u0001\u0000\u0000\u0000I\u00e1\u0001\u0000\u0000\u0000"+
		"KL\u0005&\u0000\u0000LM\u0005&\u0000\u0000M\u0002\u0001\u0000\u0000\u0000"+
		"NO\u0005|\u0000\u0000OP\u0005|\u0000\u0000P\u0004\u0001\u0000\u0000\u0000"+
		"QR\u0005!\u0000\u0000R\u0006\u0001\u0000\u0000\u0000ST\u0005=\u0000\u0000"+
		"T\b\u0001\u0000\u0000\u0000UV\u0005+\u0000\u0000V\n\u0001\u0000\u0000"+
		"\u0000WX\u0005-\u0000\u0000X\f\u0001\u0000\u0000\u0000YZ\u0005*\u0000"+
		"\u0000Z\u000e\u0001\u0000\u0000\u0000[\\\u0005/\u0000\u0000\\\u0010\u0001"+
		"\u0000\u0000\u0000]^\u0005(\u0000\u0000^\u0012\u0001\u0000\u0000\u0000"+
		"_`\u0005)\u0000\u0000`\u0014\u0001\u0000\u0000\u0000ab\u0005,\u0000\u0000"+
		"b\u0016\u0001\u0000\u0000\u0000cd\u0005;\u0000\u0000d\u0018\u0001\u0000"+
		"\u0000\u0000ef\u0005d\u0000\u0000fg\u0005e\u0000\u0000gh\u0005f\u0000"+
		"\u0000h\u001a\u0001\u0000\u0000\u0000ij\u0005s\u0000\u0000jk\u0005t\u0000"+
		"\u0000kl\u0005r\u0000\u0000lm\u0005u\u0000\u0000mn\u0005c\u0000\u0000"+
		"no\u0005t\u0000\u0000o\u001c\u0001\u0000\u0000\u0000pq\u0005d\u0000\u0000"+
		"qr\u0005e\u0000\u0000rs\u0005c\u0000\u0000s\u001e\u0001\u0000\u0000\u0000"+
		"tu\u0005-\u0000\u0000uv\u0005>\u0000\u0000v \u0001\u0000\u0000\u0000w"+
		"x\u0005>\u0000\u0000x\"\u0001\u0000\u0000\u0000yz\u0005<\u0000\u0000z"+
		"$\u0001\u0000\u0000\u0000{|\u0005:\u0000\u0000|}\u0005=\u0000\u0000}&"+
		"\u0001\u0000\u0000\u0000~\u007f\u0005p\u0000\u0000\u007f\u0080\u0005t"+
		"\u0000\u0000\u0080\u0081\u0005r\u0000\u0000\u0081(\u0001\u0000\u0000\u0000"+
		"\u0082\u0083\u0005:\u0000\u0000\u0083*\u0001\u0000\u0000\u0000\u0084\u0085"+
		"\u0005r\u0000\u0000\u0085\u0086\u0005e\u0000\u0000\u0086\u0087\u0005t"+
		"\u0000\u0000\u0087\u0088\u0005u\u0000\u0000\u0088\u0089\u0005r\u0000\u0000"+
		"\u0089\u008a\u0005n\u0000\u0000\u008a,\u0001\u0000\u0000\u0000\u008b\u008c"+
		"\u0005l\u0000\u0000\u008c\u008d\u0005a\u0000\u0000\u008d\u008e\u0005b"+
		"\u0000\u0000\u008e\u008f\u0005e\u0000\u0000\u008f\u0090\u0005l\u0000\u0000"+
		"\u0090.\u0001\u0000\u0000\u0000\u0091\u0092\u0005g\u0000\u0000\u0092\u0093"+
		"\u0005o\u0000\u0000\u0093\u0094\u0005t\u0000\u0000\u0094\u0095\u0005o"+
		"\u0000\u0000\u00950\u0001\u0000\u0000\u0000\u0096\u0097\u0005.\u0000\u0000"+
		"\u00972\u0001\u0000\u0000\u0000\u0098\u0099\u0005.\u0000\u0000\u0099\u009a"+
		"\u0005.\u0000\u0000\u009a\u009b\u0005.\u0000\u0000\u009b4\u0001\u0000"+
		"\u0000\u0000\u009c\u009d\u0005i\u0000\u0000\u009d\u009e\u0005f\u0000\u0000"+
		"\u009e6\u0001\u0000\u0000\u0000\u009f\u00a0\u0005i\u0000\u0000\u00a0\u00a1"+
		"\u0005m\u0000\u0000\u00a1\u00a2\u0005p\u0000\u0000\u00a2\u00a3\u0005o"+
		"\u0000\u0000\u00a3\u00a4\u0005r\u0000\u0000\u00a4\u00a5\u0005t\u0000\u0000"+
		"\u00a58\u0001\u0000\u0000\u0000\u00a6\u00a7\u0005e\u0000\u0000\u00a7\u00a8"+
		"\u0005l\u0000\u0000\u00a8\u00a9\u0005s\u0000\u0000\u00a9\u00aa\u0005e"+
		"\u0000\u0000\u00aa:\u0001\u0000\u0000\u0000\u00ab\u00ac\u0005{\u0000\u0000"+
		"\u00ac<\u0001\u0000\u0000\u0000\u00ad\u00ae\u0005}\u0000\u0000\u00ae>"+
		"\u0001\u0000\u0000\u0000\u00af\u00b1\u0003\u000b\u0005\u0000\u00b0\u00af"+
		"\u0001\u0000\u0000\u0000\u00b0\u00b1\u0001\u0000\u0000\u0000\u00b1\u00b3"+
		"\u0001\u0000\u0000\u0000\u00b2\u00b4\u0007\u0000\u0000\u0000\u00b3\u00b2"+
		"\u0001\u0000\u0000\u0000\u00b4\u00b5\u0001\u0000\u0000\u0000\u00b5\u00b3"+
		"\u0001\u0000\u0000\u0000\u00b5\u00b6\u0001\u0000\u0000\u0000\u00b6@\u0001"+
		"\u0000\u0000\u0000\u00b7\u00b9\u0003\u000b\u0005\u0000\u00b8\u00b7\u0001"+
		"\u0000\u0000\u0000\u00b8\u00b9\u0001\u0000\u0000\u0000\u00b9\u00bb\u0001"+
		"\u0000\u0000\u0000\u00ba\u00bc\u0007\u0000\u0000\u0000\u00bb\u00ba\u0001"+
		"\u0000\u0000\u0000\u00bc\u00bd\u0001\u0000\u0000\u0000\u00bd\u00bb\u0001"+
		"\u0000\u0000\u0000\u00bd\u00be\u0001\u0000\u0000\u0000\u00be\u00bf\u0001"+
		"\u0000\u0000\u0000\u00bf\u00c3\u0005.\u0000\u0000\u00c0\u00c2\u0007\u0000"+
		"\u0000\u0000\u00c1\u00c0\u0001\u0000\u0000\u0000\u00c2\u00c5\u0001\u0000"+
		"\u0000\u0000\u00c3\u00c1\u0001\u0000\u0000\u0000\u00c3\u00c4\u0001\u0000"+
		"\u0000\u0000\u00c4B\u0001\u0000\u0000\u0000\u00c5\u00c3\u0001\u0000\u0000"+
		"\u0000\u00c6\u00ca\u0007\u0001\u0000\u0000\u00c7\u00c9\u0007\u0002\u0000"+
		"\u0000\u00c8\u00c7\u0001\u0000\u0000\u0000\u00c9\u00cc\u0001\u0000\u0000"+
		"\u0000\u00ca\u00c8\u0001\u0000\u0000\u0000\u00ca\u00cb\u0001\u0000\u0000"+
		"\u0000\u00cbD\u0001\u0000\u0000\u0000\u00cc\u00ca\u0001\u0000\u0000\u0000"+
		"\u00cd\u00cf\u0007\u0003\u0000\u0000\u00ce\u00cd\u0001\u0000\u0000\u0000"+
		"\u00cf\u00d0\u0001\u0000\u0000\u0000\u00d0\u00ce\u0001\u0000\u0000\u0000"+
		"\u00d0\u00d1\u0001\u0000\u0000\u0000\u00d1\u00d2\u0001\u0000\u0000\u0000"+
		"\u00d2\u00d3\u0006\"\u0000\u0000\u00d3F\u0001\u0000\u0000\u0000\u00d4"+
		"\u00d5\u0005/\u0000\u0000\u00d5\u00d6\u0005/\u0000\u0000\u00d6\u00da\u0001"+
		"\u0000\u0000\u0000\u00d7\u00d9\t\u0000\u0000\u0000\u00d8\u00d7\u0001\u0000"+
		"\u0000\u0000\u00d9\u00dc\u0001\u0000\u0000\u0000\u00da\u00db\u0001\u0000"+
		"\u0000\u0000\u00da\u00d8\u0001\u0000\u0000\u0000\u00db\u00dd\u0001\u0000"+
		"\u0000\u0000\u00dc\u00da\u0001\u0000\u0000\u0000\u00dd\u00de\u0005\n\u0000"+
		"\u0000\u00de\u00df\u0001\u0000\u0000\u0000\u00df\u00e0\u0006#\u0000\u0000"+
		"\u00e0H\u0001\u0000\u0000\u0000\u00e1\u00e5\u0005\"\u0000\u0000\u00e2"+
		"\u00e4\t\u0000\u0000\u0000\u00e3\u00e2\u0001\u0000\u0000\u0000\u00e4\u00e7"+
		"\u0001\u0000\u0000\u0000\u00e5\u00e6\u0001\u0000\u0000\u0000\u00e5\u00e3"+
		"\u0001\u0000\u0000\u0000\u00e6\u00e8\u0001\u0000\u0000\u0000\u00e7\u00e5"+
		"\u0001\u0000\u0000\u0000\u00e8\u00e9\u0005\"\u0000\u0000\u00e9J\u0001"+
		"\u0000\u0000\u0000\n\u0000\u00b0\u00b5\u00b8\u00bd\u00c3\u00ca\u00d0\u00da"+
		"\u00e5\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}