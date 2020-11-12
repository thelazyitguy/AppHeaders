//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol SSOIdentity;

@interface DXPLibraryStateBuilder : NSObject
{
    id <SSOIdentity> _primaryIdentity;
    NSDictionary *_currentPolicies;
}

+ (id)builderWithExistingState:(id)arg1;
+ (id)builder;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *currentPolicies; // @synthesize currentPolicies=_currentPolicies;
@property(retain, nonatomic) id <SSOIdentity> primaryIdentity; // @synthesize primaryIdentity=_primaryIdentity;
- (id)build;
- (id)init;

@end
