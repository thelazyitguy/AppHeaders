//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/DGNIdentifiableEntity-Protocol.h>
#import <Module_Framework/GRWStoredEntity-Protocol.h>

@class DGNVersionedIdentifier, GRWDeviceConditions, GRWMessageGeneralPromptUI, GRWMessageID, GRWMessagePermissionPromptUI, GRWMessageSuccessRule, GRWMessageTapTargetUI, GRWMessageTargeting, GRWMessageTooltipUI, GRWMessageTriggering, NSString;

@interface GRWMessage : NSObject <GRWStoredEntity, DGNIdentifiableEntity>
{
    _Bool _isCounterfactual;
    GRWMessageID *_messageID;
    NSString *_languageCode;
    NSString *_countryCode;
    long long _priority;
    long long _type;
    long long _theme;
    GRWDeviceConditions *_conditions;
    GRWMessageSuccessRule *_successRule;
    GRWMessageTriggering *_triggering;
    GRWMessageTargeting *_targeting;
    GRWMessageGeneralPromptUI *_generalPromptUI;
    GRWMessageTapTargetUI *_tapTargetUI;
    GRWMessageTooltipUI *_tooltipUI;
    GRWMessagePermissionPromptUI *_permissionPromptUI;
    DGNVersionedIdentifier *_versionedIdentifier;
}

+ (long long)entityType;
+ (id)stringForTheme:(long long)arg1;
+ (id)stringForType:(long long)arg1;
+ (id)messageWithPermissionPromptUI:(id)arg1 messageID:(id)arg2 versionedIdentifier:(id)arg3 priority:(long long)arg4 theme:(long long)arg5 conditions:(id)arg6 triggering:(id)arg7 targeting:(id)arg8 successRule:(id)arg9 isCounterfactual:(_Bool)arg10;
+ (id)messageWithTapTargetUI:(id)arg1 messageID:(id)arg2 versionedIdentifier:(id)arg3 priority:(long long)arg4 theme:(long long)arg5 conditions:(id)arg6 triggering:(id)arg7 targeting:(id)arg8 successRule:(id)arg9 isCounterfactual:(_Bool)arg10;
+ (id)messageWithTooltipUI:(id)arg1 messageID:(id)arg2 versionedIdentifier:(id)arg3 priority:(long long)arg4 theme:(long long)arg5 conditions:(id)arg6 triggering:(id)arg7 targeting:(id)arg8 successRule:(id)arg9 isCounterfactual:(_Bool)arg10;
+ (id)messageWithGeneralPromptUI:(id)arg1 messageID:(id)arg2 versionedIdentifier:(id)arg3 priority:(long long)arg4 theme:(long long)arg5 conditions:(id)arg6 triggering:(id)arg7 targeting:(id)arg8 successRule:(id)arg9 isCounterfactual:(_Bool)arg10;
+ (id)storeKitReviewMessageWithMessageID:(id)arg1 versionedIdentifier:(id)arg2 priority:(long long)arg3 theme:(long long)arg4 conditions:(id)arg5 triggering:(id)arg6 targeting:(id)arg7 successRule:(id)arg8 isCounterfactual:(_Bool)arg9;
+ (_Bool)supportsSecureCoding;
+ (long long)themeFromProtoTheme:(int)arg1;
+ (long long)typeFromProtoType:(int)arg1;
+ (id)messagesFromPromotions:(id)arg1;
+ (id)messagesWithResponse:(id)arg1;
+ (id)messageWithProto:(id)arg1 versionedIdentifier:(id)arg2;
+ (id)messageWithProto:(id)arg1;
+ (id)genericMessageWithObject:(id)arg1;
+ (long long)displayableTheme;
- (void).cxx_destruct;
@property(retain, nonatomic) DGNVersionedIdentifier *versionedIdentifier; // @synthesize versionedIdentifier=_versionedIdentifier;
@property(readonly, nonatomic) GRWMessagePermissionPromptUI *permissionPromptUI; // @synthesize permissionPromptUI=_permissionPromptUI;
@property(readonly, nonatomic) GRWMessageTooltipUI *tooltipUI; // @synthesize tooltipUI=_tooltipUI;
@property(readonly, nonatomic) GRWMessageTapTargetUI *tapTargetUI; // @synthesize tapTargetUI=_tapTargetUI;
@property(readonly, nonatomic) GRWMessageGeneralPromptUI *generalPromptUI; // @synthesize generalPromptUI=_generalPromptUI;
@property(readonly, nonatomic) _Bool isCounterfactual; // @synthesize isCounterfactual=_isCounterfactual;
@property(retain, nonatomic) GRWMessageTargeting *targeting; // @synthesize targeting=_targeting;
@property(retain, nonatomic) GRWMessageTriggering *triggering; // @synthesize triggering=_triggering;
@property(readonly, nonatomic) GRWMessageSuccessRule *successRule; // @synthesize successRule=_successRule;
@property(readonly, nonatomic) GRWDeviceConditions *conditions; // @synthesize conditions=_conditions;
@property(nonatomic) long long theme; // @synthesize theme=_theme;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) GRWMessageID *messageID; // @synthesize messageID=_messageID;
- (id)stringForTheme;
- (id)stringForType;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMessage:(id)arg1;
- (_Bool)validateGeneralPromptActions;
- (_Bool)isValidMessage;
- (id)initWithMessageID:(id)arg1 versionedIdentifier:(id)arg2 languageCode:(id)arg3 countryCode:(id)arg4 type:(long long)arg5 priority:(long long)arg6 theme:(long long)arg7 conditions:(id)arg8 triggering:(id)arg9 targeting:(id)arg10 generalPromptUI:(id)arg11 tapTargetUI:(id)arg12 tooltipUI:(id)arg13 permissionPromptUI:(id)arg14 successRule:(id)arg15 isCounterfactual:(_Bool)arg16;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool isKeyboardAllowed;
@property(readonly, nonatomic) GRWMessageGeneralPromptUI *generalPromptUIForDisplay;
@property(readonly, nonatomic) NSString *debugTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
