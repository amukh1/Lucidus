// Generated from /home/amukh1/Lucidus/LucidusParser.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class LucidusParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		AND=1, OR=2, NOT=3, EQ=4, PLUS=5, SUB=6, STAR=7, DIV=8, OPAREN=9, CPAREN=10, 
		COMMA=11, SEMI=12, DEF=13, STRUCT=14, DECL=15, ARROW=16, DCOL=17, PTR=18, 
		COL=19, RETURN=20, DOT=21, DOTS=22, LCURLY=23, RCURLY=24, INT=25, ID=26, 
		WS=27, STRING=28;
	public static final int
		RULE_program = 0, RULE_rawtype = 1, RULE_type = 2, RULE_idec = 3, RULE_param = 4, 
		RULE_dec = 5, RULE_ret = 6, RULE_vdec = 7, RULE_edec = 8, RULE_vdef = 9, 
		RULE_stat = 10, RULE_def = 11, RULE_expr = 12, RULE_struct = 13, RULE_func = 14;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "rawtype", "type", "idec", "param", "dec", "ret", "vdec", 
			"edec", "vdef", "stat", "def", "expr", "struct", "func"
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
			"WS", "STRING"
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

	@Override
	public String getGrammarFileName() { return "LucidusParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public LucidusParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(LucidusParser.EOF, 0); }
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public List<DefContext> def() {
			return getRuleContexts(DefContext.class);
		}
		public DefContext def(int i) {
			return getRuleContext(DefContext.class,i);
		}
		public List<StructContext> struct() {
			return getRuleContexts(StructContext.class);
		}
		public StructContext struct(int i) {
			return getRuleContext(StructContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(35);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 370467464L) != 0)) {
				{
				setState(33);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NOT:
				case STAR:
				case OPAREN:
				case DECL:
				case PTR:
				case RETURN:
				case INT:
				case ID:
				case STRING:
					{
					setState(30);
					stat();
					}
					break;
				case DEF:
					{
					setState(31);
					def();
					}
					break;
				case STRUCT:
					{
					setState(32);
					struct();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(37);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(38);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RawtypeContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public RawtypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rawtype; }
	}

	public final RawtypeContext rawtype() throws RecognitionException {
		RawtypeContext _localctx = new RawtypeContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_rawtype);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(40);
			match(ID);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public List<TerminalNode> STAR() { return getTokens(LucidusParser.STAR); }
		public TerminalNode STAR(int i) {
			return getToken(LucidusParser.STAR, i);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(42);
			match(ID);
			}
			setState(46);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==STAR) {
				{
				{
				setState(43);
				match(STAR);
				}
				}
				setState(48);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdecContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public TerminalNode COL() { return getToken(LucidusParser.COL, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public IdecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_idec; }
	}

	public final IdecContext idec() throws RecognitionException {
		IdecContext _localctx = new IdecContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_idec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(49);
			match(ID);
			setState(50);
			match(COL);
			setState(51);
			type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParamContext extends ParserRuleContext {
		public IdecContext idec() {
			return getRuleContext(IdecContext.class,0);
		}
		public TerminalNode DOTS() { return getToken(LucidusParser.DOTS, 0); }
		public ParamContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_param; }
	}

	public final ParamContext param() throws RecognitionException {
		ParamContext _localctx = new ParamContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_param);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(55);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(53);
				idec();
				}
				break;
			case DOTS:
				{
				setState(54);
				match(DOTS);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DecContext extends ParserRuleContext {
		public TerminalNode DECL() { return getToken(LucidusParser.DECL, 0); }
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public TerminalNode OPAREN() { return getToken(LucidusParser.OPAREN, 0); }
		public TerminalNode CPAREN() { return getToken(LucidusParser.CPAREN, 0); }
		public TerminalNode ARROW() { return getToken(LucidusParser.ARROW, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(LucidusParser.SEMI, 0); }
		public List<ParamContext> param() {
			return getRuleContexts(ParamContext.class);
		}
		public ParamContext param(int i) {
			return getRuleContext(ParamContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(LucidusParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(LucidusParser.COMMA, i);
		}
		public DecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dec; }
	}

	public final DecContext dec() throws RecognitionException {
		DecContext _localctx = new DecContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_dec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(57);
			match(DECL);
			setState(58);
			match(ID);
			setState(59);
			match(OPAREN);
			setState(68);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOTS || _la==ID) {
				{
				setState(60);
				param();
				setState(65);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(61);
					match(COMMA);
					setState(62);
					param();
					}
					}
					setState(67);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(70);
			match(CPAREN);
			setState(71);
			match(ARROW);
			setState(72);
			type();
			setState(73);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RetContext extends ParserRuleContext {
		public TerminalNode RETURN() { return getToken(LucidusParser.RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(LucidusParser.SEMI, 0); }
		public RetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ret; }
	}

	public final RetContext ret() throws RecognitionException {
		RetContext _localctx = new RetContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_ret);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(75);
			match(RETURN);
			setState(76);
			expr(0);
			setState(77);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VdecContext extends ParserRuleContext {
		public IdecContext idec() {
			return getRuleContext(IdecContext.class,0);
		}
		public TerminalNode DCOL() { return getToken(LucidusParser.DCOL, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(LucidusParser.SEMI, 0); }
		public VdecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vdec; }
	}

	public final VdecContext vdec() throws RecognitionException {
		VdecContext _localctx = new VdecContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_vdec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			idec();
			setState(80);
			match(DCOL);
			setState(81);
			expr(0);
			setState(82);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EdecContext extends ParserRuleContext {
		public IdecContext idec() {
			return getRuleContext(IdecContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(LucidusParser.SEMI, 0); }
		public EdecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_edec; }
	}

	public final EdecContext edec() throws RecognitionException {
		EdecContext _localctx = new EdecContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_edec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(84);
			idec();
			setState(85);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VdefContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public TerminalNode EQ() { return getToken(LucidusParser.EQ, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(LucidusParser.SEMI, 0); }
		public VdefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vdef; }
	}

	public final VdefContext vdef() throws RecognitionException {
		VdefContext _localctx = new VdefContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_vdef);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			match(ID);
			setState(88);
			match(EQ);
			setState(89);
			expr(0);
			setState(90);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatContext extends ParserRuleContext {
		public VdecContext vdec() {
			return getRuleContext(VdecContext.class,0);
		}
		public VdefContext vdef() {
			return getRuleContext(VdefContext.class,0);
		}
		public EdecContext edec() {
			return getRuleContext(EdecContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(LucidusParser.SEMI, 0); }
		public DecContext dec() {
			return getRuleContext(DecContext.class,0);
		}
		public RetContext ret() {
			return getRuleContext(RetContext.class,0);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_stat);
		try {
			setState(100);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(92);
				vdec();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(93);
				vdef();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(94);
				edec();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(95);
				expr(0);
				setState(96);
				match(SEMI);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(98);
				dec();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(99);
				ret();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefContext extends ParserRuleContext {
		public TerminalNode DEF() { return getToken(LucidusParser.DEF, 0); }
		public List<TerminalNode> ID() { return getTokens(LucidusParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(LucidusParser.ID, i);
		}
		public TerminalNode OPAREN() { return getToken(LucidusParser.OPAREN, 0); }
		public TerminalNode CPAREN() { return getToken(LucidusParser.CPAREN, 0); }
		public TerminalNode ARROW() { return getToken(LucidusParser.ARROW, 0); }
		public TerminalNode LCURLY() { return getToken(LucidusParser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(LucidusParser.RCURLY, 0); }
		public List<ParamContext> param() {
			return getRuleContexts(ParamContext.class);
		}
		public ParamContext param(int i) {
			return getRuleContext(ParamContext.class,i);
		}
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(LucidusParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(LucidusParser.COMMA, i);
		}
		public DefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_def; }
	}

	public final DefContext def() throws RecognitionException {
		DefContext _localctx = new DefContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_def);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(102);
			match(DEF);
			setState(103);
			match(ID);
			setState(104);
			match(OPAREN);
			setState(113);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOTS || _la==ID) {
				{
				setState(105);
				param();
				setState(110);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(106);
					match(COMMA);
					setState(107);
					param();
					}
					}
					setState(112);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(115);
			match(CPAREN);
			setState(116);
			match(ARROW);
			setState(117);
			match(ID);
			setState(118);
			match(LCURLY);
			setState(122);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 370442888L) != 0)) {
				{
				{
				setState(119);
				stat();
				}
				}
				setState(124);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(125);
			match(RCURLY);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExprContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public TerminalNode INT() { return getToken(LucidusParser.INT, 0); }
		public TerminalNode STRING() { return getToken(LucidusParser.STRING, 0); }
		public FuncContext func() {
			return getRuleContext(FuncContext.class,0);
		}
		public TerminalNode PTR() { return getToken(LucidusParser.PTR, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> STAR() { return getTokens(LucidusParser.STAR); }
		public TerminalNode STAR(int i) {
			return getToken(LucidusParser.STAR, i);
		}
		public TerminalNode NOT() { return getToken(LucidusParser.NOT, 0); }
		public TerminalNode OPAREN() { return getToken(LucidusParser.OPAREN, 0); }
		public TerminalNode CPAREN() { return getToken(LucidusParser.CPAREN, 0); }
		public TerminalNode AND() { return getToken(LucidusParser.AND, 0); }
		public TerminalNode OR() { return getToken(LucidusParser.OR, 0); }
		public TerminalNode DIV() { return getToken(LucidusParser.DIV, 0); }
		public TerminalNode PLUS() { return getToken(LucidusParser.PLUS, 0); }
		public TerminalNode SUB() { return getToken(LucidusParser.SUB, 0); }
		public TerminalNode DOT() { return getToken(LucidusParser.DOT, 0); }
		public TerminalNode ARROW() { return getToken(LucidusParser.ARROW, 0); }
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 24;
		enterRecursionRule(_localctx, 24, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				{
				setState(128);
				match(ID);
				}
				break;
			case 2:
				{
				setState(129);
				match(INT);
				}
				break;
			case 3:
				{
				setState(130);
				match(STRING);
				}
				break;
			case 4:
				{
				setState(131);
				func();
				}
				break;
			case 5:
				{
				setState(132);
				match(PTR);
				setState(133);
				expr(11);
				}
				break;
			case 6:
				{
				setState(135); 
				_errHandler.sync(this);
				_alt = 1;
				do {
					switch (_alt) {
					case 1:
						{
						{
						setState(134);
						match(STAR);
						}
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					setState(137); 
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
				} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
				setState(139);
				expr(10);
				}
				break;
			case 7:
				{
				setState(140);
				match(NOT);
				setState(141);
				expr(9);
				}
				break;
			case 8:
				{
				setState(142);
				match(OPAREN);
				setState(143);
				expr(0);
				setState(144);
				match(CPAREN);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(177);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(175);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(148);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(149);
						match(AND);
						setState(150);
						expr(9);
						}
						break;
					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(151);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(152);
						match(OR);
						setState(153);
						expr(8);
						}
						break;
					case 3:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(154);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(155);
						match(STAR);
						setState(156);
						expr(7);
						}
						break;
					case 4:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(157);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(158);
						match(DIV);
						setState(159);
						expr(6);
						}
						break;
					case 5:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(160);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(161);
						match(PLUS);
						setState(162);
						expr(5);
						}
						break;
					case 6:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(163);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(164);
						match(SUB);
						setState(165);
						expr(4);
						}
						break;
					case 7:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(166);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(167);
						match(DOT);
						setState(168);
						match(ID);
						}
						break;
					case 8:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(169);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(170);
						match(ARROW);
						setState(171);
						match(OPAREN);
						setState(172);
						expr(0);
						setState(173);
						match(CPAREN);
						}
						break;
					}
					} 
				}
				setState(179);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StructContext extends ParserRuleContext {
		public TerminalNode STRUCT() { return getToken(LucidusParser.STRUCT, 0); }
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public TerminalNode LCURLY() { return getToken(LucidusParser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(LucidusParser.RCURLY, 0); }
		public TerminalNode SEMI() { return getToken(LucidusParser.SEMI, 0); }
		public List<IdecContext> idec() {
			return getRuleContexts(IdecContext.class);
		}
		public IdecContext idec(int i) {
			return getRuleContext(IdecContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(LucidusParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(LucidusParser.COMMA, i);
		}
		public StructContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct; }
	}

	public final StructContext struct() throws RecognitionException {
		StructContext _localctx = new StructContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_struct);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(180);
			match(STRUCT);
			setState(181);
			match(ID);
			setState(182);
			match(LCURLY);
			setState(191);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(183);
				idec();
				setState(188);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(184);
					match(COMMA);
					setState(185);
					idec();
					}
					}
					setState(190);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(193);
			match(RCURLY);
			setState(194);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FuncContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public TerminalNode OPAREN() { return getToken(LucidusParser.OPAREN, 0); }
		public TerminalNode CPAREN() { return getToken(LucidusParser.CPAREN, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(LucidusParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(LucidusParser.COMMA, i);
		}
		public FuncContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func; }
	}

	public final FuncContext func() throws RecognitionException {
		FuncContext _localctx = new FuncContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_func);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(196);
			match(ID);
			setState(197);
			match(OPAREN);
			setState(206);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 369361544L) != 0)) {
				{
				setState(198);
				expr(0);
				setState(203);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(199);
					match(COMMA);
					setState(200);
					expr(0);
					}
					}
					setState(205);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(208);
			match(CPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 12:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 8);
		case 1:
			return precpred(_ctx, 7);
		case 2:
			return precpred(_ctx, 6);
		case 3:
			return precpred(_ctx, 5);
		case 4:
			return precpred(_ctx, 4);
		case 5:
			return precpred(_ctx, 3);
		case 6:
			return precpred(_ctx, 13);
		case 7:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u001c\u00d3\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0005\u0000\"\b\u0000\n\u0000\f\u0000%\t\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0005"+
		"\u0002-\b\u0002\n\u0002\f\u00020\t\u0002\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0003\u00048\b\u0004\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0005"+
		"\u0005@\b\u0005\n\u0005\f\u0005C\t\u0005\u0003\u0005E\b\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0003"+
		"\ne\b\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0005\u000bm\b\u000b\n\u000b\f\u000bp\t\u000b\u0003\u000br\b\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0005\u000b"+
		"y\b\u000b\n\u000b\f\u000b|\t\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0004\f\u0088\b\f\u000b"+
		"\f\f\f\u0089\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003"+
		"\f\u0093\b\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0005\f\u00b0\b\f\n\f\f\f\u00b3\t\f\u0001\r\u0001\r\u0001\r"+
		"\u0001\r\u0001\r\u0001\r\u0005\r\u00bb\b\r\n\r\f\r\u00be\t\r\u0003\r\u00c0"+
		"\b\r\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0005\u000e\u00ca\b\u000e\n\u000e\f\u000e\u00cd\t\u000e"+
		"\u0003\u000e\u00cf\b\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0000\u0001"+
		"\u0018\u000f\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016"+
		"\u0018\u001a\u001c\u0000\u0000\u00e6\u0000#\u0001\u0000\u0000\u0000\u0002"+
		"(\u0001\u0000\u0000\u0000\u0004*\u0001\u0000\u0000\u0000\u00061\u0001"+
		"\u0000\u0000\u0000\b7\u0001\u0000\u0000\u0000\n9\u0001\u0000\u0000\u0000"+
		"\fK\u0001\u0000\u0000\u0000\u000eO\u0001\u0000\u0000\u0000\u0010T\u0001"+
		"\u0000\u0000\u0000\u0012W\u0001\u0000\u0000\u0000\u0014d\u0001\u0000\u0000"+
		"\u0000\u0016f\u0001\u0000\u0000\u0000\u0018\u0092\u0001\u0000\u0000\u0000"+
		"\u001a\u00b4\u0001\u0000\u0000\u0000\u001c\u00c4\u0001\u0000\u0000\u0000"+
		"\u001e\"\u0003\u0014\n\u0000\u001f\"\u0003\u0016\u000b\u0000 \"\u0003"+
		"\u001a\r\u0000!\u001e\u0001\u0000\u0000\u0000!\u001f\u0001\u0000\u0000"+
		"\u0000! \u0001\u0000\u0000\u0000\"%\u0001\u0000\u0000\u0000#!\u0001\u0000"+
		"\u0000\u0000#$\u0001\u0000\u0000\u0000$&\u0001\u0000\u0000\u0000%#\u0001"+
		"\u0000\u0000\u0000&\'\u0005\u0000\u0000\u0001\'\u0001\u0001\u0000\u0000"+
		"\u0000()\u0005\u001a\u0000\u0000)\u0003\u0001\u0000\u0000\u0000*.\u0005"+
		"\u001a\u0000\u0000+-\u0005\u0007\u0000\u0000,+\u0001\u0000\u0000\u0000"+
		"-0\u0001\u0000\u0000\u0000.,\u0001\u0000\u0000\u0000./\u0001\u0000\u0000"+
		"\u0000/\u0005\u0001\u0000\u0000\u00000.\u0001\u0000\u0000\u000012\u0005"+
		"\u001a\u0000\u000023\u0005\u0013\u0000\u000034\u0003\u0004\u0002\u0000"+
		"4\u0007\u0001\u0000\u0000\u000058\u0003\u0006\u0003\u000068\u0005\u0016"+
		"\u0000\u000075\u0001\u0000\u0000\u000076\u0001\u0000\u0000\u00008\t\u0001"+
		"\u0000\u0000\u00009:\u0005\u000f\u0000\u0000:;\u0005\u001a\u0000\u0000"+
		";D\u0005\t\u0000\u0000<A\u0003\b\u0004\u0000=>\u0005\u000b\u0000\u0000"+
		">@\u0003\b\u0004\u0000?=\u0001\u0000\u0000\u0000@C\u0001\u0000\u0000\u0000"+
		"A?\u0001\u0000\u0000\u0000AB\u0001\u0000\u0000\u0000BE\u0001\u0000\u0000"+
		"\u0000CA\u0001\u0000\u0000\u0000D<\u0001\u0000\u0000\u0000DE\u0001\u0000"+
		"\u0000\u0000EF\u0001\u0000\u0000\u0000FG\u0005\n\u0000\u0000GH\u0005\u0010"+
		"\u0000\u0000HI\u0003\u0004\u0002\u0000IJ\u0005\f\u0000\u0000J\u000b\u0001"+
		"\u0000\u0000\u0000KL\u0005\u0014\u0000\u0000LM\u0003\u0018\f\u0000MN\u0005"+
		"\f\u0000\u0000N\r\u0001\u0000\u0000\u0000OP\u0003\u0006\u0003\u0000PQ"+
		"\u0005\u0011\u0000\u0000QR\u0003\u0018\f\u0000RS\u0005\f\u0000\u0000S"+
		"\u000f\u0001\u0000\u0000\u0000TU\u0003\u0006\u0003\u0000UV\u0005\f\u0000"+
		"\u0000V\u0011\u0001\u0000\u0000\u0000WX\u0005\u001a\u0000\u0000XY\u0005"+
		"\u0004\u0000\u0000YZ\u0003\u0018\f\u0000Z[\u0005\f\u0000\u0000[\u0013"+
		"\u0001\u0000\u0000\u0000\\e\u0003\u000e\u0007\u0000]e\u0003\u0012\t\u0000"+
		"^e\u0003\u0010\b\u0000_`\u0003\u0018\f\u0000`a\u0005\f\u0000\u0000ae\u0001"+
		"\u0000\u0000\u0000be\u0003\n\u0005\u0000ce\u0003\f\u0006\u0000d\\\u0001"+
		"\u0000\u0000\u0000d]\u0001\u0000\u0000\u0000d^\u0001\u0000\u0000\u0000"+
		"d_\u0001\u0000\u0000\u0000db\u0001\u0000\u0000\u0000dc\u0001\u0000\u0000"+
		"\u0000e\u0015\u0001\u0000\u0000\u0000fg\u0005\r\u0000\u0000gh\u0005\u001a"+
		"\u0000\u0000hq\u0005\t\u0000\u0000in\u0003\b\u0004\u0000jk\u0005\u000b"+
		"\u0000\u0000km\u0003\b\u0004\u0000lj\u0001\u0000\u0000\u0000mp\u0001\u0000"+
		"\u0000\u0000nl\u0001\u0000\u0000\u0000no\u0001\u0000\u0000\u0000or\u0001"+
		"\u0000\u0000\u0000pn\u0001\u0000\u0000\u0000qi\u0001\u0000\u0000\u0000"+
		"qr\u0001\u0000\u0000\u0000rs\u0001\u0000\u0000\u0000st\u0005\n\u0000\u0000"+
		"tu\u0005\u0010\u0000\u0000uv\u0005\u001a\u0000\u0000vz\u0005\u0017\u0000"+
		"\u0000wy\u0003\u0014\n\u0000xw\u0001\u0000\u0000\u0000y|\u0001\u0000\u0000"+
		"\u0000zx\u0001\u0000\u0000\u0000z{\u0001\u0000\u0000\u0000{}\u0001\u0000"+
		"\u0000\u0000|z\u0001\u0000\u0000\u0000}~\u0005\u0018\u0000\u0000~\u0017"+
		"\u0001\u0000\u0000\u0000\u007f\u0080\u0006\f\uffff\uffff\u0000\u0080\u0093"+
		"\u0005\u001a\u0000\u0000\u0081\u0093\u0005\u0019\u0000\u0000\u0082\u0093"+
		"\u0005\u001c\u0000\u0000\u0083\u0093\u0003\u001c\u000e\u0000\u0084\u0085"+
		"\u0005\u0012\u0000\u0000\u0085\u0093\u0003\u0018\f\u000b\u0086\u0088\u0005"+
		"\u0007\u0000\u0000\u0087\u0086\u0001\u0000\u0000\u0000\u0088\u0089\u0001"+
		"\u0000\u0000\u0000\u0089\u0087\u0001\u0000\u0000\u0000\u0089\u008a\u0001"+
		"\u0000\u0000\u0000\u008a\u008b\u0001\u0000\u0000\u0000\u008b\u0093\u0003"+
		"\u0018\f\n\u008c\u008d\u0005\u0003\u0000\u0000\u008d\u0093\u0003\u0018"+
		"\f\t\u008e\u008f\u0005\t\u0000\u0000\u008f\u0090\u0003\u0018\f\u0000\u0090"+
		"\u0091\u0005\n\u0000\u0000\u0091\u0093\u0001\u0000\u0000\u0000\u0092\u007f"+
		"\u0001\u0000\u0000\u0000\u0092\u0081\u0001\u0000\u0000\u0000\u0092\u0082"+
		"\u0001\u0000\u0000\u0000\u0092\u0083\u0001\u0000\u0000\u0000\u0092\u0084"+
		"\u0001\u0000\u0000\u0000\u0092\u0087\u0001\u0000\u0000\u0000\u0092\u008c"+
		"\u0001\u0000\u0000\u0000\u0092\u008e\u0001\u0000\u0000\u0000\u0093\u00b1"+
		"\u0001\u0000\u0000\u0000\u0094\u0095\n\b\u0000\u0000\u0095\u0096\u0005"+
		"\u0001\u0000\u0000\u0096\u00b0\u0003\u0018\f\t\u0097\u0098\n\u0007\u0000"+
		"\u0000\u0098\u0099\u0005\u0002\u0000\u0000\u0099\u00b0\u0003\u0018\f\b"+
		"\u009a\u009b\n\u0006\u0000\u0000\u009b\u009c\u0005\u0007\u0000\u0000\u009c"+
		"\u00b0\u0003\u0018\f\u0007\u009d\u009e\n\u0005\u0000\u0000\u009e\u009f"+
		"\u0005\b\u0000\u0000\u009f\u00b0\u0003\u0018\f\u0006\u00a0\u00a1\n\u0004"+
		"\u0000\u0000\u00a1\u00a2\u0005\u0005\u0000\u0000\u00a2\u00b0\u0003\u0018"+
		"\f\u0005\u00a3\u00a4\n\u0003\u0000\u0000\u00a4\u00a5\u0005\u0006\u0000"+
		"\u0000\u00a5\u00b0\u0003\u0018\f\u0004\u00a6\u00a7\n\r\u0000\u0000\u00a7"+
		"\u00a8\u0005\u0015\u0000\u0000\u00a8\u00b0\u0005\u001a\u0000\u0000\u00a9"+
		"\u00aa\n\u0002\u0000\u0000\u00aa\u00ab\u0005\u0010\u0000\u0000\u00ab\u00ac"+
		"\u0005\t\u0000\u0000\u00ac\u00ad\u0003\u0018\f\u0000\u00ad\u00ae\u0005"+
		"\n\u0000\u0000\u00ae\u00b0\u0001\u0000\u0000\u0000\u00af\u0094\u0001\u0000"+
		"\u0000\u0000\u00af\u0097\u0001\u0000\u0000\u0000\u00af\u009a\u0001\u0000"+
		"\u0000\u0000\u00af\u009d\u0001\u0000\u0000\u0000\u00af\u00a0\u0001\u0000"+
		"\u0000\u0000\u00af\u00a3\u0001\u0000\u0000\u0000\u00af\u00a6\u0001\u0000"+
		"\u0000\u0000\u00af\u00a9\u0001\u0000\u0000\u0000\u00b0\u00b3\u0001\u0000"+
		"\u0000\u0000\u00b1\u00af\u0001\u0000\u0000\u0000\u00b1\u00b2\u0001\u0000"+
		"\u0000\u0000\u00b2\u0019\u0001\u0000\u0000\u0000\u00b3\u00b1\u0001\u0000"+
		"\u0000\u0000\u00b4\u00b5\u0005\u000e\u0000\u0000\u00b5\u00b6\u0005\u001a"+
		"\u0000\u0000\u00b6\u00bf\u0005\u0017\u0000\u0000\u00b7\u00bc\u0003\u0006"+
		"\u0003\u0000\u00b8\u00b9\u0005\u000b\u0000\u0000\u00b9\u00bb\u0003\u0006"+
		"\u0003\u0000\u00ba\u00b8\u0001\u0000\u0000\u0000\u00bb\u00be\u0001\u0000"+
		"\u0000\u0000\u00bc\u00ba\u0001\u0000\u0000\u0000\u00bc\u00bd\u0001\u0000"+
		"\u0000\u0000\u00bd\u00c0\u0001\u0000\u0000\u0000\u00be\u00bc\u0001\u0000"+
		"\u0000\u0000\u00bf\u00b7\u0001\u0000\u0000\u0000\u00bf\u00c0\u0001\u0000"+
		"\u0000\u0000\u00c0\u00c1\u0001\u0000\u0000\u0000\u00c1\u00c2\u0005\u0018"+
		"\u0000\u0000\u00c2\u00c3\u0005\f\u0000\u0000\u00c3\u001b\u0001\u0000\u0000"+
		"\u0000\u00c4\u00c5\u0005\u001a\u0000\u0000\u00c5\u00ce\u0005\t\u0000\u0000"+
		"\u00c6\u00cb\u0003\u0018\f\u0000\u00c7\u00c8\u0005\u000b\u0000\u0000\u00c8"+
		"\u00ca\u0003\u0018\f\u0000\u00c9\u00c7\u0001\u0000\u0000\u0000\u00ca\u00cd"+
		"\u0001\u0000\u0000\u0000\u00cb\u00c9\u0001\u0000\u0000\u0000\u00cb\u00cc"+
		"\u0001\u0000\u0000\u0000\u00cc\u00cf\u0001\u0000\u0000\u0000\u00cd\u00cb"+
		"\u0001\u0000\u0000\u0000\u00ce\u00c6\u0001\u0000\u0000\u0000\u00ce\u00cf"+
		"\u0001\u0000\u0000\u0000\u00cf\u00d0\u0001\u0000\u0000\u0000\u00d0\u00d1"+
		"\u0005\n\u0000\u0000\u00d1\u001d\u0001\u0000\u0000\u0000\u0012!#.7ADd"+
		"nqz\u0089\u0092\u00af\u00b1\u00bc\u00bf\u00cb\u00ce";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}