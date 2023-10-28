// Generated from /home/amukh1/Lucidus/LucidusLexer.g4 by ANTLR 4.13.1
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
		COMMA=11, SEMI=12, DEF=13, STRUCT=14, DECL=15, ARROW=16, DCOL=17, PTR=18, 
		COL=19, RETURN=20, DOT=21, DOTS=22, LCURLY=23, RCURLY=24, INT=25, ID=26, 
		WS=27, COMMENT=28, STRING=29;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", "CPAREN", 
			"COMMA", "SEMI", "DEF", "STRUCT", "DECL", "ARROW", "DCOL", "PTR", "COL", 
			"RETURN", "DOT", "DOTS", "LCURLY", "RCURLY", "INT", "ID", "WS", "COMMENT", 
			"STRING"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'&&'", "'||'", "'!'", "'='", "'+'", "'-'", "'*'", "'/'", "'('", 
			"')'", "','", "';'", "'def'", "'struct'", "'dec'", "'->'", "':='", "'ptr'", 
			"':'", "'return'", "'.'", "'...'", "'{'", "'}'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", 
			"CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", "ARROW", "DCOL", 
			"PTR", "COL", "RETURN", "DOT", "DOTS", "LCURLY", "RCURLY", "INT", "ID", 
			"WS", "COMMENT", "STRING"
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
		"\u0004\u0000\u001d\u00ad\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017"+
		"\u0002\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a"+
		"\u0002\u001b\u0007\u001b\u0002\u001c\u0007\u001c\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001"+
		"\t\u0001\t\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001"+
		"\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0014\u0001"+
		"\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0016\u0001"+
		"\u0016\u0001\u0017\u0001\u0017\u0001\u0018\u0003\u0018\u0083\b\u0018\u0001"+
		"\u0018\u0004\u0018\u0086\b\u0018\u000b\u0018\f\u0018\u0087\u0001\u0019"+
		"\u0001\u0019\u0005\u0019\u008c\b\u0019\n\u0019\f\u0019\u008f\t\u0019\u0001"+
		"\u001a\u0004\u001a\u0092\b\u001a\u000b\u001a\f\u001a\u0093\u0001\u001a"+
		"\u0001\u001a\u0001\u001b\u0001\u001b\u0001\u001b\u0001\u001b\u0005\u001b"+
		"\u009c\b\u001b\n\u001b\f\u001b\u009f\t\u001b\u0001\u001b\u0001\u001b\u0001"+
		"\u001b\u0001\u001b\u0001\u001c\u0001\u001c\u0005\u001c\u00a7\b\u001c\n"+
		"\u001c\f\u001c\u00aa\t\u001c\u0001\u001c\u0001\u001c\u0002\u009d\u00a8"+
		"\u0000\u001d\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b"+
		"\u0006\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b"+
		"\u000e\u001d\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0014)\u0015+\u0016"+
		"-\u0017/\u00181\u00193\u001a5\u001b7\u001c9\u001d\u0001\u0000\u0004\u0001"+
		"\u000009\u0003\u0000AZ__az\u0004\u000009AZ__az\u0003\u0000\t\n\f\r  \u00b2"+
		"\u0000\u0001\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000"+
		"\u0000\u0005\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000"+
		"\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000"+
		"\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011"+
		"\u0001\u0000\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015"+
		"\u0001\u0000\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019"+
		"\u0001\u0000\u0000\u0000\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d"+
		"\u0001\u0000\u0000\u0000\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001"+
		"\u0000\u0000\u0000\u0000#\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000"+
		"\u0000\u0000\'\u0001\u0000\u0000\u0000\u0000)\u0001\u0000\u0000\u0000"+
		"\u0000+\u0001\u0000\u0000\u0000\u0000-\u0001\u0000\u0000\u0000\u0000/"+
		"\u0001\u0000\u0000\u0000\u00001\u0001\u0000\u0000\u0000\u00003\u0001\u0000"+
		"\u0000\u0000\u00005\u0001\u0000\u0000\u0000\u00007\u0001\u0000\u0000\u0000"+
		"\u00009\u0001\u0000\u0000\u0000\u0001;\u0001\u0000\u0000\u0000\u0003>"+
		"\u0001\u0000\u0000\u0000\u0005A\u0001\u0000\u0000\u0000\u0007C\u0001\u0000"+
		"\u0000\u0000\tE\u0001\u0000\u0000\u0000\u000bG\u0001\u0000\u0000\u0000"+
		"\rI\u0001\u0000\u0000\u0000\u000fK\u0001\u0000\u0000\u0000\u0011M\u0001"+
		"\u0000\u0000\u0000\u0013O\u0001\u0000\u0000\u0000\u0015Q\u0001\u0000\u0000"+
		"\u0000\u0017S\u0001\u0000\u0000\u0000\u0019U\u0001\u0000\u0000\u0000\u001b"+
		"Y\u0001\u0000\u0000\u0000\u001d`\u0001\u0000\u0000\u0000\u001fd\u0001"+
		"\u0000\u0000\u0000!g\u0001\u0000\u0000\u0000#j\u0001\u0000\u0000\u0000"+
		"%n\u0001\u0000\u0000\u0000\'p\u0001\u0000\u0000\u0000)w\u0001\u0000\u0000"+
		"\u0000+y\u0001\u0000\u0000\u0000-}\u0001\u0000\u0000\u0000/\u007f\u0001"+
		"\u0000\u0000\u00001\u0082\u0001\u0000\u0000\u00003\u0089\u0001\u0000\u0000"+
		"\u00005\u0091\u0001\u0000\u0000\u00007\u0097\u0001\u0000\u0000\u00009"+
		"\u00a4\u0001\u0000\u0000\u0000;<\u0005&\u0000\u0000<=\u0005&\u0000\u0000"+
		"=\u0002\u0001\u0000\u0000\u0000>?\u0005|\u0000\u0000?@\u0005|\u0000\u0000"+
		"@\u0004\u0001\u0000\u0000\u0000AB\u0005!\u0000\u0000B\u0006\u0001\u0000"+
		"\u0000\u0000CD\u0005=\u0000\u0000D\b\u0001\u0000\u0000\u0000EF\u0005+"+
		"\u0000\u0000F\n\u0001\u0000\u0000\u0000GH\u0005-\u0000\u0000H\f\u0001"+
		"\u0000\u0000\u0000IJ\u0005*\u0000\u0000J\u000e\u0001\u0000\u0000\u0000"+
		"KL\u0005/\u0000\u0000L\u0010\u0001\u0000\u0000\u0000MN\u0005(\u0000\u0000"+
		"N\u0012\u0001\u0000\u0000\u0000OP\u0005)\u0000\u0000P\u0014\u0001\u0000"+
		"\u0000\u0000QR\u0005,\u0000\u0000R\u0016\u0001\u0000\u0000\u0000ST\u0005"+
		";\u0000\u0000T\u0018\u0001\u0000\u0000\u0000UV\u0005d\u0000\u0000VW\u0005"+
		"e\u0000\u0000WX\u0005f\u0000\u0000X\u001a\u0001\u0000\u0000\u0000YZ\u0005"+
		"s\u0000\u0000Z[\u0005t\u0000\u0000[\\\u0005r\u0000\u0000\\]\u0005u\u0000"+
		"\u0000]^\u0005c\u0000\u0000^_\u0005t\u0000\u0000_\u001c\u0001\u0000\u0000"+
		"\u0000`a\u0005d\u0000\u0000ab\u0005e\u0000\u0000bc\u0005c\u0000\u0000"+
		"c\u001e\u0001\u0000\u0000\u0000de\u0005-\u0000\u0000ef\u0005>\u0000\u0000"+
		"f \u0001\u0000\u0000\u0000gh\u0005:\u0000\u0000hi\u0005=\u0000\u0000i"+
		"\"\u0001\u0000\u0000\u0000jk\u0005p\u0000\u0000kl\u0005t\u0000\u0000l"+
		"m\u0005r\u0000\u0000m$\u0001\u0000\u0000\u0000no\u0005:\u0000\u0000o&"+
		"\u0001\u0000\u0000\u0000pq\u0005r\u0000\u0000qr\u0005e\u0000\u0000rs\u0005"+
		"t\u0000\u0000st\u0005u\u0000\u0000tu\u0005r\u0000\u0000uv\u0005n\u0000"+
		"\u0000v(\u0001\u0000\u0000\u0000wx\u0005.\u0000\u0000x*\u0001\u0000\u0000"+
		"\u0000yz\u0005.\u0000\u0000z{\u0005.\u0000\u0000{|\u0005.\u0000\u0000"+
		"|,\u0001\u0000\u0000\u0000}~\u0005{\u0000\u0000~.\u0001\u0000\u0000\u0000"+
		"\u007f\u0080\u0005}\u0000\u0000\u00800\u0001\u0000\u0000\u0000\u0081\u0083"+
		"\u0003\u000b\u0005\u0000\u0082\u0081\u0001\u0000\u0000\u0000\u0082\u0083"+
		"\u0001\u0000\u0000\u0000\u0083\u0085\u0001\u0000\u0000\u0000\u0084\u0086"+
		"\u0007\u0000\u0000\u0000\u0085\u0084\u0001\u0000\u0000\u0000\u0086\u0087"+
		"\u0001\u0000\u0000\u0000\u0087\u0085\u0001\u0000\u0000\u0000\u0087\u0088"+
		"\u0001\u0000\u0000\u0000\u00882\u0001\u0000\u0000\u0000\u0089\u008d\u0007"+
		"\u0001\u0000\u0000\u008a\u008c\u0007\u0002\u0000\u0000\u008b\u008a\u0001"+
		"\u0000\u0000\u0000\u008c\u008f\u0001\u0000\u0000\u0000\u008d\u008b\u0001"+
		"\u0000\u0000\u0000\u008d\u008e\u0001\u0000\u0000\u0000\u008e4\u0001\u0000"+
		"\u0000\u0000\u008f\u008d\u0001\u0000\u0000\u0000\u0090\u0092\u0007\u0003"+
		"\u0000\u0000\u0091\u0090\u0001\u0000\u0000\u0000\u0092\u0093\u0001\u0000"+
		"\u0000\u0000\u0093\u0091\u0001\u0000\u0000\u0000\u0093\u0094\u0001\u0000"+
		"\u0000\u0000\u0094\u0095\u0001\u0000\u0000\u0000\u0095\u0096\u0006\u001a"+
		"\u0000\u0000\u00966\u0001\u0000\u0000\u0000\u0097\u0098\u0005/\u0000\u0000"+
		"\u0098\u0099\u0005/\u0000\u0000\u0099\u009d\u0001\u0000\u0000\u0000\u009a"+
		"\u009c\t\u0000\u0000\u0000\u009b\u009a\u0001\u0000\u0000\u0000\u009c\u009f"+
		"\u0001\u0000\u0000\u0000\u009d\u009e\u0001\u0000\u0000\u0000\u009d\u009b"+
		"\u0001\u0000\u0000\u0000\u009e\u00a0\u0001\u0000\u0000\u0000\u009f\u009d"+
		"\u0001\u0000\u0000\u0000\u00a0\u00a1\u0005\n\u0000\u0000\u00a1\u00a2\u0001"+
		"\u0000\u0000\u0000\u00a2\u00a3\u0006\u001b\u0000\u0000\u00a38\u0001\u0000"+
		"\u0000\u0000\u00a4\u00a8\u0005\"\u0000\u0000\u00a5\u00a7\t\u0000\u0000"+
		"\u0000\u00a6\u00a5\u0001\u0000\u0000\u0000\u00a7\u00aa\u0001\u0000\u0000"+
		"\u0000\u00a8\u00a9\u0001\u0000\u0000\u0000\u00a8\u00a6\u0001\u0000\u0000"+
		"\u0000\u00a9\u00ab\u0001\u0000\u0000\u0000\u00aa\u00a8\u0001\u0000\u0000"+
		"\u0000\u00ab\u00ac\u0005\"\u0000\u0000\u00ac:\u0001\u0000\u0000\u0000"+
		"\u0007\u0000\u0082\u0087\u008d\u0093\u009d\u00a8\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}