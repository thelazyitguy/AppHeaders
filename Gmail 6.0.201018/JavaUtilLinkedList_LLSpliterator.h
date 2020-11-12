//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilSpliterator-Protocol.h"

@class JavaUtilLinkedList, JavaUtilLinkedList_Node, NSString;

@interface JavaUtilLinkedList_LLSpliterator : NSObject <JavaUtilSpliterator>
{
    JavaUtilLinkedList *list_;
    JavaUtilLinkedList_Node *current_;
    int est_;
    int expectedModCount_;
    int batch_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getComparator;
- (_Bool)hasCharacteristicsWithInt:(int)arg1;
- (long long)getExactSizeIfKnown;
- (int)characteristics;
- (_Bool)tryAdvanceWithJavaUtilFunctionConsumer:(id)arg1;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (id)trySplit;
- (long long)estimateSize;
- (int)getEst;
- (id)initWithJavaUtilLinkedList:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
