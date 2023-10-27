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
		COMMA=11, SEMI=12, DEF=13, DECL=14, ARROW=15, DCOL=16, PTR=17, COL=18, 
		RETURN=19, DOTS=20, LCURLY=21, RCURLY=22, INT=23, ID=24, WS=25, STRING=26;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", "CPAREN", 
			"COMMA", "SEMI", "DEF", "DECL", "ARROW", "DCOL", "PTR", "COL", "RETURN", 
			"DOTS", "LCURLY", "RCURLY", "INT", "ID", "WS", "STRING"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'&&'", "'||'", "'!'", "'='", "'+'", "'-'", "'*'", "'/'", "'('", 
			"')'", "','", "';'", "'def'", "'dec'", "'->'", "':='", "'ptr'", "':'", 
			"'return'", "'...'", "'{'", "'}'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "AND", "OR", "NOT", "EQ", "PLUS", "SUB", "STAR", "DIV", "OPAREN", 
			"CPAREN", "COMMA", "SEMI", "DEF", "DECL", "ARROW", "DCOL", "PTR", "COL", 
			"RETURN", "DOTS", "LCURLY", "RCURLY", "INT", "ID", "WS", "STRING"
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
		"\u0004\u0000\u001a\u0091\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0002\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011"+
		"\u0002\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014"+
		"\u0002\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017"+
		"\u0002\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001"+
		"\t\u0001\t\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001"+
		"\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0015\u0001"+
		"\u0015\u0001\u0016\u0003\u0016t\b\u0016\u0001\u0016\u0004\u0016w\b\u0016"+
		"\u000b\u0016\f\u0016x\u0001\u0017\u0001\u0017\u0005\u0017}\b\u0017\n\u0017"+
		"\f\u0017\u0080\t\u0017\u0001\u0018\u0004\u0018\u0083\b\u0018\u000b\u0018"+
		"\f\u0018\u0084\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0005\u0019"+
		"\u008b\b\u0019\n\u0019\f\u0019\u008e\t\u0019\u0001\u0019\u0001\u0019\u0001"+
		"\u008c\u0000\u001a\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005"+
		"\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019"+
		"\r\u001b\u000e\u001d\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0014)\u0015"+
		"+\u0016-\u0017/\u00181\u00193\u001a\u0001\u0000\u0004\u0001\u000009\u0003"+
		"\u0000AZ__az\u0004\u000009AZ__az\u0003\u0000\t\n\f\r  \u0095\u0000\u0001"+
		"\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005"+
		"\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001"+
		"\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000"+
		"\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000"+
		"\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000"+
		"\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000"+
		"\u0000\u0000\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000"+
		"\u0000\u0000\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000"+
		"\u0000\u0000#\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000"+
		"\'\u0001\u0000\u0000\u0000\u0000)\u0001\u0000\u0000\u0000\u0000+\u0001"+
		"\u0000\u0000\u0000\u0000-\u0001\u0000\u0000\u0000\u0000/\u0001\u0000\u0000"+
		"\u0000\u00001\u0001\u0000\u0000\u0000\u00003\u0001\u0000\u0000\u0000\u0001"+
		"5\u0001\u0000\u0000\u0000\u00038\u0001\u0000\u0000\u0000\u0005;\u0001"+
		"\u0000\u0000\u0000\u0007=\u0001\u0000\u0000\u0000\t?\u0001\u0000\u0000"+
		"\u0000\u000bA\u0001\u0000\u0000\u0000\rC\u0001\u0000\u0000\u0000\u000f"+
		"E\u0001\u0000\u0000\u0000\u0011G\u0001\u0000\u0000\u0000\u0013I\u0001"+
		"\u0000\u0000\u0000\u0015K\u0001\u0000\u0000\u0000\u0017M\u0001\u0000\u0000"+
		"\u0000\u0019O\u0001\u0000\u0000\u0000\u001bS\u0001\u0000\u0000\u0000\u001d"+
		"W\u0001\u0000\u0000\u0000\u001fZ\u0001\u0000\u0000\u0000!]\u0001\u0000"+
		"\u0000\u0000#a\u0001\u0000\u0000\u0000%c\u0001\u0000\u0000\u0000\'j\u0001"+
		"\u0000\u0000\u0000)n\u0001\u0000\u0000\u0000+p\u0001\u0000\u0000\u0000"+
		"-s\u0001\u0000\u0000\u0000/z\u0001\u0000\u0000\u00001\u0082\u0001\u0000"+
		"\u0000\u00003\u0088\u0001\u0000\u0000\u000056\u0005&\u0000\u000067\u0005"+
		"&\u0000\u00007\u0002\u0001\u0000\u0000\u000089\u0005|\u0000\u00009:\u0005"+
		"|\u0000\u0000:\u0004\u0001\u0000\u0000\u0000;<\u0005!\u0000\u0000<\u0006"+
		"\u0001\u0000\u0000\u0000=>\u0005=\u0000\u0000>\b\u0001\u0000\u0000\u0000"+
		"?@\u0005+\u0000\u0000@\n\u0001\u0000\u0000\u0000AB\u0005-\u0000\u0000"+
		"B\f\u0001\u0000\u0000\u0000CD\u0005*\u0000\u0000D\u000e\u0001\u0000\u0000"+
		"\u0000EF\u0005/\u0000\u0000F\u0010\u0001\u0000\u0000\u0000GH\u0005(\u0000"+
		"\u0000H\u0012\u0001\u0000\u0000\u0000IJ\u0005)\u0000\u0000J\u0014\u0001"+
		"\u0000\u0000\u0000KL\u0005,\u0000\u0000L\u0016\u0001\u0000\u0000\u0000"+
		"MN\u0005;\u0000\u0000N\u0018\u0001\u0000\u0000\u0000OP\u0005d\u0000\u0000"+
		"PQ\u0005e\u0000\u0000QR\u0005f\u0000\u0000R\u001a\u0001\u0000\u0000\u0000"+
		"ST\u0005d\u0000\u0000TU\u0005e\u0000\u0000UV\u0005c\u0000\u0000V\u001c"+
		"\u0001\u0000\u0000\u0000WX\u0005-\u0000\u0000XY\u0005>\u0000\u0000Y\u001e"+
		"\u0001\u0000\u0000\u0000Z[\u0005:\u0000\u0000[\\\u0005=\u0000\u0000\\"+
		" \u0001\u0000\u0000\u0000]^\u0005p\u0000\u0000^_\u0005t\u0000\u0000_`"+
		"\u0005r\u0000\u0000`\"\u0001\u0000\u0000\u0000ab\u0005:\u0000\u0000b$"+
		"\u0001\u0000\u0000\u0000cd\u0005r\u0000\u0000de\u0005e\u0000\u0000ef\u0005"+
		"t\u0000\u0000fg\u0005u\u0000\u0000gh\u0005r\u0000\u0000hi\u0005n\u0000"+
		"\u0000i&\u0001\u0000\u0000\u0000jk\u0005.\u0000\u0000kl\u0005.\u0000\u0000"+
		"lm\u0005.\u0000\u0000m(\u0001\u0000\u0000\u0000no\u0005{\u0000\u0000o"+
		"*\u0001\u0000\u0000\u0000pq\u0005}\u0000\u0000q,\u0001\u0000\u0000\u0000"+
		"rt\u0003\u000b\u0005\u0000sr\u0001\u0000\u0000\u0000st\u0001\u0000\u0000"+
		"\u0000tv\u0001\u0000\u0000\u0000uw\u0007\u0000\u0000\u0000vu\u0001\u0000"+
		"\u0000\u0000wx\u0001\u0000\u0000\u0000xv\u0001\u0000\u0000\u0000xy\u0001"+
		"\u0000\u0000\u0000y.\u0001\u0000\u0000\u0000z~\u0007\u0001\u0000\u0000"+
		"{}\u0007\u0002\u0000\u0000|{\u0001\u0000\u0000\u0000}\u0080\u0001\u0000"+
		"\u0000\u0000~|\u0001\u0000\u0000\u0000~\u007f\u0001\u0000\u0000\u0000"+
		"\u007f0\u0001\u0000\u0000\u0000\u0080~\u0001\u0000\u0000\u0000\u0081\u0083"+
		"\u0007\u0003\u0000\u0000\u0082\u0081\u0001\u0000\u0000\u0000\u0083\u0084"+
		"\u0001\u0000\u0000\u0000\u0084\u0082\u0001\u0000\u0000\u0000\u0084\u0085"+
		"\u0001\u0000\u0000\u0000\u0085\u0086\u0001\u0000\u0000\u0000\u0086\u0087"+
		"\u0006\u0018\u0000\u0000\u00872\u0001\u0000\u0000\u0000\u0088\u008c\u0005"+
		"\"\u0000\u0000\u0089\u008b\t\u0000\u0000\u0000\u008a\u0089\u0001\u0000"+
		"\u0000\u0000\u008b\u008e\u0001\u0000\u0000\u0000\u008c\u008d\u0001\u0000"+
		"\u0000\u0000\u008c\u008a\u0001\u0000\u0000\u0000\u008d\u008f\u0001\u0000"+
		"\u0000\u0000\u008e\u008c\u0001\u0000\u0000\u0000\u008f\u0090\u0005\"\u0000"+
		"\u0000\u00904\u0001\u0000\u0000\u0000\u0006\u0000sx~\u0084\u008c\u0001"+
		"\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}