//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class ADDONSAddOnRunOptions, ADDONSComposeTrigger, ADDONSInstallation, NSMutableArray, NSString;

@interface ADDONSAddOnsManifest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *addOnId; // @dynamic addOnId;
@property(retain, nonatomic) ADDONSAddOnRunOptions *addOnRunOptions; // @dynamic addOnRunOptions;
@property(copy, nonatomic) NSString *appsScriptId; // @dynamic appsScriptId;
@property(nonatomic) unsigned long long cloudProjectNumber; // @dynamic cloudProjectNumber;
@property(retain, nonatomic) ADDONSComposeTrigger *composeTrigger; // @dynamic composeTrigger;
@property(nonatomic) _Bool hasAddOnId; // @dynamic hasAddOnId;
@property(nonatomic) _Bool hasAddOnRunOptions; // @dynamic hasAddOnRunOptions;
@property(nonatomic) _Bool hasAppsScriptId; // @dynamic hasAppsScriptId;
@property(nonatomic) _Bool hasCloudProjectNumber; // @dynamic hasCloudProjectNumber;
@property(nonatomic) _Bool hasComposeTrigger; // @dynamic hasComposeTrigger;
@property(nonatomic) _Bool hasInstallTimeMs; // @dynamic hasInstallTimeMs;
@property(nonatomic) _Bool hasInstallType; // @dynamic hasInstallType;
@property(nonatomic) _Bool hasInstallation; // @dynamic hasInstallation;
@property(nonatomic) _Bool hasLogoURL; // @dynamic hasLogoURL;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPrimaryColor; // @dynamic hasPrimaryColor;
@property(nonatomic) _Bool hasScriptVersion; // @dynamic hasScriptVersion;
@property(nonatomic) long long installTimeMs; // @dynamic installTimeMs;
@property(nonatomic) int installType; // @dynamic installType;
@property(retain, nonatomic) ADDONSInstallation *installation; // @dynamic installation;
@property(copy, nonatomic) NSString *logoURL; // @dynamic logoURL;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int primaryColor; // @dynamic primaryColor;
@property(nonatomic) int scriptVersion; // @dynamic scriptVersion;
@property(retain, nonatomic) NSMutableArray *universalActionsArray; // @dynamic universalActionsArray;
@property(readonly, nonatomic) unsigned long long universalActionsArray_Count; // @dynamic universalActionsArray_Count;

@end
