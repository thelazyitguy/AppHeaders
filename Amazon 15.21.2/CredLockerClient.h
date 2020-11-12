//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CredentialLockerClientDelegate-Protocol.h"
#import "HTTPRequestDelegate-Protocol.h"

@class BusinessMetrics, CredLockerHTTPRequestExecutor, CredLockerUrlBuilder, NSData, NSString;
@protocol CMIMetricsFactory, ClientDelegate;

@interface CredLockerClient : NSObject <HTTPRequestDelegate, CredentialLockerClientDelegate>
{
    BusinessMetrics *_credLockerMetrics;
    id <ClientDelegate> _delegate;
    id <CMIMetricsFactory> _metricsFactory;
    NSData *_wifiConfigurationsToBeSaved;
    CredLockerUrlBuilder *_urlBuilder;
    CredLockerHTTPRequestExecutor *_requestExecutor;
}

@property(readonly, nonatomic) CredLockerHTTPRequestExecutor *requestExecutor; // @synthesize requestExecutor=_requestExecutor;
@property(readonly, nonatomic) CredLockerUrlBuilder *urlBuilder; // @synthesize urlBuilder=_urlBuilder;
@property(readonly, nonatomic) NSData *wifiConfigurationsToBeSaved; // @synthesize wifiConfigurationsToBeSaved=_wifiConfigurationsToBeSaved;
@property(retain, nonatomic) id <CMIMetricsFactory> metricsFactory; // @synthesize metricsFactory=_metricsFactory;
@property(retain, nonatomic) id <ClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BusinessMetrics *credLockerMetrics; // @synthesize credLockerMetrics=_credLockerMetrics;
- (void).cxx_destruct;
- (void)didBuildUrl:(id)arg1 forAPICall:(unsigned long long)arg2 error:(id)arg3;
- (void)didHttpDeleteRequestCompleteWithError:(id)arg1;
- (void)didHttpGetRequestCompleteWithData:(id)arg1 error:(id)arg2;
- (void)didHttpPostRequestCompleteWithError:(id)arg1;
- (void)customerOptOutForWifiConfiguration:(id)arg1;
- (void)deleteWifiConfigurationsWithDeviceId:(id)arg1 andProductId:(id)arg2;
- (void)deleteWifiConfigurationsWithDeviceId:(id)arg1 deviceType:(id)arg2;
- (void)getWifiConfigurationsForTargetDevice:(id)arg1 targetVersion:(id)arg2 targetManufacturer:(id)arg3;
- (void)saveWifiConfigurationsWithDeviceId:(id)arg1 andProductId:(id)arg2 wifiConfigurations:(id)arg3;
- (void)saveWifiConfigurationsWithDeviceId:(id)arg1 deviceType:(id)arg2 wifiConfigurations:(id)arg3;
- (id)initWithUrlBuilder:(id)arg1 httpRequestExecutor:(id)arg2 withDelegate:(id)arg3;
- (id)initWithOAuthToken:(id)arg1 withDelegate:(id)arg2 metricsFactory:(id)arg3 initializationError:(id *)arg4;
- (unsigned long long)deserializeKeyManagement:(id)arg1;
- (id)deserializeWepKeyConfiguration:(id)arg1;
- (id)deserializeCredentialConfiguration:(id)arg1;
- (id)deserializeListOfWifiConfigurations:(id)arg1 error:(id *)arg2;
- (id)serializeListOfWifiConfigurations:(id)arg1 deviceId:(id)arg2 productId:(id)arg3 error:(id *)arg4;
- (id)convertCredentialConfiguration:(id)arg1;
- (id)convertWepKeyConfiguration:(id)arg1;
- (id)convertKeyManagement:(unsigned long long)arg1;
- (id)convertHexToUTF8:(id)arg1;
- (_Bool)isUTF8Format:(id)arg1;
- (id)removeSurroundingQuotationMarks:(id)arg1;
- (id)addSurroundingQuotationMarks:(id)arg1;
- (long long)convertKeyManagentCredLockerToWJ:(id)arg1;
- (unsigned long long)convertKeyManagentWJToCredLocker:(long long)arg1;
- (id)convertWifiConfigurationsFromCredLockerToWJ:(id)arg1;
- (id)convertWifiConfigurationsFromWJToCredLocker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
