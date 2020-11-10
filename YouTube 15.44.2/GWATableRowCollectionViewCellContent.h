//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWACollectionCellContent-Protocol.h>
#import <Module_Framework/GWADependencyGraphComponent-Protocol.h>
#import <Module_Framework/GWATriggerComponent-Protocol.h>

@class GWADependencyGraph, GWAFlowContext, NSArray, NSMutableArray, NSString, OrchTableRow;

@interface GWATableRowCollectionViewCellContent : NSObject <GWATriggerComponent, GWACollectionCellContent, GWADependencyGraphComponent>
{
    unsigned long long _cellContentType;
    OrchTableRow *_row;
    GWAFlowContext *_context;
    GWADependencyGraph *_dependencyGraph;
    NSMutableArray *_clickTriggers;
    NSArray *_spannedIndexes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *spannedIndexes; // @synthesize spannedIndexes=_spannedIndexes;
@property(retain, nonatomic) NSMutableArray *clickTriggers; // @synthesize clickTriggers=_clickTriggers;
@property(retain, nonatomic) GWADependencyGraph *dependencyGraph; // @synthesize dependencyGraph=_dependencyGraph;
@property(retain, nonatomic) GWAFlowContext *context; // @synthesize context=_context;
@property(retain, nonatomic) OrchTableRow *row; // @synthesize row=_row;
@property(nonatomic) unsigned long long cellContentType; // @synthesize cellContentType=_cellContentType;
- (_Bool)checkTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (Class)cellClass;
- (id)initWithTableRowContent:(id)arg1 spannedIndexes:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

