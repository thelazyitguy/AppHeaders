//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CodePushTelemetryManager : NSObject
{
}

+ (void)saveStatusReportedForIdentifier:(id)arg1;
+ (_Bool)isStatusReportIdentifierCodePushLabel:(id)arg1;
+ (id)getVersionLabelFromStatusReportIdentifier:(id)arg1;
+ (id)getPreviousStatusReportIdentifier;
+ (id)getPackageStatusReportIdentifier:(id)arg1;
+ (id)getDeploymentKeyFromStatusReportIdentifier:(id)arg1;
+ (void)clearRetryStatusReport;
+ (void)saveStatusReportForRetry:(id)arg1;
+ (void)recordStatusReported:(id)arg1;
+ (id)getUpdateReport:(id)arg1;
+ (id)getRollbackReport:(id)arg1;
+ (id)getRetryStatusReport;
+ (id)getBinaryUpdateReport:(id)arg1;

@end
