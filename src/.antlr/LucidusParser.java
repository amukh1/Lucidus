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
		DOT=27, DOTS=28, IF=29, IMPRT=30, ELSE=31, WHILE=32, SIZEOF=33, LCURLY=34, 
		RCURLY=35, LBRACK=36, RBRACK=37, INT=38, FLOAT=39, ID=40, WS=41, COMMENT=42, 
		STRING=43;
	public static final int
		RULE_program = 0, RULE_rawtype = 1, RULE_fptr = 2, RULE_type = 3, RULE_idec = 4, 
		RULE_param = 5, RULE_dec = 6, RULE_ret = 7, RULE_vdec = 8, RULE_infdec = 9, 
		RULE_edec = 10, RULE_assign = 11, RULE_label = 12, RULE_goto = 13, RULE_if = 14, 
		RULE_while = 15, RULE_imrt = 16, RULE_stat = 17, RULE_def = 18, RULE_func = 19, 
		RULE_expr = 20, RULE_struct = 21;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "rawtype", "fptr", "type", "idec", "param", "dec", "ret", 
			"vdec", "infdec", "edec", "assign", "label", "goto", "if", "while", "imrt", 
			"stat", "def", "func", "expr", "struct"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'&&'", "'||'", "'!'", "'='", "'!='", "'+'", "'-'", "'*'", "'/'", 
			"'%'", "'('", "')'", "','", "';'", "'def'", "'struct'", "'dec'", "'->'", 
			"'>'", "'<'", "':='", "'ptr'", "':'", "'return'", "'label'", "'goto'", 
			"'.'", "'...'", "'if'", "'import'", "'else'", "'while'", "'sizeof'", 
			"'{'", "'}'", "'['", "']'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "AND", "OR", "NOT", "EQ", "NEQ", "PLUS", "SUB", "STAR", "DIV", 
			"MOD", "OPAREN", "CPAREN", "COMMA", "SEMI", "DEF", "STRUCT", "DECL", 
			"ARROW", "GTR", "LESS", "DCOL", "PTR", "COL", "RETURN", "LABEL", "GOTO", 
			"DOT", "DOTS", "IF", "IMPRT", "ELSE", "WHILE", "SIZEOF", "LCURLY", "RCURLY", 
			"LBRACK", "RBRACK", "INT", "FLOAT", "ID", "WS", "COMMENT", "STRING"
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
			setState(49);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 10734855752072L) != 0)) {
				{
				setState(47);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NOT:
				case SUB:
				case STAR:
				case OPAREN:
				case DECL:
				case PTR:
				case RETURN:
				case LABEL:
				case GOTO:
				case IF:
				case IMPRT:
				case WHILE:
				case SIZEOF:
				case INT:
				case FLOAT:
				case ID:
				case STRING:
					{
					setState(44);
					stat();
					}
					break;
				case DEF:
					{
					setState(45);
					def();
					}
					break;
				case STRUCT:
					{
					setState(46);
					struct();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(51);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(52);
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
			setState(54);
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
			setState(56);
			match(OPAREN);
			setState(65);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OPAREN || _la==ID) {
				{
				setState(57);
				type();
				setState(62);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(58);
					match(COMMA);
					setState(59);
					type();
					}
					}
					setState(64);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(67);
			match(CPAREN);
			setState(68);
			match(ARROW);
			setState(69);
			match(OPAREN);
			setState(70);
			type();
			setState(71);
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
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(75);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(73);
				match(ID);
				}
				break;
			case OPAREN:
				{
				setState(74);
				fptr();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(80);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(77);
					match(STAR);
					}
					} 
				}
				setState(82);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
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
			setState(83);
			match(ID);
			setState(84);
			match(COL);
			setState(85);
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
			setState(89);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(87);
				idec();
				}
				break;
			case DOTS:
				{
				setState(88);
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
			setState(91);
			match(DECL);
			setState(92);
			match(ID);
			setState(93);
			match(OPAREN);
			setState(102);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOTS || _la==ID) {
				{
				setState(94);
				param();
				setState(99);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(95);
					match(COMMA);
					setState(96);
					param();
					}
					}
					setState(101);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(104);
			match(CPAREN);
			setState(105);
			match(ARROW);
			setState(106);
			type();
			setState(107);
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
			setState(109);
			match(RETURN);
			setState(110);
			expr(0);
			setState(111);
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
			setState(113);
			idec();
			setState(114);
			match(EQ);
			setState(115);
			expr(0);
			setState(116);
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
			setState(118);
			match(ID);
			setState(119);
			match(DCOL);
			setState(120);
			expr(0);
			setState(121);
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
			setState(123);
			idec();
			setState(124);
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
			setState(126);
			expr(0);
			setState(127);
			match(EQ);
			setState(128);
			expr(0);
			setState(129);
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
			setState(131);
			match(LABEL);
			setState(132);
			match(ID);
			setState(133);
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
			setState(135);
			match(GOTO);
			setState(136);
			match(ID);
			setState(137);
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
			setState(139);
			match(IF);
			setState(140);
			expr(0);
			setState(141);
			match(ARROW);
			setState(142);
			match(LCURLY);
			setState(146);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 10734855653768L) != 0)) {
				{
				{
				setState(143);
				stat();
				}
				}
				setState(148);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(149);
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
	public static class WhileContext extends ParserRuleContext {
		public TerminalNode WHILE() { return getToken(LucidusParser.WHILE, 0); }
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
		public WhileContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_while; }
	}

	public final WhileContext while_() throws RecognitionException {
		WhileContext _localctx = new WhileContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_while);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(151);
			match(WHILE);
			setState(152);
			expr(0);
			setState(153);
			match(ARROW);
			setState(154);
			match(LCURLY);
			setState(158);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 10734855653768L) != 0)) {
				{
				{
				setState(155);
				stat();
				}
				}
				setState(160);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(161);
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
		enterRule(_localctx, 32, RULE_imrt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(163);
			match(IMPRT);
			setState(164);
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
		public WhileContext while_() {
			return getRuleContext(WhileContext.class,0);
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
		enterRule(_localctx, 34, RULE_stat);
		try {
			setState(180);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(166);
				vdec();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(167);
				infdec();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(168);
				edec();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(169);
				assign();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(170);
				expr(0);
				setState(171);
				match(SEMI);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(173);
				dec();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(174);
				ret();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(175);
				label();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(176);
				goto_();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(177);
				if_();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(178);
				while_();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(179);
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
		enterRule(_localctx, 36, RULE_def);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(182);
			match(DEF);
			setState(183);
			match(ID);
			setState(184);
			match(OPAREN);
			setState(193);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DOTS || _la==ID) {
				{
				setState(185);
				param();
				setState(190);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(186);
					match(COMMA);
					setState(187);
					param();
					}
					}
					setState(192);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(195);
			match(CPAREN);
			setState(196);
			match(ARROW);
			setState(197);
			type();
			setState(198);
			match(LCURLY);
			setState(202);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 10734855653768L) != 0)) {
				{
				{
				setState(199);
				stat();
				}
				}
				setState(204);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(205);
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
		enterRule(_localctx, 38, RULE_func);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(212);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(207);
				match(ID);
				}
				break;
			case OPAREN:
				{
				setState(208);
				match(OPAREN);
				setState(209);
				expr(0);
				setState(210);
				match(CPAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(214);
			match(OPAREN);
			setState(223);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 10728832502152L) != 0)) {
				{
				setState(215);
				expr(0);
				setState(220);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(216);
					match(COMMA);
					setState(217);
					expr(0);
					}
					}
					setState(222);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(225);
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
		public TerminalNode SUB() { return getToken(LucidusParser.SUB, 0); }
		public TerminalNode SIZEOF() { return getToken(LucidusParser.SIZEOF, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode OPAREN() { return getToken(LucidusParser.OPAREN, 0); }
		public TerminalNode CPAREN() { return getToken(LucidusParser.CPAREN, 0); }
		public TerminalNode AND() { return getToken(LucidusParser.AND, 0); }
		public TerminalNode OR() { return getToken(LucidusParser.OR, 0); }
		public TerminalNode DIV() { return getToken(LucidusParser.DIV, 0); }
		public TerminalNode PLUS() { return getToken(LucidusParser.PLUS, 0); }
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
		int _startState = 40;
		enterRecursionRule(_localctx, 40, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(247);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				setState(228);
				match(ID);
				}
				break;
			case 2:
				{
				setState(229);
				match(INT);
				}
				break;
			case 3:
				{
				setState(230);
				match(FLOAT);
				}
				break;
			case 4:
				{
				setState(231);
				match(STRING);
				}
				break;
			case 5:
				{
				setState(232);
				func();
				}
				break;
			case 6:
				{
				setState(233);
				match(PTR);
				setState(234);
				expr(19);
				}
				break;
			case 7:
				{
				setState(235);
				match(STAR);
				setState(236);
				expr(16);
				}
				break;
			case 8:
				{
				setState(237);
				match(NOT);
				setState(238);
				expr(15);
				}
				break;
			case 9:
				{
				setState(239);
				match(SUB);
				setState(240);
				expr(9);
				}
				break;
			case 10:
				{
				setState(241);
				match(SIZEOF);
				setState(242);
				type();
				}
				break;
			case 11:
				{
				setState(243);
				match(OPAREN);
				setState(244);
				expr(0);
				setState(245);
				match(CPAREN);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(302);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(300);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(249);
						if (!(precpred(_ctx, 18))) throw new FailedPredicateException(this, "precpred(_ctx, 18)");
						setState(250);
						match(STAR);
						setState(251);
						expr(19);
						}
						break;
					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(252);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(253);
						match(AND);
						setState(254);
						expr(15);
						}
						break;
					case 3:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(255);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(256);
						match(OR);
						setState(257);
						expr(14);
						}
						break;
					case 4:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(258);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(259);
						match(DIV);
						setState(260);
						expr(13);
						}
						break;
					case 5:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(261);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(262);
						match(PLUS);
						setState(263);
						expr(12);
						}
						break;
					case 6:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(264);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(265);
						match(SUB);
						setState(266);
						expr(11);
						}
						break;
					case 7:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(267);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(268);
						match(MOD);
						setState(269);
						expr(9);
						}
						break;
					case 8:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(270);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(271);
						match(EQ);
						setState(272);
						match(EQ);
						setState(273);
						expr(6);
						}
						break;
					case 9:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(274);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(275);
						match(NEQ);
						setState(276);
						expr(5);
						}
						break;
					case 10:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(277);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(278);
						match(GTR);
						setState(279);
						expr(4);
						}
						break;
					case 11:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(280);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(281);
						match(LESS);
						setState(282);
						expr(3);
						}
						break;
					case 12:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(283);
						if (!(precpred(_ctx, 22))) throw new FailedPredicateException(this, "precpred(_ctx, 22)");
						setState(284);
						match(DOT);
						setState(285);
						match(ID);
						}
						break;
					case 13:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(286);
						if (!(precpred(_ctx, 21))) throw new FailedPredicateException(this, "precpred(_ctx, 21)");
						setState(287);
						match(ARROW);
						setState(288);
						match(ID);
						}
						break;
					case 14:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(289);
						if (!(precpred(_ctx, 17))) throw new FailedPredicateException(this, "precpred(_ctx, 17)");
						setState(290);
						match(LBRACK);
						setState(291);
						expr(0);
						setState(292);
						match(RBRACK);
						}
						break;
					case 15:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(294);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(295);
						match(ARROW);
						setState(296);
						match(OPAREN);
						setState(297);
						type();
						setState(298);
						match(CPAREN);
						}
						break;
					}
					} 
				}
				setState(304);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
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
		enterRule(_localctx, 42, RULE_struct);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(305);
			match(STRUCT);
			setState(306);
			match(ID);
			setState(307);
			match(LCURLY);
			setState(316);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ID) {
				{
				setState(308);
				idec();
				setState(313);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(309);
					match(COMMA);
					setState(310);
					idec();
					}
					}
					setState(315);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(318);
			match(RCURLY);
			setState(319);
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
		case 20:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 18);
		case 1:
			return precpred(_ctx, 14);
		case 2:
			return precpred(_ctx, 13);
		case 3:
			return precpred(_ctx, 12);
		case 4:
			return precpred(_ctx, 11);
		case 5:
			return precpred(_ctx, 10);
		case 6:
			return precpred(_ctx, 8);
		case 7:
			return precpred(_ctx, 5);
		case 8:
			return precpred(_ctx, 4);
		case 9:
			return precpred(_ctx, 3);
		case 10:
			return precpred(_ctx, 2);
		case 11:
			return precpred(_ctx, 22);
		case 12:
			return precpred(_ctx, 21);
		case 13:
			return precpred(_ctx, 17);
		case 14:
			return precpred(_ctx, 7);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001+\u0142\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0005\u00000\b\u0000\n\u0000\f\u0000"+
		"3\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0005\u0002=\b\u0002\n\u0002\f\u0002"+
		"@\t\u0002\u0003\u0002B\b\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0003\u0003L\b"+
		"\u0003\u0001\u0003\u0005\u0003O\b\u0003\n\u0003\f\u0003R\t\u0003\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0003"+
		"\u0005Z\b\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0005\u0006b\b\u0006\n\u0006\f\u0006e\t\u0006\u0003"+
		"\u0006g\b\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b"+
		"\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0005\u000e"+
		"\u0091\b\u000e\n\u000e\f\u000e\u0094\t\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0005\u000f\u009d"+
		"\b\u000f\n\u000f\f\u000f\u00a0\t\u000f\u0001\u000f\u0001\u000f\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0003\u0011\u00b5\b\u0011"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012"+
		"\u0005\u0012\u00bd\b\u0012\n\u0012\f\u0012\u00c0\t\u0012\u0003\u0012\u00c2"+
		"\b\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0005"+
		"\u0012\u00c9\b\u0012\n\u0012\f\u0012\u00cc\t\u0012\u0001\u0012\u0001\u0012"+
		"\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0003\u0013"+
		"\u00d5\b\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0005\u0013"+
		"\u00db\b\u0013\n\u0013\f\u0013\u00de\t\u0013\u0003\u0013\u00e0\b\u0013"+
		"\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0003\u0014\u00f8\b\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0005\u0014\u012d\b\u0014\n\u0014"+
		"\f\u0014\u0130\t\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015"+
		"\u0001\u0015\u0001\u0015\u0005\u0015\u0138\b\u0015\n\u0015\f\u0015\u013b"+
		"\t\u0015\u0003\u0015\u013d\b\u0015\u0001\u0015\u0001\u0015\u0001\u0015"+
		"\u0001\u0015\u0000\u0001(\u0016\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010"+
		"\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*\u0000\u0000\u0163\u0000"+
		"1\u0001\u0000\u0000\u0000\u00026\u0001\u0000\u0000\u0000\u00048\u0001"+
		"\u0000\u0000\u0000\u0006K\u0001\u0000\u0000\u0000\bS\u0001\u0000\u0000"+
		"\u0000\nY\u0001\u0000\u0000\u0000\f[\u0001\u0000\u0000\u0000\u000em\u0001"+
		"\u0000\u0000\u0000\u0010q\u0001\u0000\u0000\u0000\u0012v\u0001\u0000\u0000"+
		"\u0000\u0014{\u0001\u0000\u0000\u0000\u0016~\u0001\u0000\u0000\u0000\u0018"+
		"\u0083\u0001\u0000\u0000\u0000\u001a\u0087\u0001\u0000\u0000\u0000\u001c"+
		"\u008b\u0001\u0000\u0000\u0000\u001e\u0097\u0001\u0000\u0000\u0000 \u00a3"+
		"\u0001\u0000\u0000\u0000\"\u00b4\u0001\u0000\u0000\u0000$\u00b6\u0001"+
		"\u0000\u0000\u0000&\u00d4\u0001\u0000\u0000\u0000(\u00f7\u0001\u0000\u0000"+
		"\u0000*\u0131\u0001\u0000\u0000\u0000,0\u0003\"\u0011\u0000-0\u0003$\u0012"+
		"\u0000.0\u0003*\u0015\u0000/,\u0001\u0000\u0000\u0000/-\u0001\u0000\u0000"+
		"\u0000/.\u0001\u0000\u0000\u000003\u0001\u0000\u0000\u00001/\u0001\u0000"+
		"\u0000\u000012\u0001\u0000\u0000\u000024\u0001\u0000\u0000\u000031\u0001"+
		"\u0000\u0000\u000045\u0005\u0000\u0000\u00015\u0001\u0001\u0000\u0000"+
		"\u000067\u0005(\u0000\u00007\u0003\u0001\u0000\u0000\u00008A\u0005\u000b"+
		"\u0000\u00009>\u0003\u0006\u0003\u0000:;\u0005\r\u0000\u0000;=\u0003\u0006"+
		"\u0003\u0000<:\u0001\u0000\u0000\u0000=@\u0001\u0000\u0000\u0000><\u0001"+
		"\u0000\u0000\u0000>?\u0001\u0000\u0000\u0000?B\u0001\u0000\u0000\u0000"+
		"@>\u0001\u0000\u0000\u0000A9\u0001\u0000\u0000\u0000AB\u0001\u0000\u0000"+
		"\u0000BC\u0001\u0000\u0000\u0000CD\u0005\f\u0000\u0000DE\u0005\u0012\u0000"+
		"\u0000EF\u0005\u000b\u0000\u0000FG\u0003\u0006\u0003\u0000GH\u0005\f\u0000"+
		"\u0000H\u0005\u0001\u0000\u0000\u0000IL\u0005(\u0000\u0000JL\u0003\u0004"+
		"\u0002\u0000KI\u0001\u0000\u0000\u0000KJ\u0001\u0000\u0000\u0000LP\u0001"+
		"\u0000\u0000\u0000MO\u0005\b\u0000\u0000NM\u0001\u0000\u0000\u0000OR\u0001"+
		"\u0000\u0000\u0000PN\u0001\u0000\u0000\u0000PQ\u0001\u0000\u0000\u0000"+
		"Q\u0007\u0001\u0000\u0000\u0000RP\u0001\u0000\u0000\u0000ST\u0005(\u0000"+
		"\u0000TU\u0005\u0017\u0000\u0000UV\u0003\u0006\u0003\u0000V\t\u0001\u0000"+
		"\u0000\u0000WZ\u0003\b\u0004\u0000XZ\u0005\u001c\u0000\u0000YW\u0001\u0000"+
		"\u0000\u0000YX\u0001\u0000\u0000\u0000Z\u000b\u0001\u0000\u0000\u0000"+
		"[\\\u0005\u0011\u0000\u0000\\]\u0005(\u0000\u0000]f\u0005\u000b\u0000"+
		"\u0000^c\u0003\n\u0005\u0000_`\u0005\r\u0000\u0000`b\u0003\n\u0005\u0000"+
		"a_\u0001\u0000\u0000\u0000be\u0001\u0000\u0000\u0000ca\u0001\u0000\u0000"+
		"\u0000cd\u0001\u0000\u0000\u0000dg\u0001\u0000\u0000\u0000ec\u0001\u0000"+
		"\u0000\u0000f^\u0001\u0000\u0000\u0000fg\u0001\u0000\u0000\u0000gh\u0001"+
		"\u0000\u0000\u0000hi\u0005\f\u0000\u0000ij\u0005\u0012\u0000\u0000jk\u0003"+
		"\u0006\u0003\u0000kl\u0005\u000e\u0000\u0000l\r\u0001\u0000\u0000\u0000"+
		"mn\u0005\u0018\u0000\u0000no\u0003(\u0014\u0000op\u0005\u000e\u0000\u0000"+
		"p\u000f\u0001\u0000\u0000\u0000qr\u0003\b\u0004\u0000rs\u0005\u0004\u0000"+
		"\u0000st\u0003(\u0014\u0000tu\u0005\u000e\u0000\u0000u\u0011\u0001\u0000"+
		"\u0000\u0000vw\u0005(\u0000\u0000wx\u0005\u0015\u0000\u0000xy\u0003(\u0014"+
		"\u0000yz\u0005\u000e\u0000\u0000z\u0013\u0001\u0000\u0000\u0000{|\u0003"+
		"\b\u0004\u0000|}\u0005\u000e\u0000\u0000}\u0015\u0001\u0000\u0000\u0000"+
		"~\u007f\u0003(\u0014\u0000\u007f\u0080\u0005\u0004\u0000\u0000\u0080\u0081"+
		"\u0003(\u0014\u0000\u0081\u0082\u0005\u000e\u0000\u0000\u0082\u0017\u0001"+
		"\u0000\u0000\u0000\u0083\u0084\u0005\u0019\u0000\u0000\u0084\u0085\u0005"+
		"(\u0000\u0000\u0085\u0086\u0005\u0017\u0000\u0000\u0086\u0019\u0001\u0000"+
		"\u0000\u0000\u0087\u0088\u0005\u001a\u0000\u0000\u0088\u0089\u0005(\u0000"+
		"\u0000\u0089\u008a\u0005\u000e\u0000\u0000\u008a\u001b\u0001\u0000\u0000"+
		"\u0000\u008b\u008c\u0005\u001d\u0000\u0000\u008c\u008d\u0003(\u0014\u0000"+
		"\u008d\u008e\u0005\u0012\u0000\u0000\u008e\u0092\u0005\"\u0000\u0000\u008f"+
		"\u0091\u0003\"\u0011\u0000\u0090\u008f\u0001\u0000\u0000\u0000\u0091\u0094"+
		"\u0001\u0000\u0000\u0000\u0092\u0090\u0001\u0000\u0000\u0000\u0092\u0093"+
		"\u0001\u0000\u0000\u0000\u0093\u0095\u0001\u0000\u0000\u0000\u0094\u0092"+
		"\u0001\u0000\u0000\u0000\u0095\u0096\u0005#\u0000\u0000\u0096\u001d\u0001"+
		"\u0000\u0000\u0000\u0097\u0098\u0005 \u0000\u0000\u0098\u0099\u0003(\u0014"+
		"\u0000\u0099\u009a\u0005\u0012\u0000\u0000\u009a\u009e\u0005\"\u0000\u0000"+
		"\u009b\u009d\u0003\"\u0011\u0000\u009c\u009b\u0001\u0000\u0000\u0000\u009d"+
		"\u00a0\u0001\u0000\u0000\u0000\u009e\u009c\u0001\u0000\u0000\u0000\u009e"+
		"\u009f\u0001\u0000\u0000\u0000\u009f\u00a1\u0001\u0000\u0000\u0000\u00a0"+
		"\u009e\u0001\u0000\u0000\u0000\u00a1\u00a2\u0005#\u0000\u0000\u00a2\u001f"+
		"\u0001\u0000\u0000\u0000\u00a3\u00a4\u0005\u001e\u0000\u0000\u00a4\u00a5"+
		"\u0005+\u0000\u0000\u00a5!\u0001\u0000\u0000\u0000\u00a6\u00b5\u0003\u0010"+
		"\b\u0000\u00a7\u00b5\u0003\u0012\t\u0000\u00a8\u00b5\u0003\u0014\n\u0000"+
		"\u00a9\u00b5\u0003\u0016\u000b\u0000\u00aa\u00ab\u0003(\u0014\u0000\u00ab"+
		"\u00ac\u0005\u000e\u0000\u0000\u00ac\u00b5\u0001\u0000\u0000\u0000\u00ad"+
		"\u00b5\u0003\f\u0006\u0000\u00ae\u00b5\u0003\u000e\u0007\u0000\u00af\u00b5"+
		"\u0003\u0018\f\u0000\u00b0\u00b5\u0003\u001a\r\u0000\u00b1\u00b5\u0003"+
		"\u001c\u000e\u0000\u00b2\u00b5\u0003\u001e\u000f\u0000\u00b3\u00b5\u0003"+
		" \u0010\u0000\u00b4\u00a6\u0001\u0000\u0000\u0000\u00b4\u00a7\u0001\u0000"+
		"\u0000\u0000\u00b4\u00a8\u0001\u0000\u0000\u0000\u00b4\u00a9\u0001\u0000"+
		"\u0000\u0000\u00b4\u00aa\u0001\u0000\u0000\u0000\u00b4\u00ad\u0001\u0000"+
		"\u0000\u0000\u00b4\u00ae\u0001\u0000\u0000\u0000\u00b4\u00af\u0001\u0000"+
		"\u0000\u0000\u00b4\u00b0\u0001\u0000\u0000\u0000\u00b4\u00b1\u0001\u0000"+
		"\u0000\u0000\u00b4\u00b2\u0001\u0000\u0000\u0000\u00b4\u00b3\u0001\u0000"+
		"\u0000\u0000\u00b5#\u0001\u0000\u0000\u0000\u00b6\u00b7\u0005\u000f\u0000"+
		"\u0000\u00b7\u00b8\u0005(\u0000\u0000\u00b8\u00c1\u0005\u000b\u0000\u0000"+
		"\u00b9\u00be\u0003\n\u0005\u0000\u00ba\u00bb\u0005\r\u0000\u0000\u00bb"+
		"\u00bd\u0003\n\u0005\u0000\u00bc\u00ba\u0001\u0000\u0000\u0000\u00bd\u00c0"+
		"\u0001\u0000\u0000\u0000\u00be\u00bc\u0001\u0000\u0000\u0000\u00be\u00bf"+
		"\u0001\u0000\u0000\u0000\u00bf\u00c2\u0001\u0000\u0000\u0000\u00c0\u00be"+
		"\u0001\u0000\u0000\u0000\u00c1\u00b9\u0001\u0000\u0000\u0000\u00c1\u00c2"+
		"\u0001\u0000\u0000\u0000\u00c2\u00c3\u0001\u0000\u0000\u0000\u00c3\u00c4"+
		"\u0005\f\u0000\u0000\u00c4\u00c5\u0005\u0012\u0000\u0000\u00c5\u00c6\u0003"+
		"\u0006\u0003\u0000\u00c6\u00ca\u0005\"\u0000\u0000\u00c7\u00c9\u0003\""+
		"\u0011\u0000\u00c8\u00c7\u0001\u0000\u0000\u0000\u00c9\u00cc\u0001\u0000"+
		"\u0000\u0000\u00ca\u00c8\u0001\u0000\u0000\u0000\u00ca\u00cb\u0001\u0000"+
		"\u0000\u0000\u00cb\u00cd\u0001\u0000\u0000\u0000\u00cc\u00ca\u0001\u0000"+
		"\u0000\u0000\u00cd\u00ce\u0005#\u0000\u0000\u00ce%\u0001\u0000\u0000\u0000"+
		"\u00cf\u00d5\u0005(\u0000\u0000\u00d0\u00d1\u0005\u000b\u0000\u0000\u00d1"+
		"\u00d2\u0003(\u0014\u0000\u00d2\u00d3\u0005\f\u0000\u0000\u00d3\u00d5"+
		"\u0001\u0000\u0000\u0000\u00d4\u00cf\u0001\u0000\u0000\u0000\u00d4\u00d0"+
		"\u0001\u0000\u0000\u0000\u00d5\u00d6\u0001\u0000\u0000\u0000\u00d6\u00df"+
		"\u0005\u000b\u0000\u0000\u00d7\u00dc\u0003(\u0014\u0000\u00d8\u00d9\u0005"+
		"\r\u0000\u0000\u00d9\u00db\u0003(\u0014\u0000\u00da\u00d8\u0001\u0000"+
		"\u0000\u0000\u00db\u00de\u0001\u0000\u0000\u0000\u00dc\u00da\u0001\u0000"+
		"\u0000\u0000\u00dc\u00dd\u0001\u0000\u0000\u0000\u00dd\u00e0\u0001\u0000"+
		"\u0000\u0000\u00de\u00dc\u0001\u0000\u0000\u0000\u00df\u00d7\u0001\u0000"+
		"\u0000\u0000\u00df\u00e0\u0001\u0000\u0000\u0000\u00e0\u00e1\u0001\u0000"+
		"\u0000\u0000\u00e1\u00e2\u0005\f\u0000\u0000\u00e2\'\u0001\u0000\u0000"+
		"\u0000\u00e3\u00e4\u0006\u0014\uffff\uffff\u0000\u00e4\u00f8\u0005(\u0000"+
		"\u0000\u00e5\u00f8\u0005&\u0000\u0000\u00e6\u00f8\u0005\'\u0000\u0000"+
		"\u00e7\u00f8\u0005+\u0000\u0000\u00e8\u00f8\u0003&\u0013\u0000\u00e9\u00ea"+
		"\u0005\u0016\u0000\u0000\u00ea\u00f8\u0003(\u0014\u0013\u00eb\u00ec\u0005"+
		"\b\u0000\u0000\u00ec\u00f8\u0003(\u0014\u0010\u00ed\u00ee\u0005\u0003"+
		"\u0000\u0000\u00ee\u00f8\u0003(\u0014\u000f\u00ef\u00f0\u0005\u0007\u0000"+
		"\u0000\u00f0\u00f8\u0003(\u0014\t\u00f1\u00f2\u0005!\u0000\u0000\u00f2"+
		"\u00f8\u0003\u0006\u0003\u0000\u00f3\u00f4\u0005\u000b\u0000\u0000\u00f4"+
		"\u00f5\u0003(\u0014\u0000\u00f5\u00f6\u0005\f\u0000\u0000\u00f6\u00f8"+
		"\u0001\u0000\u0000\u0000\u00f7\u00e3\u0001\u0000\u0000\u0000\u00f7\u00e5"+
		"\u0001\u0000\u0000\u0000\u00f7\u00e6\u0001\u0000\u0000\u0000\u00f7\u00e7"+
		"\u0001\u0000\u0000\u0000\u00f7\u00e8\u0001\u0000\u0000\u0000\u00f7\u00e9"+
		"\u0001\u0000\u0000\u0000\u00f7\u00eb\u0001\u0000\u0000\u0000\u00f7\u00ed"+
		"\u0001\u0000\u0000\u0000\u00f7\u00ef\u0001\u0000\u0000\u0000\u00f7\u00f1"+
		"\u0001\u0000\u0000\u0000\u00f7\u00f3\u0001\u0000\u0000\u0000\u00f8\u012e"+
		"\u0001\u0000\u0000\u0000\u00f9\u00fa\n\u0012\u0000\u0000\u00fa\u00fb\u0005"+
		"\b\u0000\u0000\u00fb\u012d\u0003(\u0014\u0013\u00fc\u00fd\n\u000e\u0000"+
		"\u0000\u00fd\u00fe\u0005\u0001\u0000\u0000\u00fe\u012d\u0003(\u0014\u000f"+
		"\u00ff\u0100\n\r\u0000\u0000\u0100\u0101\u0005\u0002\u0000\u0000\u0101"+
		"\u012d\u0003(\u0014\u000e\u0102\u0103\n\f\u0000\u0000\u0103\u0104\u0005"+
		"\t\u0000\u0000\u0104\u012d\u0003(\u0014\r\u0105\u0106\n\u000b\u0000\u0000"+
		"\u0106\u0107\u0005\u0006\u0000\u0000\u0107\u012d\u0003(\u0014\f\u0108"+
		"\u0109\n\n\u0000\u0000\u0109\u010a\u0005\u0007\u0000\u0000\u010a\u012d"+
		"\u0003(\u0014\u000b\u010b\u010c\n\b\u0000\u0000\u010c\u010d\u0005\n\u0000"+
		"\u0000\u010d\u012d\u0003(\u0014\t\u010e\u010f\n\u0005\u0000\u0000\u010f"+
		"\u0110\u0005\u0004\u0000\u0000\u0110\u0111\u0005\u0004\u0000\u0000\u0111"+
		"\u012d\u0003(\u0014\u0006\u0112\u0113\n\u0004\u0000\u0000\u0113\u0114"+
		"\u0005\u0005\u0000\u0000\u0114\u012d\u0003(\u0014\u0005\u0115\u0116\n"+
		"\u0003\u0000\u0000\u0116\u0117\u0005\u0013\u0000\u0000\u0117\u012d\u0003"+
		"(\u0014\u0004\u0118\u0119\n\u0002\u0000\u0000\u0119\u011a\u0005\u0014"+
		"\u0000\u0000\u011a\u012d\u0003(\u0014\u0003\u011b\u011c\n\u0016\u0000"+
		"\u0000\u011c\u011d\u0005\u001b\u0000\u0000\u011d\u012d\u0005(\u0000\u0000"+
		"\u011e\u011f\n\u0015\u0000\u0000\u011f\u0120\u0005\u0012\u0000\u0000\u0120"+
		"\u012d\u0005(\u0000\u0000\u0121\u0122\n\u0011\u0000\u0000\u0122\u0123"+
		"\u0005$\u0000\u0000\u0123\u0124\u0003(\u0014\u0000\u0124\u0125\u0005%"+
		"\u0000\u0000\u0125\u012d\u0001\u0000\u0000\u0000\u0126\u0127\n\u0007\u0000"+
		"\u0000\u0127\u0128\u0005\u0012\u0000\u0000\u0128\u0129\u0005\u000b\u0000"+
		"\u0000\u0129\u012a\u0003\u0006\u0003\u0000\u012a\u012b\u0005\f\u0000\u0000"+
		"\u012b\u012d\u0001\u0000\u0000\u0000\u012c\u00f9\u0001\u0000\u0000\u0000"+
		"\u012c\u00fc\u0001\u0000\u0000\u0000\u012c\u00ff\u0001\u0000\u0000\u0000"+
		"\u012c\u0102\u0001\u0000\u0000\u0000\u012c\u0105\u0001\u0000\u0000\u0000"+
		"\u012c\u0108\u0001\u0000\u0000\u0000\u012c\u010b\u0001\u0000\u0000\u0000"+
		"\u012c\u010e\u0001\u0000\u0000\u0000\u012c\u0112\u0001\u0000\u0000\u0000"+
		"\u012c\u0115\u0001\u0000\u0000\u0000\u012c\u0118\u0001\u0000\u0000\u0000"+
		"\u012c\u011b\u0001\u0000\u0000\u0000\u012c\u011e\u0001\u0000\u0000\u0000"+
		"\u012c\u0121\u0001\u0000\u0000\u0000\u012c\u0126\u0001\u0000\u0000\u0000"+
		"\u012d\u0130\u0001\u0000\u0000\u0000\u012e\u012c\u0001\u0000\u0000\u0000"+
		"\u012e\u012f\u0001\u0000\u0000\u0000\u012f)\u0001\u0000\u0000\u0000\u0130"+
		"\u012e\u0001\u0000\u0000\u0000\u0131\u0132\u0005\u0010\u0000\u0000\u0132"+
		"\u0133\u0005(\u0000\u0000\u0133\u013c\u0005\"\u0000\u0000\u0134\u0139"+
		"\u0003\b\u0004\u0000\u0135\u0136\u0005\r\u0000\u0000\u0136\u0138\u0003"+
		"\b\u0004\u0000\u0137\u0135\u0001\u0000\u0000\u0000\u0138\u013b\u0001\u0000"+
		"\u0000\u0000\u0139\u0137\u0001\u0000\u0000\u0000\u0139\u013a\u0001\u0000"+
		"\u0000\u0000\u013a\u013d\u0001\u0000\u0000\u0000\u013b\u0139\u0001\u0000"+
		"\u0000\u0000\u013c\u0134\u0001\u0000\u0000\u0000\u013c\u013d\u0001\u0000"+
		"\u0000\u0000\u013d\u013e\u0001\u0000\u0000\u0000\u013e\u013f\u0005#\u0000"+
		"\u0000\u013f\u0140\u0005\u000e\u0000\u0000\u0140+\u0001\u0000\u0000\u0000"+
		"\u0017/1>AKPYcf\u0092\u009e\u00b4\u00be\u00c1\u00ca\u00d4\u00dc\u00df"+
		"\u00f7\u012c\u012e\u0139\u013c";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}