//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GWA2ConditionalProto : NSObject
{
    int _nodeStates;
    id _proto;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int nodeStates; // @synthesize nodeStates=_nodeStates;
@property(readonly, nonatomic) id proto; // @synthesize proto=_proto;
- (_Bool)matchesNodeStates:(int)arg1;
- (id)initWithProto:(id)arg1 nodeStates:(int)arg2;

@end

