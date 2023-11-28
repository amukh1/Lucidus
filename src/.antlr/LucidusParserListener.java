// Generated from /home/amukh1/Lucidus/src/LucidusParser.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link LucidusParser}.
 */
public interface LucidusParserListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link LucidusParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(LucidusParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(LucidusParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#rawtype}.
	 * @param ctx the parse tree
	 */
	void enterRawtype(LucidusParser.RawtypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#rawtype}.
	 * @param ctx the parse tree
	 */
	void exitRawtype(LucidusParser.RawtypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#fptr}.
	 * @param ctx the parse tree
	 */
	void enterFptr(LucidusParser.FptrContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#fptr}.
	 * @param ctx the parse tree
	 */
	void exitFptr(LucidusParser.FptrContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(LucidusParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(LucidusParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#idec}.
	 * @param ctx the parse tree
	 */
	void enterIdec(LucidusParser.IdecContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#idec}.
	 * @param ctx the parse tree
	 */
	void exitIdec(LucidusParser.IdecContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#param}.
	 * @param ctx the parse tree
	 */
	void enterParam(LucidusParser.ParamContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#param}.
	 * @param ctx the parse tree
	 */
	void exitParam(LucidusParser.ParamContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#dec}.
	 * @param ctx the parse tree
	 */
	void enterDec(LucidusParser.DecContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#dec}.
	 * @param ctx the parse tree
	 */
	void exitDec(LucidusParser.DecContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#ret}.
	 * @param ctx the parse tree
	 */
	void enterRet(LucidusParser.RetContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#ret}.
	 * @param ctx the parse tree
	 */
	void exitRet(LucidusParser.RetContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#vdec}.
	 * @param ctx the parse tree
	 */
	void enterVdec(LucidusParser.VdecContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#vdec}.
	 * @param ctx the parse tree
	 */
	void exitVdec(LucidusParser.VdecContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#infdec}.
	 * @param ctx the parse tree
	 */
	void enterInfdec(LucidusParser.InfdecContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#infdec}.
	 * @param ctx the parse tree
	 */
	void exitInfdec(LucidusParser.InfdecContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#edec}.
	 * @param ctx the parse tree
	 */
	void enterEdec(LucidusParser.EdecContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#edec}.
	 * @param ctx the parse tree
	 */
	void exitEdec(LucidusParser.EdecContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#assign}.
	 * @param ctx the parse tree
	 */
	void enterAssign(LucidusParser.AssignContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#assign}.
	 * @param ctx the parse tree
	 */
	void exitAssign(LucidusParser.AssignContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#label}.
	 * @param ctx the parse tree
	 */
	void enterLabel(LucidusParser.LabelContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#label}.
	 * @param ctx the parse tree
	 */
	void exitLabel(LucidusParser.LabelContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#goto}.
	 * @param ctx the parse tree
	 */
	void enterGoto(LucidusParser.GotoContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#goto}.
	 * @param ctx the parse tree
	 */
	void exitGoto(LucidusParser.GotoContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#if}.
	 * @param ctx the parse tree
	 */
	void enterIf(LucidusParser.IfContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#if}.
	 * @param ctx the parse tree
	 */
	void exitIf(LucidusParser.IfContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#while}.
	 * @param ctx the parse tree
	 */
	void enterWhile(LucidusParser.WhileContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#while}.
	 * @param ctx the parse tree
	 */
	void exitWhile(LucidusParser.WhileContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#imrt}.
	 * @param ctx the parse tree
	 */
	void enterImrt(LucidusParser.ImrtContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#imrt}.
	 * @param ctx the parse tree
	 */
	void exitImrt(LucidusParser.ImrtContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#stat}.
	 * @param ctx the parse tree
	 */
	void enterStat(LucidusParser.StatContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#stat}.
	 * @param ctx the parse tree
	 */
	void exitStat(LucidusParser.StatContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#def}.
	 * @param ctx the parse tree
	 */
	void enterDef(LucidusParser.DefContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#def}.
	 * @param ctx the parse tree
	 */
	void exitDef(LucidusParser.DefContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#func}.
	 * @param ctx the parse tree
	 */
	void enterFunc(LucidusParser.FuncContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#func}.
	 * @param ctx the parse tree
	 */
	void exitFunc(LucidusParser.FuncContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(LucidusParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(LucidusParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link LucidusParser#struct}.
	 * @param ctx the parse tree
	 */
	void enterStruct(LucidusParser.StructContext ctx);
	/**
	 * Exit a parse tree produced by {@link LucidusParser#struct}.
	 * @param ctx the parse tree
	 */
	void exitStruct(LucidusParser.StructContext ctx);
}