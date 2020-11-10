//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "SPTForegroundObserverApplication-Protocol.h"

@interface UIApplication (AppKernelFeature) <SPTForegroundObserverApplication>
+ (_Bool)isTargetedForSimulator;
+ (id)cachesDirectoryPath;
+ (id)cachesDirectoryURL;
+ (id)supportedURLSchemes;
+ (_Bool)supportsExternalAccessoryProtocolString:(id)arg1;
+ (id)supportedProtocolsWithRangeOfIndexes:(struct _NSRange)arg1;
+ (id)requiredProtocolsForMultisession;
+ (_Bool)hasAllRequiredProtocolsForMultisession;
+ (id)randomNegotiationProtocol;
+ (id)preselectableCommunicationProtocols;
+ (id)negotiationProtocols;
+ (id)communicationProtocols;
+ (id)legacyCommunicationProtocol;
@property(readonly, nonatomic) double spt_maxSafeAreaInsets;
- (void)spt_safelyExit:(int)arg1;
- (void)spt_safelyExit;
- (id)spt_rootView;
@end

