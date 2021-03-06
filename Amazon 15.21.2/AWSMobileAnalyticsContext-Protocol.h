//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWSMobileAnalyticsClientContext, AWSMobileAnalyticsERS, AWSMobileAnalyticsSDKInfo, NSString;
@protocol AWSMobileAnalyticsConfiguring, AWSMobileAnalyticsSystem;

@protocol AWSMobileAnalyticsContext <NSObject>
@property(readonly, retain, nonatomic) id <AWSMobileAnalyticsSystem> system;
@property(readonly, retain, nonatomic) AWSMobileAnalyticsSDKInfo *sdkInfo;
@property(retain, nonatomic) AWSMobileAnalyticsERS *ers;
@property(readonly, retain, nonatomic) NSString *uniqueId;
@property(readonly, retain, nonatomic) id <AWSMobileAnalyticsConfiguring> configuration;
@property(readonly, retain, nonatomic) AWSMobileAnalyticsClientContext *clientContext;
@property(readonly, retain, nonatomic) NSString *identifier;
- (void)synchronize;
@end

