//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JBTExpandableElement_ExpansionState;
@protocol JBTId;

@protocol JBTExpandableElement <JavaObject>
- (void)setFixedWithBoolean:(_Bool)arg1;
- (void)setExpansionStateWithJBTExpandableElement_ExpansionState:(JBTExpandableElement_ExpansionState *)arg1;
- (void)collapse;
- (_Bool)canCollapse;
- (void)expand;
- (_Bool)canExpand;
- (JBTExpandableElement_ExpansionState *)getExpansionState;
- (id <JBTId>)getElementId;
@end
