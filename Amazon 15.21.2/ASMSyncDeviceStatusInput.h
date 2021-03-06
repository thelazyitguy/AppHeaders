//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSModel.h"

@class ASMClientAppStatus, NSArray, NSNumber, NSString;

@interface ASMSyncDeviceStatusInput : AWSModel
{
    NSNumber *_ping;
    NSString *_atzKey;
    NSString *_appInstallId;
    ASMClientAppStatus *_clientAppStatus;
    NSString *_updateReason;
    NSArray *_complianceCriteria;
    NSString *_marketplaceId;
    NSString *_appType;
    NSString *_appVersion;
    NSString *_osVersion;
}

+ (id)clientAppStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *appType; // @synthesize appType=_appType;
@property(readonly, nonatomic) NSString *marketplaceId; // @synthesize marketplaceId=_marketplaceId;
@property(readonly, nonatomic) NSArray *complianceCriteria; // @synthesize complianceCriteria=_complianceCriteria;
@property(readonly, nonatomic) NSString *updateReason; // @synthesize updateReason=_updateReason;
@property(readonly, nonatomic) ASMClientAppStatus *clientAppStatus; // @synthesize clientAppStatus=_clientAppStatus;
@property(readonly, nonatomic) NSString *appInstallId; // @synthesize appInstallId=_appInstallId;
@property(readonly, nonatomic) NSString *atzKey; // @synthesize atzKey=_atzKey;
@property(readonly, nonatomic) NSNumber *ping; // @synthesize ping=_ping;
- (void).cxx_destruct;
- (id)initWithSmileModeEnabled:(_Bool)arg1 withSubscriptionPeriodId:(id)arg2 withSequenceNumber:(id)arg3 withUpdateReason:(id)arg4 withComplianceCriteria:(id)arg5 withCustomerClassification:(id)arg6 withAtzKey:(id)arg7 withAppInstallId:(id)arg8 withMarketplaceId:(id)arg9 withAppType:(id)arg10 withAppVersion:(id)arg11 withOsVersion:(id)arg12;
- (id)initWithAtzKey:(id)arg1 withMarketplaceId:(id)arg2 withAppType:(id)arg3 withAppVersion:(id)arg4 withOsVersion:(id)arg5 withAppInstallId:(id)arg6;

@end

