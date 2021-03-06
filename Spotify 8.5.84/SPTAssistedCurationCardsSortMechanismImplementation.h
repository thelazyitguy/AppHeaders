//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationCardsSortMechanism-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SPTAssistedCurationCardsSortMechanismImplementation : NSObject <SPTAssistedCurationCardsSortMechanism>
{
    NSMutableDictionary *_rulesMap;
    NSMutableDictionary *_weightMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *weightMap; // @synthesize weightMap=_weightMap;
@property(retain, nonatomic) NSMutableDictionary *rulesMap; // @synthesize rulesMap=_rulesMap;
- (void)sortWithNewCards:(id)arg1 withEnumeratorBlock:(CDUnknownBlockType)arg2 insertCardAtIndexBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (long long)compareCardA:(id)arg1 withCardB:(id)arg2;
- (long long)weightForCard:(id)arg1;
- (id)initWithOrderedSortRules:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

