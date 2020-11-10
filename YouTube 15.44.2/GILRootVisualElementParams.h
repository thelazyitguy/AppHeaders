//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GILBaseVisualElementParams.h>

#import <Module_Framework/GILRootParams-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol GIPAccountID;

@interface GILRootVisualElementParams : GILBaseVisualElementParams <GILRootParams>
{
    id <GIPAccountID> _accountID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
- (id)initWithRootVisualElementID:(int)arg1 accountID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementIndex;
@property(readonly, nonatomic) _Bool hasUserProvidedDedupeKey;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *interactionMetadataProviders;
@property(readonly, copy, nonatomic) NSArray *metadata;
@property(readonly, copy, nonatomic) NSDictionary *sideChannels;
@property(readonly) Class superclass;
@property(readonly, nonatomic) int visualElementID;

@end

