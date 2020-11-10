//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SPTHomeMixDomainMediator, SPTHomeMixDomainModel;

@interface SPTHomeMixUserToggleViewModel : NSObject
{
    NSArray *_members;
    SPTHomeMixDomainModel *_domainModel;
    SPTHomeMixDomainMediator *_domainMediator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeMixDomainMediator *domainMediator; // @synthesize domainMediator=_domainMediator;
@property(readonly, nonatomic) SPTHomeMixDomainModel *domainModel; // @synthesize domainModel=_domainModel;
@property(readonly, copy, nonatomic) NSArray *members; // @synthesize members=_members;
- (void)logRowTappedAtIndex:(unsigned long long)arg1;
- (void)logSwitchFlippedAtIndex:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (void)logPageImpression;
- (void)updateMemberExcludeList:(id)arg1;
- (id)initWithDomainModel:(id)arg1 domainMediator:(id)arg2;

@end

