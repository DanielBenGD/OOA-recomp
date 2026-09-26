#include "outrun_online_arcade_recomp_init.h"

DEFINE_REX_FUNC(sub_824C87F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,-22208(r10)
	REX_STORE_U32(ctx.r10.u32 + -22208, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8808) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,-2064(r10)
	REX_STORE_U32(ctx.r10.u32 + -2064, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8820) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32089
	ctx.r10.s64 = -2102984704;
	// addi r11,r11,13528
	ctx.r11.s64 = ctx.r11.s64 + 13528;
	// stw r11,-16596(r10)
	REX_STORE_U32(ctx.r10.u32 + -16596, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8838) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,-1720(r10)
	REX_STORE_U32(ctx.r10.u32 + -1720, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8850) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,-600
	ctx.r31.s64 = ctx.r11.s64 + -600;
	// lbz r11,49(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824c8884
	if (ctx.cr0.eq) goto loc_824C8884;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r11,49(r31)
	REX_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// bl 0x8227dc20
	ctx.lr = 0x824C8884;
	sub_8227DC20(ctx, base);
loc_824C8884:
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c8894
	if (ctx.cr6.eq) goto loc_824C8894;
	// bl 0x82114e18
	ctx.lr = 0x824C8894;
	sub_82114E18(ctx, base);
loc_824C8894:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C88B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,-408(r10)
	REX_STORE_U32(ctx.r10.u32 + -408, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C88D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,672(r10)
	REX_STORE_U32(ctx.r10.u32 + 672, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C88E8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r8,r9,1464
	ctx.r8.s64 = ctx.r9.s64 + 1464;
	// addi r10,r11,13448
	ctx.r10.s64 = ctx.r11.s64 + 13448;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1464(r9)
	REX_STORE_U32(ctx.r9.u32 + 1464, ctx.r10.u32);
	// stw r11,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8908) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// addi r31,r11,-16448
	ctx.r31.s64 = ctx.r11.s64 + -16448;
	// lhz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 120);
	// rlwinm. r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c893c
	if (ctx.cr0.eq) goto loc_824C893C;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// sth r11,120(r31)
	REX_STORE_U16(ctx.r31.u32 + 120, ctx.r11.u16);
	// bl 0x8227dc20
	ctx.lr = 0x824C893C;
	sub_8227DC20(ctx, base);
loc_824C893C:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c894c
	if (ctx.cr6.eq) goto loc_824C894C;
	// bl 0x82114e18
	ctx.lr = 0x824C894C;
	sub_82114E18(ctx, base);
loc_824C894C:
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c895c
	if (ctx.cr6.eq) goto loc_824C895C;
	// bl 0x824b0cc0
	ctx.lr = 0x824C895C;
	sub_824B0CC0(ctx, base);
loc_824C895C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8970) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8978) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8980) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32089
	ctx.r10.s64 = -2102984704;
	// addi r11,r11,13528
	ctx.r11.s64 = ctx.r11.s64 + 13528;
	// stw r11,-15940(r10)
	REX_STORE_U32(ctx.r10.u32 + -15940, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8998) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,1532(r10)
	REX_STORE_U32(ctx.r10.u32 + 1532, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C89B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,1552(r10)
	REX_STORE_U32(ctx.r10.u32 + 1552, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C89C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,1576(r10)
	REX_STORE_U32(ctx.r10.u32 + 1576, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C89E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,1604(r10)
	REX_STORE_U32(ctx.r10.u32 + 1604, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C89F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32089
	ctx.r31.s64 = -2102984704;
	// lwz r3,-15792(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -15792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c8a30
	if (ctx.cr6.eq) goto loc_824C8A30;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C8A28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-15792(r31)
	REX_STORE_U32(ctx.r31.u32 + -15792, ctx.r11.u32);
loc_824C8A30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8A48) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8A50) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8A58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// li r30,63
	ctx.r30.s64 = 63;
	// addi r11,r11,-11336
	ctx.r11.s64 = ctx.r11.s64 + -11336;
	// addi r31,r11,1552
	ctx.r31.s64 = ctx.r11.s64 + 1552;
loc_824C8A7C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218d6b8
	ctx.lr = 0x824C8A88;
	sub_8218D6B8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x824c8a7c
	if (!ctx.cr0.lt) goto loc_824C8A7C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8AA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// li r30,63
	ctx.r30.s64 = 63;
	// addi r11,r11,-15176
	ctx.r11.s64 = ctx.r11.s64 + -15176;
	// addi r31,r11,1552
	ctx.r31.s64 = ctx.r11.s64 + 1552;
loc_824C8ACC:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218d6b8
	ctx.lr = 0x824C8AD8;
	sub_8218D6B8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x824c8acc
	if (!ctx.cr0.lt) goto loc_824C8ACC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8AF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// li r30,31
	ctx.r30.s64 = 31;
	// addi r11,r11,-13640
	ctx.r11.s64 = ctx.r11.s64 + -13640;
	// addi r31,r11,2312
	ctx.r31.s64 = ctx.r11.s64 + 2312;
loc_824C8B1C:
	// addi r31,r31,-72
	ctx.r31.s64 = ctx.r31.s64 + -72;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8218d6b8
	ctx.lr = 0x824C8B28;
	sub_8218D6B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218bd28
	ctx.lr = 0x824C8B30;
	sub_8218BD28(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x824c8b1c
	if (!ctx.cr0.lt) goto loc_824C8B1C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8B50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x824b184c
	ctx.lr = 0x824C8B58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8214ae30
	ctx.lr = 0x824C8B60;
	sub_8214AE30(ctx, base);
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r31,r11,-9800
	ctx.r31.s64 = ctx.r11.s64 + -9800;
	// lwz r11,29932(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 29932);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824c8b7c
	if (ctx.cr6.eq) goto loc_824C8B7C;
	// addi r3,r31,29924
	ctx.r3.s64 = ctx.r31.s64 + 29924;
	// bl 0x821e3ae0
	ctx.lr = 0x824C8B7C;
	sub_821E3AE0(ctx, base);
loc_824C8B7C:
	// li r29,30
	ctx.r29.s64 = 30;
	// addi r30,r31,29924
	ctx.r30.s64 = ctx.r31.s64 + 29924;
loc_824C8B84:
	// addi r30,r30,-160
	ctx.r30.s64 = ctx.r30.s64 + -160;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824c8b9c
	if (ctx.cr6.eq) goto loc_824C8B9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e3ae0
	ctx.lr = 0x824C8B9C;
	sub_821E3AE0(ctx, base);
loc_824C8B9C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x824c8b84
	if (!ctx.cr0.lt) goto loc_824C8B84;
	// li r30,14
	ctx.r30.s64 = 14;
	// addi r31,r31,24964
	ctx.r31.s64 = ctx.r31.s64 + 24964;
loc_824C8BAC:
	// addi r31,r31,-160
	ctx.r31.s64 = ctx.r31.s64 + -160;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824c8bc4
	if (ctx.cr6.eq) goto loc_824C8BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3ae0
	ctx.lr = 0x824C8BC4;
	sub_821E3AE0(ctx, base);
loc_824C8BC4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x824c8bac
	if (!ctx.cr0.lt) goto loc_824C8BAC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x824b189c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C8BD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r31,-32087
	ctx.r31.s64 = -2102853632;
	// addi r11,r11,16704
	ctx.r11.s64 = ctx.r11.s64 + 16704;
	// lis r10,-32089
	ctx.r10.s64 = -2102984704;
	// stw r11,20556(r31)
	REX_STORE_U32(ctx.r31.u32 + 20556, ctx.r11.u32);
	// lwz r3,-15064(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -15064);
	// bl 0x822346f8
	ctx.lr = 0x824C8C04;
	sub_822346F8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,19064
	ctx.r11.s64 = ctx.r11.s64 + 19064;
	// stw r11,20556(r31)
	REX_STORE_U32(ctx.r31.u32 + 20556, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8C28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,20
	ctx.r11.s64 = 20;
	// lis r10,-32087
	ctx.r10.s64 = -2102853632;
	// addi r10,r10,29668
	ctx.r10.s64 = ctx.r10.s64 + 29668;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r10,-21776
	ctx.r10.s64 = ctx.r10.s64 + -21776;
	// addi r11,r11,22764
	ctx.r11.s64 = ctx.r11.s64 + 22764;
loc_824C8C48:
	// stwu r11,-2188(r10)
	ea = -2188 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824c8c48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C8C48;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8C58) {
	REX_FUNC_PROLOGUE();
	// lis r8,-32087
	ctx.r8.s64 = -2102853632;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r7,r8,20788
	ctx.r7.s64 = ctx.r8.s64 + 20788;
	// addi r6,r11,22764
	ctx.r6.s64 = ctx.r11.s64 + 22764;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r6,20788(r8)
	REX_STORE_U32(ctx.r8.u32 + 20788, ctx.r6.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r6,6636(r7)
	REX_STORE_U32(ctx.r7.u32 + 6636, ctx.r6.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r6,4448(r7)
	REX_STORE_U32(ctx.r7.u32 + 4448, ctx.r6.u32);
	// stw r6,2260(r7)
	REX_STORE_U32(ctx.r7.u32 + 2260, ctx.r6.u32);
	// stw r6,72(r7)
	REX_STORE_U32(ctx.r7.u32 + 72, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8C90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// li r30,20
	ctx.r30.s64 = 20;
	// addi r11,r11,7896
	ctx.r11.s64 = ctx.r11.s64 + 7896;
	// addi r31,r11,3528
	ctx.r31.s64 = ctx.r11.s64 + 3528;
loc_824C8CB4:
	// addi r31,r31,-164
	ctx.r31.s64 = ctx.r31.s64 + -164;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82234b38
	ctx.lr = 0x824C8CC0;
	sub_82234B38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bge 0x824c8cb4
	if (!ctx.cr0.lt) goto loc_824C8CB4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8CE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,11344
	ctx.r11.s64 = ctx.r11.s64 + 11344;
	// addi r31,r11,1676
	ctx.r31.s64 = ctx.r11.s64 + 1676;
loc_824C8D0C:
	// addi r31,r31,-160
	ctx.r31.s64 = ctx.r31.s64 + -160;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824c8d24
	if (ctx.cr6.eq) goto loc_824C8D24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3ae0
	ctx.lr = 0x824C8D24;
	sub_821E3AE0(ctx, base);
loc_824C8D24:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x824c8d0c
	if (!ctx.cr0.lt) goto loc_824C8D0C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8D48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r3,r11,13024
	ctx.r3.s64 = ctx.r11.s64 + 13024;
	// b 0x8218d6b8
	sub_8218D6B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C8D58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,22192
	ctx.r11.s64 = ctx.r11.s64 + 22192;
	// stw r11,3184(r10)
	REX_STORE_U32(ctx.r10.u32 + 3184, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8D70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,22192
	ctx.r11.s64 = ctx.r11.s64 + 22192;
	// stw r11,3200(r10)
	REX_STORE_U32(ctx.r10.u32 + 3200, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8D88) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8D90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,23712(r10)
	REX_STORE_U32(ctx.r10.u32 + 23712, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8DA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// stw r11,23736(r10)
	REX_STORE_U32(ctx.r10.u32 + 23736, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8DC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r31,r11,13032
	ctx.r31.s64 = ctx.r11.s64 + 13032;
	// lwz r11,13032(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 13032);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824c8dec
	if (ctx.cr0.eq) goto loc_824C8DEC;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8227dc20
	ctx.lr = 0x824C8DEC;
	sub_8227DC20(ctx, base);
loc_824C8DEC:
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x8227c990
	ctx.lr = 0x824C8DF4;
	sub_8227C990(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8E08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,22064
	ctx.r3.s64 = ctx.r11.s64 + 22064;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821e3ae0
	sub_821E3AE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C8E20) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8E28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,22224
	ctx.r3.s64 = ctx.r11.s64 + 22224;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821e3ae0
	sub_821E3AE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C8E40) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8E48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,22384
	ctx.r3.s64 = ctx.r11.s64 + 22384;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821e3ae0
	sub_821E3AE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C8E60) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8E68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,22544
	ctx.r3.s64 = ctx.r11.s64 + 22544;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821e3ae0
	sub_821E3AE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C8E80) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8E88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,22704
	ctx.r3.s64 = ctx.r11.s64 + 22704;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821e3ae0
	sub_821E3AE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C8EA0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8EA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,13196
	ctx.r11.s64 = ctx.r11.s64 + 13196;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824c8ee4
	if (ctx.cr6.eq) goto loc_824C8EE4;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c8edc
	if (ctx.cr6.eq) goto loc_824C8EDC;
	// bl 0x821cd490
	ctx.lr = 0x824C8EDC;
	sub_821CD490(ctx, base);
loc_824C8EDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822346f8
	ctx.lr = 0x824C8EE4;
	sub_822346F8(ctx, base);
loc_824C8EE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8EF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,13228
	ctx.r11.s64 = ctx.r11.s64 + 13228;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824c8f34
	if (ctx.cr6.eq) goto loc_824C8F34;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c8f2c
	if (ctx.cr6.eq) goto loc_824C8F2C;
	// bl 0x821cd490
	ctx.lr = 0x824C8F2C;
	sub_821CD490(ctx, base);
loc_824C8F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822346f8
	ctx.lr = 0x824C8F34;
	sub_822346F8(ctx, base);
loc_824C8F34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8F48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,13212
	ctx.r11.s64 = ctx.r11.s64 + 13212;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824c8f88
	if (ctx.cr6.eq) goto loc_824C8F88;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c8f80
	if (ctx.cr6.eq) goto loc_824C8F80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821cd400
	ctx.lr = 0x824C8F80;
	sub_821CD400(ctx, base);
loc_824C8F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822346f8
	ctx.lr = 0x824C8F88;
	sub_822346F8(ctx, base);
loc_824C8F88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C8FA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x824b184c
	ctx.lr = 0x824C8FA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,13276
	ctx.r11.s64 = ctx.r11.s64 + 13276;
	// lwz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824c8ff4
	if (ctx.cr6.eq) goto loc_824C8FF4;
	// lwz r3,1024(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 1024);
	// addi r31,r29,1024
	ctx.r31.s64 = ctx.r29.s64 + 1024;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c8fd4
	if (ctx.cr6.eq) goto loc_824C8FD4;
	// bl 0x821cd4c8
	ctx.lr = 0x824C8FD4;
	sub_821CD4C8(ctx, base);
loc_824C8FD4:
	// li r30,31
	ctx.r30.s64 = 31;
loc_824C8FD8:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cd6c0
	ctx.lr = 0x824C8FE4;
	sub_821CD6C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x824c8fd8
	if (!ctx.cr0.lt) goto loc_824C8FD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822346f8
	ctx.lr = 0x824C8FF4;
	sub_822346F8(ctx, base);
loc_824C8FF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x824b189c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C9000) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x824b184c
	ctx.lr = 0x824C9008;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,13244
	ctx.r11.s64 = ctx.r11.s64 + 13244;
	// lwz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824c9054
	if (ctx.cr6.eq) goto loc_824C9054;
	// lwz r3,640(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 640);
	// addi r31,r29,640
	ctx.r31.s64 = ctx.r29.s64 + 640;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c9034
	if (ctx.cr6.eq) goto loc_824C9034;
	// bl 0x821cd500
	ctx.lr = 0x824C9034;
	sub_821CD500(ctx, base);
loc_824C9034:
	// li r30,31
	ctx.r30.s64 = 31;
loc_824C9038:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cd710
	ctx.lr = 0x824C9044;
	sub_821CD710(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x824c9038
	if (!ctx.cr0.lt) goto loc_824C9038;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822346f8
	ctx.lr = 0x824C9054;
	sub_822346F8(ctx, base);
loc_824C9054:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x824b189c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C9060) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,13260
	ctx.r11.s64 = ctx.r11.s64 + 13260;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824c909c
	if (ctx.cr6.eq) goto loc_824C909C;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c9094
	if (ctx.cr6.eq) goto loc_824C9094;
	// bl 0x821cd538
	ctx.lr = 0x824C9094;
	sub_821CD538(ctx, base);
loc_824C9094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822346f8
	ctx.lr = 0x824C909C;
	sub_822346F8(ctx, base);
loc_824C909C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C90B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// li r30,63
	ctx.r30.s64 = 63;
	// addi r11,r11,13336
	ctx.r11.s64 = ctx.r11.s64 + 13336;
	// addi r31,r11,2048
	ctx.r31.s64 = ctx.r11.s64 + 2048;
loc_824C90D4:
	// addi r31,r31,-32
	ctx.r31.s64 = ctx.r31.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822364b0
	ctx.lr = 0x824C90E0;
	sub_822364B0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x824c90d4
	if (!ctx.cr0.lt) goto loc_824C90D4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C9100) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C9108) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C9110) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r3,r11,27744
	ctx.r3.s64 = ctx.r11.s64 + 27744;
	// bl 0x8223fa90
	ctx.lr = 0x824C9128;
	sub_8223FA90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C9138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-4896
	ctx.r3.s64 = ctx.r11.s64 + -4896;
	// bl 0x82276338
	ctx.lr = 0x824C9150;
	sub_82276338(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C9160) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-4272
	ctx.r3.s64 = ctx.r11.s64 + -4272;
	// bl 0x82276338
	ctx.lr = 0x824C9178;
	sub_82276338(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C9188) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-4192
	ctx.r3.s64 = ctx.r11.s64 + -4192;
	// bl 0x82276338
	ctx.lr = 0x824C91A0;
	sub_82276338(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C91B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32081
	ctx.r11.s64 = -2102460416;
	// addi r3,r11,-4184
	ctx.r3.s64 = ctx.r11.s64 + -4184;
	// bl 0x82279238
	ctx.lr = 0x824C91C8;
	sub_82279238(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C91D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r11,r11,-1108
	ctx.r11.s64 = ctx.r11.s64 + -1108;
	// stw r11,1848(r10)
	REX_STORE_U32(ctx.r10.u32 + 1848, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C91F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r11,r11,-1108
	ctx.r11.s64 = ctx.r11.s64 + -1108;
	// stw r11,1880(r10)
	REX_STORE_U32(ctx.r10.u32 + 1880, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C9208) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-7848
	ctx.r11.s64 = ctx.r11.s64 + -7848;
	// addi r9,r10,9728
	ctx.r9.s64 = ctx.r10.s64 + 9728;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x824aed48
	sub_824AED48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C9230) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

