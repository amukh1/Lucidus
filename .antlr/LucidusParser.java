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
		COL=19, RETURN=20, DOT=21, DOTS=22, LCURLY=23, RCURLY=24, INT=25, FLOAT=26, 
		ID=27, WS=28, COMMENT=29, STRING=30;
	public static final int
		RULE_program = 0, RULE_rawtype = 1, RULE_type = 2, RULE_idec = 3, RULE_param = 4, 
		RULE_dec = 5, RULE_ret = 6, RULE_vdec = 7, RULE_edec = 8, RULE_vdef = 9, 
		RULE_assign = 10, RULE_stat = 11, RULE_def = 12, RULE_expr = 13, RULE_struct = 14, 
		RULE_func = 15;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "rawtype", "type", "idec", "param", "dec", "ret", "vdec", 
			"edec", "vdef", "assign", "stat", "def", "expr", "struct", "func"
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
			"PTR", "COL", "RETURN", "DOT", "DOTS", "LCURLY", "RCURLY", "INT", "FLOAT", 
			"ID", "WS", "COMMENT", "STRING"
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
			setState(37);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1309991560L) != 0)) {
				{
				setState(35);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NOT:
				case STAR:
				case OPAREN:
				case DECL:
				case PTR:
				case RETURN:
				case INT:
				case FLOAT:
				case ID:
				case STRING:
					{
					setState(32);
					stat();
					}
					break;
				case DEF:
					{
					setState(33);
					def();
					}
					break;
				case STRUCT:
					{
					setState(34);
					struct();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(39);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(40);
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
			setState(42);
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
			setState(44);
			match(ID);
			}
			setState(48);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==STAR) {
				{
				{
				setState(45);
				match(STAR);
				}
				}
				setState(50);
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
			setState(51);
			match(ID);
			setState(52);
			match(COL);
			setState(53);
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
			setState(57);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(55);
				idec();
				}
				break;
			case DOTS:
				{
				setState(56);
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
			setState(59);
			match(DECL);
			setState(60);
			match(ID);
			setState(61);
			match(OPAREN);
			setState(70);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOTS || _la==ID) {
				{
				setState(62);
				param();
				setState(67);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(63);
					match(COMMA);
					setState(64);
					param();
					}
					}
					setState(69);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(72);
			match(CPAREN);
			setState(73);
			match(ARROW);
			setState(74);
			type();
			setState(75);
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
			setState(77);
			match(RETURN);
			setState(78);
			expr(0);
			setState(79);
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
			setState(81);
			idec();
			setState(82);
			match(DCOL);
			setState(83);
			expr(0);
			setState(84);
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
			setState(86);
			idec();
			setState(87);
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
			setState(89);
			match(ID);
			setState(90);
			match(EQ);
			setState(91);
			expr(0);
			setState(92);
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
	public static class AssignContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode EQ() { return getToken(LucidusParser.EQ, 0); }
		public TerminalNode SEMI() { return getToken(LucidusParser.SEMI, 0); }
		public AssignContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assign; }
	}

	public final AssignContext assign() throws RecognitionException {
		AssignContext _localctx = new AssignContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_assign);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(94);
			expr(0);
			setState(95);
			match(EQ);
			setState(96);
			expr(0);
			setState(97);
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
		public AssignContext assign() {
			return getRuleContext(AssignContext.class,0);
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
		enterRule(_localctx, 22, RULE_stat);
		try {
			setState(108);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(99);
				vdec();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(100);
				vdef();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(101);
				edec();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(102);
				assign();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(103);
				expr(0);
				setState(104);
				match(SEMI);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(106);
				dec();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(107);
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
		enterRule(_localctx, 24, RULE_def);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(110);
			match(DEF);
			setState(111);
			match(ID);
			setState(112);
			match(OPAREN);
			setState(121);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOTS || _la==ID) {
				{
				setState(113);
				param();
				setState(118);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(114);
					match(COMMA);
					setState(115);
					param();
					}
					}
					setState(120);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(123);
			match(CPAREN);
			setState(124);
			match(ARROW);
			setState(125);
			match(ID);
			setState(126);
			match(LCURLY);
			setState(130);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1309966984L) != 0)) {
				{
				{
				setState(127);
				stat();
				}
				}
				setState(132);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(133);
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
		public TerminalNode FLOAT() { return getToken(LucidusParser.FLOAT, 0); }
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
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
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
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(155);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				{
				setState(136);
				match(ID);
				}
				break;
			case 2:
				{
				setState(137);
				match(INT);
				}
				break;
			case 3:
				{
				setState(138);
				match(FLOAT);
				}
				break;
			case 4:
				{
				setState(139);
				match(STRING);
				}
				break;
			case 5:
				{
				setState(140);
				func();
				}
				break;
			case 6:
				{
				setState(141);
				match(PTR);
				setState(142);
				expr(11);
				}
				break;
			case 7:
				{
				setState(144); 
				_errHandler.sync(this);
				_alt = 1;
				do {
					switch (_alt) {
					case 1:
						{
						{
						setState(143);
						match(STAR);
						}
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					setState(146); 
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
				} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
				setState(148);
				expr(10);
				}
				break;
			case 8:
				{
				setState(149);
				match(NOT);
				setState(150);
				expr(9);
				}
				break;
			case 9:
				{
				setState(151);
				match(OPAREN);
				setState(152);
				expr(0);
				setState(153);
				match(CPAREN);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(186);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(184);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(157);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(158);
						match(AND);
						setState(159);
						expr(9);
						}
						break;
					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(160);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(161);
						match(OR);
						setState(162);
						expr(8);
						}
						break;
					case 3:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(163);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(164);
						match(STAR);
						setState(165);
						expr(7);
						}
						break;
					case 4:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(166);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(167);
						match(DIV);
						setState(168);
						expr(6);
						}
						break;
					case 5:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(169);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(170);
						match(PLUS);
						setState(171);
						expr(5);
						}
						break;
					case 6:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(172);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(173);
						match(SUB);
						setState(174);
						expr(4);
						}
						break;
					case 7:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(175);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(176);
						match(DOT);
						setState(177);
						match(ID);
						}
						break;
					case 8:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(178);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(179);
						match(ARROW);
						setState(180);
						match(OPAREN);
						setState(181);
						type();
						setState(182);
						match(CPAREN);
						}
						break;
					}
					} 
				}
				setState(188);
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
		enterRule(_localctx, 28, RULE_struct);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(189);
			match(STRUCT);
			setState(190);
			match(ID);
			setState(191);
			match(LCURLY);
			setState(200);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(192);
				idec();
				setState(197);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(193);
					match(COMMA);
					setState(194);
					idec();
					}
					}
					setState(199);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(202);
			match(RCURLY);
			setState(203);
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
		enterRule(_localctx, 30, RULE_func);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(205);
			match(ID);
			setState(206);
			match(OPAREN);
			setState(215);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 1308885640L) != 0)) {
				{
				setState(207);
				expr(0);
				setState(212);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(208);
					match(COMMA);
					setState(209);
					expr(0);
					}
					}
					setState(214);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(217);
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
		case 13:
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
		"\u0004\u0001\u001e\u00dc\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007"+
		"\u000f\u0001\u0000\u0001\u0000\u0001\u0000\u0005\u0000$\b\u0000\n\u0000"+
		"\f\u0000\'\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001"+
		"\u0002\u0001\u0002\u0005\u0002/\b\u0002\n\u0002\f\u00022\t\u0002\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0003"+
		"\u0004:\b\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0005\u0005B\b\u0005\n\u0005\f\u0005E\t\u0005\u0003"+
		"\u0005G\b\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000bm\b\u000b\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0001\f\u0005\fu\b\f\n\f\f\fx\t\f\u0003\fz"+
		"\b\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0005\f\u0081\b\f\n\f\f\f"+
		"\u0084\t\f\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0004\r\u0091\b\r\u000b\r\f\r\u0092\u0001\r"+
		"\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u009c\b\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0005"+
		"\r\u00b9\b\r\n\r\f\r\u00bc\t\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0005\u000e\u00c4\b\u000e\n\u000e\f\u000e"+
		"\u00c7\t\u000e\u0003\u000e\u00c9\b\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0005"+
		"\u000f\u00d3\b\u000f\n\u000f\f\u000f\u00d6\t\u000f\u0003\u000f\u00d8\b"+
		"\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0000\u0001\u001a\u0010\u0000"+
		"\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c"+
		"\u001e\u0000\u0000\u00f0\u0000%\u0001\u0000\u0000\u0000\u0002*\u0001\u0000"+
		"\u0000\u0000\u0004,\u0001\u0000\u0000\u0000\u00063\u0001\u0000\u0000\u0000"+
		"\b9\u0001\u0000\u0000\u0000\n;\u0001\u0000\u0000\u0000\fM\u0001\u0000"+
		"\u0000\u0000\u000eQ\u0001\u0000\u0000\u0000\u0010V\u0001\u0000\u0000\u0000"+
		"\u0012Y\u0001\u0000\u0000\u0000\u0014^\u0001\u0000\u0000\u0000\u0016l"+
		"\u0001\u0000\u0000\u0000\u0018n\u0001\u0000\u0000\u0000\u001a\u009b\u0001"+
		"\u0000\u0000\u0000\u001c\u00bd\u0001\u0000\u0000\u0000\u001e\u00cd\u0001"+
		"\u0000\u0000\u0000 $\u0003\u0016\u000b\u0000!$\u0003\u0018\f\u0000\"$"+
		"\u0003\u001c\u000e\u0000# \u0001\u0000\u0000\u0000#!\u0001\u0000\u0000"+
		"\u0000#\"\u0001\u0000\u0000\u0000$\'\u0001\u0000\u0000\u0000%#\u0001\u0000"+
		"\u0000\u0000%&\u0001\u0000\u0000\u0000&(\u0001\u0000\u0000\u0000\'%\u0001"+
		"\u0000\u0000\u0000()\u0005\u0000\u0000\u0001)\u0001\u0001\u0000\u0000"+
		"\u0000*+\u0005\u001b\u0000\u0000+\u0003\u0001\u0000\u0000\u0000,0\u0005"+
		"\u001b\u0000\u0000-/\u0005\u0007\u0000\u0000.-\u0001\u0000\u0000\u0000"+
		"/2\u0001\u0000\u0000\u00000.\u0001\u0000\u0000\u000001\u0001\u0000\u0000"+
		"\u00001\u0005\u0001\u0000\u0000\u000020\u0001\u0000\u0000\u000034\u0005"+
		"\u001b\u0000\u000045\u0005\u0013\u0000\u000056\u0003\u0004\u0002\u0000"+
		"6\u0007\u0001\u0000\u0000\u00007:\u0003\u0006\u0003\u00008:\u0005\u0016"+
		"\u0000\u000097\u0001\u0000\u0000\u000098\u0001\u0000\u0000\u0000:\t\u0001"+
		"\u0000\u0000\u0000;<\u0005\u000f\u0000\u0000<=\u0005\u001b\u0000\u0000"+
		"=F\u0005\t\u0000\u0000>C\u0003\b\u0004\u0000?@\u0005\u000b\u0000\u0000"+
		"@B\u0003\b\u0004\u0000A?\u0001\u0000\u0000\u0000BE\u0001\u0000\u0000\u0000"+
		"CA\u0001\u0000\u0000\u0000CD\u0001\u0000\u0000\u0000DG\u0001\u0000\u0000"+
		"\u0000EC\u0001\u0000\u0000\u0000F>\u0001\u0000\u0000\u0000FG\u0001\u0000"+
		"\u0000\u0000GH\u0001\u0000\u0000\u0000HI\u0005\n\u0000\u0000IJ\u0005\u0010"+
		"\u0000\u0000JK\u0003\u0004\u0002\u0000KL\u0005\f\u0000\u0000L\u000b\u0001"+
		"\u0000\u0000\u0000MN\u0005\u0014\u0000\u0000NO\u0003\u001a\r\u0000OP\u0005"+
		"\f\u0000\u0000P\r\u0001\u0000\u0000\u0000QR\u0003\u0006\u0003\u0000RS"+
		"\u0005\u0011\u0000\u0000ST\u0003\u001a\r\u0000TU\u0005\f\u0000\u0000U"+
		"\u000f\u0001\u0000\u0000\u0000VW\u0003\u0006\u0003\u0000WX\u0005\f\u0000"+
		"\u0000X\u0011\u0001\u0000\u0000\u0000YZ\u0005\u001b\u0000\u0000Z[\u0005"+
		"\u0004\u0000\u0000[\\\u0003\u001a\r\u0000\\]\u0005\f\u0000\u0000]\u0013"+
		"\u0001\u0000\u0000\u0000^_\u0003\u001a\r\u0000_`\u0005\u0004\u0000\u0000"+
		"`a\u0003\u001a\r\u0000ab\u0005\f\u0000\u0000b\u0015\u0001\u0000\u0000"+
		"\u0000cm\u0003\u000e\u0007\u0000dm\u0003\u0012\t\u0000em\u0003\u0010\b"+
		"\u0000fm\u0003\u0014\n\u0000gh\u0003\u001a\r\u0000hi\u0005\f\u0000\u0000"+
		"im\u0001\u0000\u0000\u0000jm\u0003\n\u0005\u0000km\u0003\f\u0006\u0000"+
		"lc\u0001\u0000\u0000\u0000ld\u0001\u0000\u0000\u0000le\u0001\u0000\u0000"+
		"\u0000lf\u0001\u0000\u0000\u0000lg\u0001\u0000\u0000\u0000lj\u0001\u0000"+
		"\u0000\u0000lk\u0001\u0000\u0000\u0000m\u0017\u0001\u0000\u0000\u0000"+
		"no\u0005\r\u0000\u0000op\u0005\u001b\u0000\u0000py\u0005\t\u0000\u0000"+
		"qv\u0003\b\u0004\u0000rs\u0005\u000b\u0000\u0000su\u0003\b\u0004\u0000"+
		"tr\u0001\u0000\u0000\u0000ux\u0001\u0000\u0000\u0000vt\u0001\u0000\u0000"+
		"\u0000vw\u0001\u0000\u0000\u0000wz\u0001\u0000\u0000\u0000xv\u0001\u0000"+
		"\u0000\u0000yq\u0001\u0000\u0000\u0000yz\u0001\u0000\u0000\u0000z{\u0001"+
		"\u0000\u0000\u0000{|\u0005\n\u0000\u0000|}\u0005\u0010\u0000\u0000}~\u0005"+
		"\u001b\u0000\u0000~\u0082\u0005\u0017\u0000\u0000\u007f\u0081\u0003\u0016"+
		"\u000b\u0000\u0080\u007f\u0001\u0000\u0000\u0000\u0081\u0084\u0001\u0000"+
		"\u0000\u0000\u0082\u0080\u0001\u0000\u0000\u0000\u0082\u0083\u0001\u0000"+
		"\u0000\u0000\u0083\u0085\u0001\u0000\u0000\u0000\u0084\u0082\u0001\u0000"+
		"\u0000\u0000\u0085\u0086\u0005\u0018\u0000\u0000\u0086\u0019\u0001\u0000"+
		"\u0000\u0000\u0087\u0088\u0006\r\uffff\uffff\u0000\u0088\u009c\u0005\u001b"+
		"\u0000\u0000\u0089\u009c\u0005\u0019\u0000\u0000\u008a\u009c\u0005\u001a"+
		"\u0000\u0000\u008b\u009c\u0005\u001e\u0000\u0000\u008c\u009c\u0003\u001e"+
		"\u000f\u0000\u008d\u008e\u0005\u0012\u0000\u0000\u008e\u009c\u0003\u001a"+
		"\r\u000b\u008f\u0091\u0005\u0007\u0000\u0000\u0090\u008f\u0001\u0000\u0000"+
		"\u0000\u0091\u0092\u0001\u0000\u0000\u0000\u0092\u0090\u0001\u0000\u0000"+
		"\u0000\u0092\u0093\u0001\u0000\u0000\u0000\u0093\u0094\u0001\u0000\u0000"+
		"\u0000\u0094\u009c\u0003\u001a\r\n\u0095\u0096\u0005\u0003\u0000\u0000"+
		"\u0096\u009c\u0003\u001a\r\t\u0097\u0098\u0005\t\u0000\u0000\u0098\u0099"+
		"\u0003\u001a\r\u0000\u0099\u009a\u0005\n\u0000\u0000\u009a\u009c\u0001"+
		"\u0000\u0000\u0000\u009b\u0087\u0001\u0000\u0000\u0000\u009b\u0089\u0001"+
		"\u0000\u0000\u0000\u009b\u008a\u0001\u0000\u0000\u0000\u009b\u008b\u0001"+
		"\u0000\u0000\u0000\u009b\u008c\u0001\u0000\u0000\u0000\u009b\u008d\u0001"+
		"\u0000\u0000\u0000\u009b\u0090\u0001\u0000\u0000\u0000\u009b\u0095\u0001"+
		"\u0000\u0000\u0000\u009b\u0097\u0001\u0000\u0000\u0000\u009c\u00ba\u0001"+
		"\u0000\u0000\u0000\u009d\u009e\n\b\u0000\u0000\u009e\u009f\u0005\u0001"+
		"\u0000\u0000\u009f\u00b9\u0003\u001a\r\t\u00a0\u00a1\n\u0007\u0000\u0000"+
		"\u00a1\u00a2\u0005\u0002\u0000\u0000\u00a2\u00b9\u0003\u001a\r\b\u00a3"+
		"\u00a4\n\u0006\u0000\u0000\u00a4\u00a5\u0005\u0007\u0000\u0000\u00a5\u00b9"+
		"\u0003\u001a\r\u0007\u00a6\u00a7\n\u0005\u0000\u0000\u00a7\u00a8\u0005"+
		"\b\u0000\u0000\u00a8\u00b9\u0003\u001a\r\u0006\u00a9\u00aa\n\u0004\u0000"+
		"\u0000\u00aa\u00ab\u0005\u0005\u0000\u0000\u00ab\u00b9\u0003\u001a\r\u0005"+
		"\u00ac\u00ad\n\u0003\u0000\u0000\u00ad\u00ae\u0005\u0006\u0000\u0000\u00ae"+
		"\u00b9\u0003\u001a\r\u0004\u00af\u00b0\n\r\u0000\u0000\u00b0\u00b1\u0005"+
		"\u0015\u0000\u0000\u00b1\u00b9\u0005\u001b\u0000\u0000\u00b2\u00b3\n\u0002"+
		"\u0000\u0000\u00b3\u00b4\u0005\u0010\u0000\u0000\u00b4\u00b5\u0005\t\u0000"+
		"\u0000\u00b5\u00b6\u0003\u0004\u0002\u0000\u00b6\u00b7\u0005\n\u0000\u0000"+
		"\u00b7\u00b9\u0001\u0000\u0000\u0000\u00b8\u009d\u0001\u0000\u0000\u0000"+
		"\u00b8\u00a0\u0001\u0000\u0000\u0000\u00b8\u00a3\u0001\u0000\u0000\u0000"+
		"\u00b8\u00a6\u0001\u0000\u0000\u0000\u00b8\u00a9\u0001\u0000\u0000\u0000"+
		"\u00b8\u00ac\u0001\u0000\u0000\u0000\u00b8\u00af\u0001\u0000\u0000\u0000"+
		"\u00b8\u00b2\u0001\u0000\u0000\u0000\u00b9\u00bc\u0001\u0000\u0000\u0000"+
		"\u00ba\u00b8\u0001\u0000\u0000\u0000\u00ba\u00bb\u0001\u0000\u0000\u0000"+
		"\u00bb\u001b\u0001\u0000\u0000\u0000\u00bc\u00ba\u0001\u0000\u0000\u0000"+
		"\u00bd\u00be\u0005\u000e\u0000\u0000\u00be\u00bf\u0005\u001b\u0000\u0000"+
		"\u00bf\u00c8\u0005\u0017\u0000\u0000\u00c0\u00c5\u0003\u0006\u0003\u0000"+
		"\u00c1\u00c2\u0005\u000b\u0000\u0000\u00c2\u00c4\u0003\u0006\u0003\u0000"+
		"\u00c3\u00c1\u0001\u0000\u0000\u0000\u00c4\u00c7\u0001\u0000\u0000\u0000"+
		"\u00c5\u00c3\u0001\u0000\u0000\u0000\u00c5\u00c6\u0001\u0000\u0000\u0000"+
		"\u00c6\u00c9\u0001\u0000\u0000\u0000\u00c7\u00c5\u0001\u0000\u0000\u0000"+
		"\u00c8\u00c0\u0001\u0000\u0000\u0000\u00c8\u00c9\u0001\u0000\u0000\u0000"+
		"\u00c9\u00ca\u0001\u0000\u0000\u0000\u00ca\u00cb\u0005\u0018\u0000\u0000"+
		"\u00cb\u00cc\u0005\f\u0000\u0000\u00cc\u001d\u0001\u0000\u0000\u0000\u00cd"+
		"\u00ce\u0005\u001b\u0000\u0000\u00ce\u00d7\u0005\t\u0000\u0000\u00cf\u00d4"+
		"\u0003\u001a\r\u0000\u00d0\u00d1\u0005\u000b\u0000\u0000\u00d1\u00d3\u0003"+
		"\u001a\r\u0000\u00d2\u00d0\u0001\u0000\u0000\u0000\u00d3\u00d6\u0001\u0000"+
		"\u0000\u0000\u00d4\u00d2\u0001\u0000\u0000\u0000\u00d4\u00d5\u0001\u0000"+
		"\u0000\u0000\u00d5\u00d8\u0001\u0000\u0000\u0000\u00d6\u00d4\u0001\u0000"+
		"\u0000\u0000\u00d7\u00cf\u0001\u0000\u0000\u0000\u00d7\u00d8\u0001\u0000"+
		"\u0000\u0000\u00d8\u00d9\u0001\u0000\u0000\u0000\u00d9\u00da\u0005\n\u0000"+
		"\u0000\u00da\u001f\u0001\u0000\u0000\u0000\u0012#%09CFlvy\u0082\u0092"+
		"\u009b\u00b8\u00ba\u00c5\u00c8\u00d4\u00d7";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}