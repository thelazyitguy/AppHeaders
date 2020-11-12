//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRUpdateUIServiceData : NSObject
{
    struct Handle<std::__1::shared_ptr<core::UpdateUIServiceData>, std::__1::shared_ptr<core::UpdateUIServiceData>> _cppRefHandle;
}

+ (id)create;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setLanguagePackForOnDemandOTA:(id)arg1;
- (_Bool)isTrackUpdateNecessary;
- (void)setTrackForOnDemandOTA:(id)arg1;
- (void)setPreAwsAssetForUpdate:(id)arg1;
- (int)getAudioVersion;
- (id)getSoftwareVersionUpdateDate;
- (id)getSoftwareVersion;
- (int)getSoftwareUpdateExpectedInstallationTime;
- (int)getSoftwareUpdateExpectedDownloadTime;
- (long long)getSoftwareUpdatePriority;
- (long long)getSoftwareUpdateStatus;
- (long long)getExpeditedOtaStatus;
- (void)setOnDemandOTAPathType:(long long)arg1;
- (id)getStateChangelist;
- (_Bool)getIsOnDemandOTACommError;
- (_Bool)getIsOnDemandOTACompleted;
- (long long)getOnDemandOTAError;
- (long long)getOnDemandOTAStatus;
- (void)setLocalOTAData:(id)arg1;
- (long long)getLocalOTAError;
- (long long)getLocalOTAStatus;
- (const shared_ptr_c61ad546 *)cppRef;
- (id)initWithCpp:(const shared_ptr_c61ad546 *)arg1;

@end
