//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol SSOIdentity;

@interface DXPLibraryState : NSObject
{
    id <SSOIdentity> _primaryIdentity;
    NSDictionary *_currentPolicies;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *currentPolicies; // @synthesize currentPolicies=_currentPolicies;
@property(readonly, nonatomic) id <SSOIdentity> primaryIdentity; // @synthesize primaryIdentity=_primaryIdentity;
- (id)description;
- (_Bool)isEqualToStateWrapper:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPrimaryIdentity:(id)arg1 currentPolicies:(id)arg2;

@end

