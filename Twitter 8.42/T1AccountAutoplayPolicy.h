//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1AccountAutoplayPolicy : NSObject
{
    // Error parsing type: , name: autoplayConditionsDidChangeBlock
    // Error parsing type: , name: currentSettings
    // Error parsing type: , name: currentNetworkReachabilityStatus
}

- (void).cxx_destruct;
- (_Bool)autoplayableIsEligibleForAutoplayWithAutoplayable:(id)arg1 environment:(id)arg2;
- (void)didJoinAutoplayPipelineWithAutoplayConditionsDidChangeBlock:(CDUnknownBlockType)arg1;
- (void)autoplayConditionsDidChange;
- (id)init;
- (void)dealloc;
- (id)initWithCurrentSettings:(CDUnknownBlockType)arg1 currentNetworkReachabilityStatus:(CDUnknownBlockType)arg2 notificationCenter:(id)arg3;

@end

