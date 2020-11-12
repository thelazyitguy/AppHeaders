//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BigtopUtilities : NSObject
{
}

+ (id)buildLabelFromAppID:(id)arg1 bundleVersion:(id)arg2;
+ (int)buildNumberFromBundleVersion:(id)arg1;
+ (void)openAppSettingsPage;
+ (id)appStoreUrl;
+ (id)appDisplayName;
+ (_Bool)isDevBuild;
+ (_Bool)isMultitaskInterface;
+ (_Bool)isRunningTests;
+ (_Bool)isRunningFunctionalTests;
+ (_Bool)isRunningEarlGreyV2Tests;
+ (_Bool)isRunningUnitTests;
+ (_Bool)isExpandedSplitInterface;
+ (_Bool)isSplitInterface;
+ (id)deviceOsBuildString;
+ (id)deviceVersionString;
+ (id)systemInfoWithName:(id)arg1;
+ (id)buildLabel;
+ (int)buildNumber;
+ (id)bundleVersion;
+ (id)appID;
+ (id)userAgent;
+ (unsigned long long)flexibleRightMarginForCurrentLayout;
+ (unsigned long long)flexibleLeftMarginForCurrentLayout;
+ (long long)defaultLineBreakMode;
+ (long long)defaultControlContentHorizontalAlignment;
+ (long long)defaultTextAlignment;
+ (_Bool)isAppExtension;
+ (_Bool)isPortrait;
+ (_Bool)isLandscape;
+ (id)userInitiatedReportTag;
+ (id)crashReportTag;
+ (id)performanceClock;
+ (id)deviceFormFactor;
+ (id)codebase;
+ (void)clearCookies;

@end
