// Generated from /workspaces/codespaces-blank/src/LucidusParser.g4 by ANTLR 4.13.1
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
		AND=1, OR=2, NOT=3, EQ=4, NEQ=5, PLUS=6, SUB=7, STAR=8, DIV=9, MOD=10, 
		OPAREN=11, CPAREN=12, COMMA=13, SEMI=14, DEF=15, STRUCT=16, DECL=17, ARROW=18, 
		GTR=19, LESS=20, DCOL=21, PTR=22, COL=23, RETURN=24, LABEL=25, GOTO=26, 
		DOT=27, DOTS=28, IF=29, IMPRT=30, ELSE=31, LCURLY=32, RCURLY=33, LBRACK=34, 
		RBRACK=35, INT=36, FLOAT=37, ID=38, WS=39, COMMENT=40, STRING=41;
	public static final int
		RULE_program = 0, RULE_rawtype = 1, RULE_fptr = 2, RULE_type = 3, RULE_idec = 4, 
		RULE_param = 5, RULE_dec = 6, RULE_ret = 7, RULE_vdec = 8, RULE_infdec = 9, 
		RULE_edec = 10, RULE_assign = 11, RULE_label = 12, RULE_goto = 13, RULE_if = 14, 
		RULE_imrt = 15, RULE_stat = 16, RULE_def = 17, RULE_func = 18, RULE_expr = 19, 
		RULE_struct = 20;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "rawtype", "fptr", "type", "idec", "param", "dec", "ret", 
			"vdec", "infdec", "edec", "assign", "label", "goto", "if", "imrt", "stat", 
			"def", "func", "expr", "struct"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'&&'", "'||'", "'!'", "'='", "'!='", "'+'", "'-'", "'*'", "'/'", 
			"'%'", "'('", "')'", "','", "';'", "'def'", "'struct'", "'dec'", "'->'", 
			"'>'", "'<'", "':='", "'ptr'", "':'", "'return'", "'label'", "'goto'", 
			"'.'", "'...'", "'if'", "'import'", "'else'", "'{'", "'}'", "'['", "']'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "AND", "OR", "NOT", "EQ", "NEQ", "PLUS", "SUB", "STAR", "DIV", 
			"MOD", "OPAREN", "CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", 
			"ARROW", "GTR", "LESS", "DCOL", "PTR", "COL", "RETURN", "LABEL", "GOTO", 
			"DOT", "DOTS", "IF", "IMPRT", "ELSE", "LCURLY", "RCURLY", "LBRACK", "RBRACK", 
			"INT", "FLOAT", "ID", "WS", "COMMENT", "STRING"
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
			setState(47);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2681792071944L) != 0)) {
				{
				setState(45);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NOT:
				case STAR:
				case OPAREN:
				case DECL:
				case PTR:
				case RETURN:
				case LABEL:
				case GOTO:
				case IF:
				case IMPRT:
				case INT:
				case FLOAT:
				case ID:
				case STRING:
					{
					setState(42);
					stat();
					}
					break;
				case DEF:
					{
					setState(43);
					def();
					}
					break;
				case STRUCT:
					{
					setState(44);
					struct();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(49);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(50);
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
			setState(52);
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
	public static class FptrContext extends ParserRuleContext {
		public List<TerminalNode> OPAREN() { return getTokens(LucidusParser.OPAREN); }
		public TerminalNode OPAREN(int i) {
			return getToken(LucidusParser.OPAREN, i);
		}
		public List<TerminalNode> CPAREN() { return getTokens(LucidusParser.CPAREN); }
		public TerminalNode CPAREN(int i) {
			return getToken(LucidusParser.CPAREN, i);
		}
		public TerminalNode ARROW() { return getToken(LucidusParser.ARROW, 0); }
		public List<TypeContext> type() {
			return getRuleContexts(TypeContext.class);
		}
		public TypeContext type(int i) {
			return getRuleContext(TypeContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(LucidusParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(LucidusParser.COMMA, i);
		}
		public FptrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fptr; }
	}

	public final FptrContext fptr() throws RecognitionException {
		FptrContext _localctx = new FptrContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_fptr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(54);
			match(OPAREN);
			setState(63);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OPAREN || _la==ID) {
				{
				setState(55);
				type();
				setState(60);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(56);
					match(COMMA);
					setState(57);
					type();
					}
					}
					setState(62);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(65);
			match(CPAREN);
			setState(66);
			match(ARROW);
			setState(67);
			match(OPAREN);
			setState(68);
			type();
			setState(69);
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

	@SuppressWarnings("CheckReturnValue")
	public static class TypeContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public FptrContext fptr() {
			return getRuleContext(FptrContext.class,0);
		}
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
		enterRule(_localctx, 6, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(73);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(71);
				match(ID);
				}
				break;
			case OPAREN:
				{
				setState(72);
				fptr();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(78);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==STAR) {
				{
				{
				setState(75);
				match(STAR);
				}
				}
				setState(80);
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
		enterRule(_localctx, 8, RULE_idec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(81);
			match(ID);
			setState(82);
			match(COL);
			setState(83);
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
		enterRule(_localctx, 10, RULE_param);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(85);
				idec();
				}
				break;
			case DOTS:
				{
				setState(86);
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
		enterRule(_localctx, 12, RULE_dec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			match(DECL);
			setState(90);
			match(ID);
			setState(91);
			match(OPAREN);
			setState(100);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOTS || _la==ID) {
				{
				setState(92);
				param();
				setState(97);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(93);
					match(COMMA);
					setState(94);
					param();
					}
					}
					setState(99);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(102);
			match(CPAREN);
			setState(103);
			match(ARROW);
			setState(104);
			type();
			setState(105);
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
		enterRule(_localctx, 14, RULE_ret);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(107);
			match(RETURN);
			setState(108);
			expr(0);
			setState(109);
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
		public TerminalNode EQ() { return getToken(LucidusParser.EQ, 0); }
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
		enterRule(_localctx, 16, RULE_vdec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(111);
			idec();
			setState(112);
			match(EQ);
			setState(113);
			expr(0);
			setState(114);
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
	public static class InfdecContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public TerminalNode DCOL() { return getToken(LucidusParser.DCOL, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(LucidusParser.SEMI, 0); }
		public InfdecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_infdec; }
	}

	public final InfdecContext infdec() throws RecognitionException {
		InfdecContext _localctx = new InfdecContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_infdec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(116);
			match(ID);
			setState(117);
			match(DCOL);
			setState(118);
			expr(0);
			setState(119);
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
		enterRule(_localctx, 20, RULE_edec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(121);
			idec();
			setState(122);
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
		enterRule(_localctx, 22, RULE_assign);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(124);
			expr(0);
			setState(125);
			match(EQ);
			setState(126);
			expr(0);
			setState(127);
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
	public static class LabelContext extends ParserRuleContext {
		public TerminalNode LABEL() { return getToken(LucidusParser.LABEL, 0); }
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public TerminalNode COL() { return getToken(LucidusParser.COL, 0); }
		public LabelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_label; }
	}

	public final LabelContext label() throws RecognitionException {
		LabelContext _localctx = new LabelContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_label);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(129);
			match(LABEL);
			setState(130);
			match(ID);
			setState(131);
			match(COL);
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
	public static class GotoContext extends ParserRuleContext {
		public TerminalNode GOTO() { return getToken(LucidusParser.GOTO, 0); }
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public TerminalNode SEMI() { return getToken(LucidusParser.SEMI, 0); }
		public GotoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_goto; }
	}

	public final GotoContext goto_() throws RecognitionException {
		GotoContext _localctx = new GotoContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_goto);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(133);
			match(GOTO);
			setState(134);
			match(ID);
			setState(135);
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
	public static class IfContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(LucidusParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode ARROW() { return getToken(LucidusParser.ARROW, 0); }
		public TerminalNode LCURLY() { return getToken(LucidusParser.LCURLY, 0); }
		public TerminalNode RCURLY() { return getToken(LucidusParser.RCURLY, 0); }
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public IfContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if; }
	}

	public final IfContext if_() throws RecognitionException {
		IfContext _localctx = new IfContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_if);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(137);
			match(IF);
			setState(138);
			expr(0);
			setState(139);
			match(ARROW);
			setState(140);
			match(LCURLY);
			setState(144);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2681791973640L) != 0)) {
				{
				{
				setState(141);
				stat();
				}
				}
				setState(146);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(147);
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
	public static class ImrtContext extends ParserRuleContext {
		public TerminalNode IMPRT() { return getToken(LucidusParser.IMPRT, 0); }
		public TerminalNode STRING() { return getToken(LucidusParser.STRING, 0); }
		public ImrtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_imrt; }
	}

	public final ImrtContext imrt() throws RecognitionException {
		ImrtContext _localctx = new ImrtContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_imrt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			match(IMPRT);
			setState(150);
			match(STRING);
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
		public InfdecContext infdec() {
			return getRuleContext(InfdecContext.class,0);
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
		public LabelContext label() {
			return getRuleContext(LabelContext.class,0);
		}
		public GotoContext goto_() {
			return getRuleContext(GotoContext.class,0);
		}
		public IfContext if_() {
			return getRuleContext(IfContext.class,0);
		}
		public ImrtContext imrt() {
			return getRuleContext(ImrtContext.class,0);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_stat);
		try {
			setState(165);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(152);
				vdec();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(153);
				infdec();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(154);
				edec();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(155);
				assign();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(156);
				expr(0);
				setState(157);
				match(SEMI);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(159);
				dec();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(160);
				ret();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(161);
				label();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(162);
				goto_();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(163);
				if_();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(164);
				imrt();
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
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
		public TerminalNode OPAREN() { return getToken(LucidusParser.OPAREN, 0); }
		public TerminalNode CPAREN() { return getToken(LucidusParser.CPAREN, 0); }
		public TerminalNode ARROW() { return getToken(LucidusParser.ARROW, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
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
		enterRule(_localctx, 34, RULE_def);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(167);
			match(DEF);
			setState(168);
			match(ID);
			setState(169);
			match(OPAREN);
			setState(178);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOTS || _la==ID) {
				{
				setState(170);
				param();
				setState(175);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(171);
					match(COMMA);
					setState(172);
					param();
					}
					}
					setState(177);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(180);
			match(CPAREN);
			setState(181);
			match(ARROW);
			setState(182);
			type();
			setState(183);
			match(LCURLY);
			setState(187);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2681791973640L) != 0)) {
				{
				{
				setState(184);
				stat();
				}
				}
				setState(189);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(190);
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
	public static class FuncContext extends ParserRuleContext {
		public List<TerminalNode> OPAREN() { return getTokens(LucidusParser.OPAREN); }
		public TerminalNode OPAREN(int i) {
			return getToken(LucidusParser.OPAREN, i);
		}
		public List<TerminalNode> CPAREN() { return getTokens(LucidusParser.CPAREN); }
		public TerminalNode CPAREN(int i) {
			return getToken(LucidusParser.CPAREN, i);
		}
		public TerminalNode ID() { return getToken(LucidusParser.ID, 0); }
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
		enterRule(_localctx, 36, RULE_func);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(197);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(192);
				match(ID);
				}
				break;
			case OPAREN:
				{
				setState(193);
				match(OPAREN);
				setState(194);
				expr(0);
				setState(195);
				match(CPAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(199);
			match(OPAREN);
			setState(208);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2680063789320L) != 0)) {
				{
				setState(200);
				expr(0);
				setState(205);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(201);
					match(COMMA);
					setState(202);
					expr(0);
					}
					}
					setState(207);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(210);
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
		public TerminalNode STAR() { return getToken(LucidusParser.STAR, 0); }
		public TerminalNode NOT() { return getToken(LucidusParser.NOT, 0); }
		public TerminalNode OPAREN() { return getToken(LucidusParser.OPAREN, 0); }
		public TerminalNode CPAREN() { return getToken(LucidusParser.CPAREN, 0); }
		public TerminalNode AND() { return getToken(LucidusParser.AND, 0); }
		public TerminalNode OR() { return getToken(LucidusParser.OR, 0); }
		public TerminalNode DIV() { return getToken(LucidusParser.DIV, 0); }
		public TerminalNode PLUS() { return getToken(LucidusParser.PLUS, 0); }
		public TerminalNode SUB() { return getToken(LucidusParser.SUB, 0); }
		public TerminalNode MOD() { return getToken(LucidusParser.MOD, 0); }
		public List<TerminalNode> EQ() { return getTokens(LucidusParser.EQ); }
		public TerminalNode EQ(int i) {
			return getToken(LucidusParser.EQ, i);
		}
		public TerminalNode NEQ() { return getToken(LucidusParser.NEQ, 0); }
		public TerminalNode GTR() { return getToken(LucidusParser.GTR, 0); }
		public TerminalNode LESS() { return getToken(LucidusParser.LESS, 0); }
		public TerminalNode DOT() { return getToken(LucidusParser.DOT, 0); }
		public TerminalNode ARROW() { return getToken(LucidusParser.ARROW, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode LBRACK() { return getToken(LucidusParser.LBRACK, 0); }
		public TerminalNode RBRACK() { return getToken(LucidusParser.RBRACK, 0); }
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
		int _startState = 38;
		enterRecursionRule(_localctx, 38, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(228);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				{
				setState(213);
				match(ID);
				}
				break;
			case 2:
				{
				setState(214);
				match(INT);
				}
				break;
			case 3:
				{
				setState(215);
				match(FLOAT);
				}
				break;
			case 4:
				{
				setState(216);
				match(STRING);
				}
				break;
			case 5:
				{
				setState(217);
				func();
				}
				break;
			case 6:
				{
				setState(218);
				match(PTR);
				setState(219);
				expr(17);
				}
				break;
			case 7:
				{
				setState(220);
				match(STAR);
				setState(221);
				expr(15);
				}
				break;
			case 8:
				{
				setState(222);
				match(NOT);
				setState(223);
				expr(14);
				}
				break;
			case 9:
				{
				setState(224);
				match(OPAREN);
				setState(225);
				expr(0);
				setState(226);
				match(CPAREN);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(282);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(280);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(230);
						if (!(precpred(_ctx, 16))) throw new FailedPredicateException(this, "precpred(_ctx, 16)");
						setState(231);
						match(STAR);
						setState(232);
						expr(17);
						}
						break;
					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(233);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(234);
						match(AND);
						setState(235);
						expr(14);
						}
						break;
					case 3:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(236);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(237);
						match(OR);
						setState(238);
						expr(13);
						}
						break;
					case 4:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(239);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(240);
						match(DIV);
						setState(241);
						expr(12);
						}
						break;
					case 5:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(242);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(243);
						match(PLUS);
						setState(244);
						expr(11);
						}
						break;
					case 6:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(245);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(246);
						match(SUB);
						setState(247);
						expr(10);
						}
						break;
					case 7:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(248);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(249);
						match(MOD);
						setState(250);
						expr(9);
						}
						break;
					case 8:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(251);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(252);
						match(EQ);
						setState(253);
						match(EQ);
						setState(254);
						expr(7);
						}
						break;
					case 9:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(255);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(256);
						match(NEQ);
						setState(257);
						expr(6);
						}
						break;
					case 10:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(258);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(259);
						match(GTR);
						setState(260);
						expr(5);
						}
						break;
					case 11:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(261);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(262);
						match(LESS);
						setState(263);
						expr(4);
						}
						break;
					case 12:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(264);
						if (!(precpred(_ctx, 20))) throw new FailedPredicateException(this, "precpred(_ctx, 20)");
						setState(265);
						match(DOT);
						setState(266);
						match(ID);
						}
						break;
					case 13:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(267);
						if (!(precpred(_ctx, 19))) throw new FailedPredicateException(this, "precpred(_ctx, 19)");
						setState(268);
						match(ARROW);
						setState(269);
						match(ID);
						}
						break;
					case 14:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(270);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(271);
						match(ARROW);
						setState(272);
						match(OPAREN);
						setState(273);
						type();
						setState(274);
						match(CPAREN);
						}
						break;
					case 15:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(276);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(277);
						match(LBRACK);
						setState(278);
						match(INT);
						setState(279);
						match(RBRACK);
						}
						break;
					}
					} 
				}
				setState(284);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
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
		enterRule(_localctx, 40, RULE_struct);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(285);
			match(STRUCT);
			setState(286);
			match(ID);
			setState(287);
			match(LCURLY);
			setState(296);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(288);
				idec();
				setState(293);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(289);
					match(COMMA);
					setState(290);
					idec();
					}
					}
					setState(295);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(298);
			match(RCURLY);
			setState(299);
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 19:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 16);
		case 1:
			return precpred(_ctx, 13);
		case 2:
			return precpred(_ctx, 12);
		case 3:
			return precpred(_ctx, 11);
		case 4:
			return precpred(_ctx, 10);
		case 5:
			return precpred(_ctx, 9);
		case 6:
			return precpred(_ctx, 8);
		case 7:
			return precpred(_ctx, 6);
		case 8:
			return precpred(_ctx, 5);
		case 9:
			return precpred(_ctx, 4);
		case 10:
			return precpred(_ctx, 3);
		case 11:
			return precpred(_ctx, 20);
		case 12:
			return precpred(_ctx, 19);
		case 13:
			return precpred(_ctx, 7);
		case 14:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001)\u012e\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0005\u0000.\b\u0000\n\u0000\f\u00001\t\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0005\u0002;\b\u0002\n\u0002\f\u0002>\t\u0002\u0003\u0002"+
		"@\b\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0003\u0001\u0003\u0003\u0003J\b\u0003\u0001\u0003"+
		"\u0005\u0003M\b\u0003\n\u0003\f\u0003P\t\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0003\u0005X\b\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0005\u0006`\b\u0006\n\u0006\f\u0006c\t\u0006\u0003\u0006e\b\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b"+
		"\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001\f"+
		"\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0005\u000e\u008f\b\u000e\n\u000e"+
		"\f\u000e\u0092\t\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f"+
		"\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0003\u0010\u00a6\b\u0010\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0005\u0011\u00ae\b\u0011"+
		"\n\u0011\f\u0011\u00b1\t\u0011\u0003\u0011\u00b3\b\u0011\u0001\u0011\u0001"+
		"\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0005\u0011\u00ba\b\u0011\n"+
		"\u0011\f\u0011\u00bd\t\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0003\u0012\u00c6\b\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0005\u0012\u00cc\b\u0012\n"+
		"\u0012\f\u0012\u00cf\t\u0012\u0003\u0012\u00d1\b\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0003\u0013\u00e5"+
		"\b\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0005\u0013\u0119\b\u0013\n\u0013\f\u0013"+
		"\u011c\t\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0005\u0014\u0124\b\u0014\n\u0014\f\u0014\u0127\t\u0014\u0003"+
		"\u0014\u0129\b\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0000"+
		"\u0001&\u0015\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016"+
		"\u0018\u001a\u001c\u001e \"$&(\u0000\u0000\u014c\u0000/\u0001\u0000\u0000"+
		"\u0000\u00024\u0001\u0000\u0000\u0000\u00046\u0001\u0000\u0000\u0000\u0006"+
		"I\u0001\u0000\u0000\u0000\bQ\u0001\u0000\u0000\u0000\nW\u0001\u0000\u0000"+
		"\u0000\fY\u0001\u0000\u0000\u0000\u000ek\u0001\u0000\u0000\u0000\u0010"+
		"o\u0001\u0000\u0000\u0000\u0012t\u0001\u0000\u0000\u0000\u0014y\u0001"+
		"\u0000\u0000\u0000\u0016|\u0001\u0000\u0000\u0000\u0018\u0081\u0001\u0000"+
		"\u0000\u0000\u001a\u0085\u0001\u0000\u0000\u0000\u001c\u0089\u0001\u0000"+
		"\u0000\u0000\u001e\u0095\u0001\u0000\u0000\u0000 \u00a5\u0001\u0000\u0000"+
		"\u0000\"\u00a7\u0001\u0000\u0000\u0000$\u00c5\u0001\u0000\u0000\u0000"+
		"&\u00e4\u0001\u0000\u0000\u0000(\u011d\u0001\u0000\u0000\u0000*.\u0003"+
		" \u0010\u0000+.\u0003\"\u0011\u0000,.\u0003(\u0014\u0000-*\u0001\u0000"+
		"\u0000\u0000-+\u0001\u0000\u0000\u0000-,\u0001\u0000\u0000\u0000.1\u0001"+
		"\u0000\u0000\u0000/-\u0001\u0000\u0000\u0000/0\u0001\u0000\u0000\u0000"+
		"02\u0001\u0000\u0000\u00001/\u0001\u0000\u0000\u000023\u0005\u0000\u0000"+
		"\u00013\u0001\u0001\u0000\u0000\u000045\u0005&\u0000\u00005\u0003\u0001"+
		"\u0000\u0000\u00006?\u0005\u000b\u0000\u00007<\u0003\u0006\u0003\u0000"+
		"89\u0005\r\u0000\u00009;\u0003\u0006\u0003\u0000:8\u0001\u0000\u0000\u0000"+
		";>\u0001\u0000\u0000\u0000<:\u0001\u0000\u0000\u0000<=\u0001\u0000\u0000"+
		"\u0000=@\u0001\u0000\u0000\u0000><\u0001\u0000\u0000\u0000?7\u0001\u0000"+
		"\u0000\u0000?@\u0001\u0000\u0000\u0000@A\u0001\u0000\u0000\u0000AB\u0005"+
		"\f\u0000\u0000BC\u0005\u0012\u0000\u0000CD\u0005\u000b\u0000\u0000DE\u0003"+
		"\u0006\u0003\u0000EF\u0005\f\u0000\u0000F\u0005\u0001\u0000\u0000\u0000"+
		"GJ\u0005&\u0000\u0000HJ\u0003\u0004\u0002\u0000IG\u0001\u0000\u0000\u0000"+
		"IH\u0001\u0000\u0000\u0000JN\u0001\u0000\u0000\u0000KM\u0005\b\u0000\u0000"+
		"LK\u0001\u0000\u0000\u0000MP\u0001\u0000\u0000\u0000NL\u0001\u0000\u0000"+
		"\u0000NO\u0001\u0000\u0000\u0000O\u0007\u0001\u0000\u0000\u0000PN\u0001"+
		"\u0000\u0000\u0000QR\u0005&\u0000\u0000RS\u0005\u0017\u0000\u0000ST\u0003"+
		"\u0006\u0003\u0000T\t\u0001\u0000\u0000\u0000UX\u0003\b\u0004\u0000VX"+
		"\u0005\u001c\u0000\u0000WU\u0001\u0000\u0000\u0000WV\u0001\u0000\u0000"+
		"\u0000X\u000b\u0001\u0000\u0000\u0000YZ\u0005\u0011\u0000\u0000Z[\u0005"+
		"&\u0000\u0000[d\u0005\u000b\u0000\u0000\\a\u0003\n\u0005\u0000]^\u0005"+
		"\r\u0000\u0000^`\u0003\n\u0005\u0000_]\u0001\u0000\u0000\u0000`c\u0001"+
		"\u0000\u0000\u0000a_\u0001\u0000\u0000\u0000ab\u0001\u0000\u0000\u0000"+
		"be\u0001\u0000\u0000\u0000ca\u0001\u0000\u0000\u0000d\\\u0001\u0000\u0000"+
		"\u0000de\u0001\u0000\u0000\u0000ef\u0001\u0000\u0000\u0000fg\u0005\f\u0000"+
		"\u0000gh\u0005\u0012\u0000\u0000hi\u0003\u0006\u0003\u0000ij\u0005\u000e"+
		"\u0000\u0000j\r\u0001\u0000\u0000\u0000kl\u0005\u0018\u0000\u0000lm\u0003"+
		"&\u0013\u0000mn\u0005\u000e\u0000\u0000n\u000f\u0001\u0000\u0000\u0000"+
		"op\u0003\b\u0004\u0000pq\u0005\u0004\u0000\u0000qr\u0003&\u0013\u0000"+
		"rs\u0005\u000e\u0000\u0000s\u0011\u0001\u0000\u0000\u0000tu\u0005&\u0000"+
		"\u0000uv\u0005\u0015\u0000\u0000vw\u0003&\u0013\u0000wx\u0005\u000e\u0000"+
		"\u0000x\u0013\u0001\u0000\u0000\u0000yz\u0003\b\u0004\u0000z{\u0005\u000e"+
		"\u0000\u0000{\u0015\u0001\u0000\u0000\u0000|}\u0003&\u0013\u0000}~\u0005"+
		"\u0004\u0000\u0000~\u007f\u0003&\u0013\u0000\u007f\u0080\u0005\u000e\u0000"+
		"\u0000\u0080\u0017\u0001\u0000\u0000\u0000\u0081\u0082\u0005\u0019\u0000"+
		"\u0000\u0082\u0083\u0005&\u0000\u0000\u0083\u0084\u0005\u0017\u0000\u0000"+
		"\u0084\u0019\u0001\u0000\u0000\u0000\u0085\u0086\u0005\u001a\u0000\u0000"+
		"\u0086\u0087\u0005&\u0000\u0000\u0087\u0088\u0005\u000e\u0000\u0000\u0088"+
		"\u001b\u0001\u0000\u0000\u0000\u0089\u008a\u0005\u001d\u0000\u0000\u008a"+
		"\u008b\u0003&\u0013\u0000\u008b\u008c\u0005\u0012\u0000\u0000\u008c\u0090"+
		"\u0005 \u0000\u0000\u008d\u008f\u0003 \u0010\u0000\u008e\u008d\u0001\u0000"+
		"\u0000\u0000\u008f\u0092\u0001\u0000\u0000\u0000\u0090\u008e\u0001\u0000"+
		"\u0000\u0000\u0090\u0091\u0001\u0000\u0000\u0000\u0091\u0093\u0001\u0000"+
		"\u0000\u0000\u0092\u0090\u0001\u0000\u0000\u0000\u0093\u0094\u0005!\u0000"+
		"\u0000\u0094\u001d\u0001\u0000\u0000\u0000\u0095\u0096\u0005\u001e\u0000"+
		"\u0000\u0096\u0097\u0005)\u0000\u0000\u0097\u001f\u0001\u0000\u0000\u0000"+
		"\u0098\u00a6\u0003\u0010\b\u0000\u0099\u00a6\u0003\u0012\t\u0000\u009a"+
		"\u00a6\u0003\u0014\n\u0000\u009b\u00a6\u0003\u0016\u000b\u0000\u009c\u009d"+
		"\u0003&\u0013\u0000\u009d\u009e\u0005\u000e\u0000\u0000\u009e\u00a6\u0001"+
		"\u0000\u0000\u0000\u009f\u00a6\u0003\f\u0006\u0000\u00a0\u00a6\u0003\u000e"+
		"\u0007\u0000\u00a1\u00a6\u0003\u0018\f\u0000\u00a2\u00a6\u0003\u001a\r"+
		"\u0000\u00a3\u00a6\u0003\u001c\u000e\u0000\u00a4\u00a6\u0003\u001e\u000f"+
		"\u0000\u00a5\u0098\u0001\u0000\u0000\u0000\u00a5\u0099\u0001\u0000\u0000"+
		"\u0000\u00a5\u009a\u0001\u0000\u0000\u0000\u00a5\u009b\u0001\u0000\u0000"+
		"\u0000\u00a5\u009c\u0001\u0000\u0000\u0000\u00a5\u009f\u0001\u0000\u0000"+
		"\u0000\u00a5\u00a0\u0001\u0000\u0000\u0000\u00a5\u00a1\u0001\u0000\u0000"+
		"\u0000\u00a5\u00a2\u0001\u0000\u0000\u0000\u00a5\u00a3\u0001\u0000\u0000"+
		"\u0000\u00a5\u00a4\u0001\u0000\u0000\u0000\u00a6!\u0001\u0000\u0000\u0000"+
		"\u00a7\u00a8\u0005\u000f\u0000\u0000\u00a8\u00a9\u0005&\u0000\u0000\u00a9"+
		"\u00b2\u0005\u000b\u0000\u0000\u00aa\u00af\u0003\n\u0005\u0000\u00ab\u00ac"+
		"\u0005\r\u0000\u0000\u00ac\u00ae\u0003\n\u0005\u0000\u00ad\u00ab\u0001"+
		"\u0000\u0000\u0000\u00ae\u00b1\u0001\u0000\u0000\u0000\u00af\u00ad\u0001"+
		"\u0000\u0000\u0000\u00af\u00b0\u0001\u0000\u0000\u0000\u00b0\u00b3\u0001"+
		"\u0000\u0000\u0000\u00b1\u00af\u0001\u0000\u0000\u0000\u00b2\u00aa\u0001"+
		"\u0000\u0000\u0000\u00b2\u00b3\u0001\u0000\u0000\u0000\u00b3\u00b4\u0001"+
		"\u0000\u0000\u0000\u00b4\u00b5\u0005\f\u0000\u0000\u00b5\u00b6\u0005\u0012"+
		"\u0000\u0000\u00b6\u00b7\u0003\u0006\u0003\u0000\u00b7\u00bb\u0005 \u0000"+
		"\u0000\u00b8\u00ba\u0003 \u0010\u0000\u00b9\u00b8\u0001\u0000\u0000\u0000"+
		"\u00ba\u00bd\u0001\u0000\u0000\u0000\u00bb\u00b9\u0001\u0000\u0000\u0000"+
		"\u00bb\u00bc\u0001\u0000\u0000\u0000\u00bc\u00be\u0001\u0000\u0000\u0000"+
		"\u00bd\u00bb\u0001\u0000\u0000\u0000\u00be\u00bf\u0005!\u0000\u0000\u00bf"+
		"#\u0001\u0000\u0000\u0000\u00c0\u00c6\u0005&\u0000\u0000\u00c1\u00c2\u0005"+
		"\u000b\u0000\u0000\u00c2\u00c3\u0003&\u0013\u0000\u00c3\u00c4\u0005\f"+
		"\u0000\u0000\u00c4\u00c6\u0001\u0000\u0000\u0000\u00c5\u00c0\u0001\u0000"+
		"\u0000\u0000\u00c5\u00c1\u0001\u0000\u0000\u0000\u00c6\u00c7\u0001\u0000"+
		"\u0000\u0000\u00c7\u00d0\u0005\u000b\u0000\u0000\u00c8\u00cd\u0003&\u0013"+
		"\u0000\u00c9\u00ca\u0005\r\u0000\u0000\u00ca\u00cc\u0003&\u0013\u0000"+
		"\u00cb\u00c9\u0001\u0000\u0000\u0000\u00cc\u00cf\u0001\u0000\u0000\u0000"+
		"\u00cd\u00cb\u0001\u0000\u0000\u0000\u00cd\u00ce\u0001\u0000\u0000\u0000"+
		"\u00ce\u00d1\u0001\u0000\u0000\u0000\u00cf\u00cd\u0001\u0000\u0000\u0000"+
		"\u00d0\u00c8\u0001\u0000\u0000\u0000\u00d0\u00d1\u0001\u0000\u0000\u0000"+
		"\u00d1\u00d2\u0001\u0000\u0000\u0000\u00d2\u00d3\u0005\f\u0000\u0000\u00d3"+
		"%\u0001\u0000\u0000\u0000\u00d4\u00d5\u0006\u0013\uffff\uffff\u0000\u00d5"+
		"\u00e5\u0005&\u0000\u0000\u00d6\u00e5\u0005$\u0000\u0000\u00d7\u00e5\u0005"+
		"%\u0000\u0000\u00d8\u00e5\u0005)\u0000\u0000\u00d9\u00e5\u0003$\u0012"+
		"\u0000\u00da\u00db\u0005\u0016\u0000\u0000\u00db\u00e5\u0003&\u0013\u0011"+
		"\u00dc\u00dd\u0005\b\u0000\u0000\u00dd\u00e5\u0003&\u0013\u000f\u00de"+
		"\u00df\u0005\u0003\u0000\u0000\u00df\u00e5\u0003&\u0013\u000e\u00e0\u00e1"+
		"\u0005\u000b\u0000\u0000\u00e1\u00e2\u0003&\u0013\u0000\u00e2\u00e3\u0005"+
		"\f\u0000\u0000\u00e3\u00e5\u0001\u0000\u0000\u0000\u00e4\u00d4\u0001\u0000"+
		"\u0000\u0000\u00e4\u00d6\u0001\u0000\u0000\u0000\u00e4\u00d7\u0001\u0000"+
		"\u0000\u0000\u00e4\u00d8\u0001\u0000\u0000\u0000\u00e4\u00d9\u0001\u0000"+
		"\u0000\u0000\u00e4\u00da\u0001\u0000\u0000\u0000\u00e4\u00dc\u0001\u0000"+
		"\u0000\u0000\u00e4\u00de\u0001\u0000\u0000\u0000\u00e4\u00e0\u0001\u0000"+
		"\u0000\u0000\u00e5\u011a\u0001\u0000\u0000\u0000\u00e6\u00e7\n\u0010\u0000"+
		"\u0000\u00e7\u00e8\u0005\b\u0000\u0000\u00e8\u0119\u0003&\u0013\u0011"+
		"\u00e9\u00ea\n\r\u0000\u0000\u00ea\u00eb\u0005\u0001\u0000\u0000\u00eb"+
		"\u0119\u0003&\u0013\u000e\u00ec\u00ed\n\f\u0000\u0000\u00ed\u00ee\u0005"+
		"\u0002\u0000\u0000\u00ee\u0119\u0003&\u0013\r\u00ef\u00f0\n\u000b\u0000"+
		"\u0000\u00f0\u00f1\u0005\t\u0000\u0000\u00f1\u0119\u0003&\u0013\f\u00f2"+
		"\u00f3\n\n\u0000\u0000\u00f3\u00f4\u0005\u0006\u0000\u0000\u00f4\u0119"+
		"\u0003&\u0013\u000b\u00f5\u00f6\n\t\u0000\u0000\u00f6\u00f7\u0005\u0007"+
		"\u0000\u0000\u00f7\u0119\u0003&\u0013\n\u00f8\u00f9\n\b\u0000\u0000\u00f9"+
		"\u00fa\u0005\n\u0000\u0000\u00fa\u0119\u0003&\u0013\t\u00fb\u00fc\n\u0006"+
		"\u0000\u0000\u00fc\u00fd\u0005\u0004\u0000\u0000\u00fd\u00fe\u0005\u0004"+
		"\u0000\u0000\u00fe\u0119\u0003&\u0013\u0007\u00ff\u0100\n\u0005\u0000"+
		"\u0000\u0100\u0101\u0005\u0005\u0000\u0000\u0101\u0119\u0003&\u0013\u0006"+
		"\u0102\u0103\n\u0004\u0000\u0000\u0103\u0104\u0005\u0013\u0000\u0000\u0104"+
		"\u0119\u0003&\u0013\u0005\u0105\u0106\n\u0003\u0000\u0000\u0106\u0107"+
		"\u0005\u0014\u0000\u0000\u0107\u0119\u0003&\u0013\u0004\u0108\u0109\n"+
		"\u0014\u0000\u0000\u0109\u010a\u0005\u001b\u0000\u0000\u010a\u0119\u0005"+
		"&\u0000\u0000\u010b\u010c\n\u0013\u0000\u0000\u010c\u010d\u0005\u0012"+
		"\u0000\u0000\u010d\u0119\u0005&\u0000\u0000\u010e\u010f\n\u0007\u0000"+
		"\u0000\u010f\u0110\u0005\u0012\u0000\u0000\u0110\u0111\u0005\u000b\u0000"+
		"\u0000\u0111\u0112\u0003\u0006\u0003\u0000\u0112\u0113\u0005\f\u0000\u0000"+
		"\u0113\u0119\u0001\u0000\u0000\u0000\u0114\u0115\n\u0001\u0000\u0000\u0115"+
		"\u0116\u0005\"\u0000\u0000\u0116\u0117\u0005$\u0000\u0000\u0117\u0119"+
		"\u0005#\u0000\u0000\u0118\u00e6\u0001\u0000\u0000\u0000\u0118\u00e9\u0001"+
		"\u0000\u0000\u0000\u0118\u00ec\u0001\u0000\u0000\u0000\u0118\u00ef\u0001"+
		"\u0000\u0000\u0000\u0118\u00f2\u0001\u0000\u0000\u0000\u0118\u00f5\u0001"+
		"\u0000\u0000\u0000\u0118\u00f8\u0001\u0000\u0000\u0000\u0118\u00fb\u0001"+
		"\u0000\u0000\u0000\u0118\u00ff\u0001\u0000\u0000\u0000\u0118\u0102\u0001"+
		"\u0000\u0000\u0000\u0118\u0105\u0001\u0000\u0000\u0000\u0118\u0108\u0001"+
		"\u0000\u0000\u0000\u0118\u010b\u0001\u0000\u0000\u0000\u0118\u010e\u0001"+
		"\u0000\u0000\u0000\u0118\u0114\u0001\u0000\u0000\u0000\u0119\u011c\u0001"+
		"\u0000\u0000\u0000\u011a\u0118\u0001\u0000\u0000\u0000\u011a\u011b\u0001"+
		"\u0000\u0000\u0000\u011b\'\u0001\u0000\u0000\u0000\u011c\u011a\u0001\u0000"+
		"\u0000\u0000\u011d\u011e\u0005\u0010\u0000\u0000\u011e\u011f\u0005&\u0000"+
		"\u0000\u011f\u0128\u0005 \u0000\u0000\u0120\u0125\u0003\b\u0004\u0000"+
		"\u0121\u0122\u0005\r\u0000\u0000\u0122\u0124\u0003\b\u0004\u0000\u0123"+
		"\u0121\u0001\u0000\u0000\u0000\u0124\u0127\u0001\u0000\u0000\u0000\u0125"+
		"\u0123\u0001\u0000\u0000\u0000\u0125\u0126\u0001\u0000\u0000\u0000\u0126"+
		"\u0129\u0001\u0000\u0000\u0000\u0127\u0125\u0001\u0000\u0000\u0000\u0128"+
		"\u0120\u0001\u0000\u0000\u0000\u0128\u0129\u0001\u0000\u0000\u0000\u0129"+
		"\u012a\u0001\u0000\u0000\u0000\u012a\u012b\u0005!\u0000\u0000\u012b\u012c"+
		"\u0005\u000e\u0000\u0000\u012c)\u0001\u0000\u0000\u0000\u0016-/<?INWa"+
		"d\u0090\u00a5\u00af\u00b2\u00bb\u00c5\u00cd\u00d0\u00e4\u0118\u011a\u0125"+
		"\u0128";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}