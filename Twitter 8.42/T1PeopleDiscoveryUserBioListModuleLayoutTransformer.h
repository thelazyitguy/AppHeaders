//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1PeopleDiscoveryModuleLayoutTransformer-Protocol.h>

@class NSPredicate, NSString, TFNTwitterAccount;

@interface T1PeopleDiscoveryUserBioListModuleLayoutTransformer : NSObject <T1PeopleDiscoveryModuleLayoutTransformer>
{
    TFNTwitterAccount *_account;
    CDUnknownBlockType _userTapActionBlock;
    CDUnknownBlockType _tapActionBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType userTapActionBlock; // @synthesize userTapActionBlock=_userTapActionBlock;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, copy, nonatomic) CDUnknownBlockType responseProcessorBlock;
- (id)itemsForModule:(id)arg1;
@property(readonly, nonatomic) NSPredicate *predicate;
- (void)configureAdaptersForSectionController:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1 userTapActionBlock:(CDUnknownBlockType)arg2 tapActionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

