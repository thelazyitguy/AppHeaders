//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class CLCClearFieldsSpec, CLCSawmillRoutingDestination_IncludeOptions, NSString;

@interface CLCSawmillRoutingDestination : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CLCClearFieldsSpec *clearFields; // @dynamic clearFields;
@property(nonatomic) _Bool hasClearFields; // @dynamic hasClearFields;
@property(nonatomic) _Bool hasIncludeFields; // @dynamic hasIncludeFields;
@property(nonatomic) _Bool hasLogSource; // @dynamic hasLogSource;
@property(nonatomic) _Bool hasLogType; // @dynamic hasLogType;
@property(nonatomic) _Bool hasPersonalOrphanedPrivacyApproved; // @dynamic hasPersonalOrphanedPrivacyApproved;
@property(nonatomic) _Bool hasPreferTmpIds; // @dynamic hasPreferTmpIds;
@property(nonatomic) _Bool hasTranslatorClass; // @dynamic hasTranslatorClass;
@property(retain, nonatomic) CLCSawmillRoutingDestination_IncludeOptions *includeFields; // @dynamic includeFields;
@property(copy, nonatomic) NSString *logSource; // @dynamic logSource;
@property(copy, nonatomic) NSString *logType; // @dynamic logType;
@property(nonatomic) _Bool personalOrphanedPrivacyApproved; // @dynamic personalOrphanedPrivacyApproved;
@property(nonatomic) int preferTmpIds; // @dynamic preferTmpIds;
@property(copy, nonatomic) NSString *translatorClass; // @dynamic translatorClass;

@end
