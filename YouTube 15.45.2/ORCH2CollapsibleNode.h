//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ORCH2Node;

@interface ORCH2CollapsibleNode : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ORCH2Node *collapsedNode; // @dynamic collapsedNode;
@property(retain, nonatomic) ORCH2Node *expandedNode; // @dynamic expandedNode;
@property(nonatomic) _Bool hasCollapsedNode; // @dynamic hasCollapsedNode;
@property(nonatomic) _Bool hasExpandedNode; // @dynamic hasExpandedNode;

@end
