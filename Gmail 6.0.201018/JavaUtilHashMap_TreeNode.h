//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilLinkedHashMap_LinkedHashMapEntry.h"

@interface JavaUtilHashMap_TreeNode : JavaUtilLinkedHashMap_LinkedHashMapEntry
{
    JavaUtilHashMap_TreeNode *parent_;
    JavaUtilHashMap_TreeNode *left_;
    JavaUtilHashMap_TreeNode *right_;
    JavaUtilHashMap_TreeNode *prev_;
    _Bool red_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (_Bool)checkInvariantsWithJavaUtilHashMap_TreeNode:(id)arg1;
+ (id)balanceDeletionWithJavaUtilHashMap_TreeNode:(id)arg1 withJavaUtilHashMap_TreeNode:(id)arg2;
+ (id)balanceInsertionWithJavaUtilHashMap_TreeNode:(id)arg1 withJavaUtilHashMap_TreeNode:(id)arg2;
+ (id)rotateRightWithJavaUtilHashMap_TreeNode:(id)arg1 withJavaUtilHashMap_TreeNode:(id)arg2;
+ (id)rotateLeftWithJavaUtilHashMap_TreeNode:(id)arg1 withJavaUtilHashMap_TreeNode:(id)arg2;
+ (int)tieBreakOrderWithId:(id)arg1 withId:(id)arg2;
+ (void)moveRootToFrontWithJavaUtilHashMap_NodeArray:(id)arg1 withJavaUtilHashMap_TreeNode:(id)arg2;
- (void).cxx_destruct;
- (void)__javaClone:(id)arg1;
- (void)splitWithJavaUtilHashMap:(id)arg1 withJavaUtilHashMap_NodeArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)removeTreeNodeWithJavaUtilHashMap:(id)arg1 withJavaUtilHashMap_NodeArray:(id)arg2 withBoolean:(_Bool)arg3;
- (id)putTreeValWithJavaUtilHashMap:(id)arg1 withJavaUtilHashMap_NodeArray:(id)arg2 withInt:(int)arg3 withId:(id)arg4 withId:(id)arg5;
- (id)untreeifyWithJavaUtilHashMap:(id)arg1;
- (void)treeifyWithJavaUtilHashMap_NodeArray:(id)arg1;
- (id)getTreeNodeWithInt:(int)arg1 withId:(id)arg2;
- (id)findWithInt:(int)arg1 withId:(id)arg2 withIOSClass:(id)arg3;
- (id)root;
- (id)initWithInt:(int)arg1 withId:(id)arg2 withId:(id)arg3 withJavaUtilHashMap_Node:(id)arg4;

@end
