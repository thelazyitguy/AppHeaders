//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "_TtP22AgeVerificationFeature43SPTCanPlayAgeRestrictedContentStateObserver_-Protocol.h"

@class NSArray;
@protocol HUBContentOperationDelegate, _TtP22AgeVerificationFeature26SPTAgeVerificationProvider_;

@interface SPTFreeTierUIAgeVerificationContentOperation : NSObject <_TtP22AgeVerificationFeature43SPTCanPlayAgeRestrictedContentStateObserver_, HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
    NSArray *_trackRowKeys;
    id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> _ageVerificationProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(copy, nonatomic) NSArray *trackRowKeys; // @synthesize trackRowKeys=_trackRowKeys;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void)didChangeCanPlayAgeRestrictedContent:(_Bool)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)dealloc;
- (id)initWithAgeVerificationProvider:(id)arg1;

@end

