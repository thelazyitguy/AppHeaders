//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGEditableValue, NSArray, NSAttributedString, NSDate, NSDictionary, NSOrderedSet, NSString;

@interface IBGDefaults : NSObject
{
    _Bool _hasRecentActivity;
    _Bool _shouldResetUserDataAtStart;
    _Bool _willTakeScreenshot;
    _Bool _showPrompt;
    _Bool _enableAttachmentExtraScreenShot;
    _Bool _enableAttachmentGalleryImage;
    _Bool _enableAttachmentVoiceNote;
    _Bool _enableAttachmentScreenRecording;
    _Bool _bugReportingEnabled;
    _Bool _chatsEnabled;
    _Bool _repliesEnabled;
    _Bool _featureRequestsEnabled;
    _Bool _chatsListInPromptEnabled;
    _Bool _chatInPromptEnabled;
    _Bool _bugInPromptEnabled;
    _Bool _feedbackInPromptEnabled;
    _Bool _disableAutomaticShowingSurveys;
    _Bool _allowIBGLogToPrintInConsoleLog;
    _Bool _autoScreenRecordingEnabled;
    _Bool _autoScreenRecordingAudioCapturingEnabled;
    _Bool _isUITestModeEnabled;
    _Bool _isCrossPlatform;
    _Bool _startAlertTextIsSet;
    unsigned int _floatingButtonEdge;
    NSArray *_issueTags;
    NSString *_identifiedEmail;
    NSString *_lastRegisteredPNToken;
    NSString *_lastRetrievedAPNSToken;
    long long _unreadMessagesCount;
    NSDate *_signupDate;
    NSOrderedSet *_appVersionsHistory;
    long long _featuresRequestTTL;
    NSString *_featuresHash;
    NSString *_email;
    NSString *_name;
    NSString *_identifiedName;
    long long _invocationMode;
    long long _invocationEvent;
    double _iPhoneThreshold;
    double _iPadThreshold;
    double _floatingButtonOffsetFromTop;
    NSArray *_categories;
    NSAttributedString *_disclaimerText;
    NSDate *_firstSeen;
    double _autoScreenRecordingDuration;
    long long _platform;
    long long _videoRecordingCaptureButtonDefaultPostion;
    IBGEditableValue *_willSkipScreenShot;
    NSString *_UUID;
    NSString *_applicationToken;
    NSDictionary *_actionTypeEmailRequired;
}

+ (id)invalidTokenString;
@property(retain, nonatomic) NSDictionary *actionTypeEmailRequired; // @synthesize actionTypeEmailRequired=_actionTypeEmailRequired;
@property(retain, nonatomic) NSString *applicationToken; // @synthesize applicationToken=_applicationToken;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) _Bool startAlertTextIsSet; // @synthesize startAlertTextIsSet=_startAlertTextIsSet;
@property(retain, nonatomic) IBGEditableValue *willSkipScreenShot; // @synthesize willSkipScreenShot=_willSkipScreenShot;
@property(nonatomic) long long videoRecordingCaptureButtonDefaultPostion; // @synthesize videoRecordingCaptureButtonDefaultPostion=_videoRecordingCaptureButtonDefaultPostion;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(nonatomic) _Bool isCrossPlatform; // @synthesize isCrossPlatform=_isCrossPlatform;
@property(nonatomic) _Bool isUITestModeEnabled; // @synthesize isUITestModeEnabled=_isUITestModeEnabled;
@property(nonatomic) _Bool autoScreenRecordingAudioCapturingEnabled; // @synthesize autoScreenRecordingAudioCapturingEnabled=_autoScreenRecordingAudioCapturingEnabled;
@property(nonatomic) _Bool autoScreenRecordingEnabled; // @synthesize autoScreenRecordingEnabled=_autoScreenRecordingEnabled;
@property(nonatomic) double autoScreenRecordingDuration; // @synthesize autoScreenRecordingDuration=_autoScreenRecordingDuration;
@property(nonatomic) _Bool allowIBGLogToPrintInConsoleLog; // @synthesize allowIBGLogToPrintInConsoleLog=_allowIBGLogToPrintInConsoleLog;
@property(nonatomic) _Bool disableAutomaticShowingSurveys; // @synthesize disableAutomaticShowingSurveys=_disableAutomaticShowingSurveys;
@property(retain, nonatomic) NSDate *firstSeen; // @synthesize firstSeen=_firstSeen;
@property(nonatomic) _Bool feedbackInPromptEnabled; // @synthesize feedbackInPromptEnabled=_feedbackInPromptEnabled;
@property(nonatomic) _Bool bugInPromptEnabled; // @synthesize bugInPromptEnabled=_bugInPromptEnabled;
@property(nonatomic) _Bool chatInPromptEnabled; // @synthesize chatInPromptEnabled=_chatInPromptEnabled;
@property(nonatomic) _Bool chatsListInPromptEnabled; // @synthesize chatsListInPromptEnabled=_chatsListInPromptEnabled;
@property(nonatomic) _Bool featureRequestsEnabled; // @synthesize featureRequestsEnabled=_featureRequestsEnabled;
@property(nonatomic) _Bool repliesEnabled; // @synthesize repliesEnabled=_repliesEnabled;
@property(nonatomic) _Bool chatsEnabled; // @synthesize chatsEnabled=_chatsEnabled;
@property(nonatomic) _Bool bugReportingEnabled; // @synthesize bugReportingEnabled=_bugReportingEnabled;
@property(nonatomic) _Bool enableAttachmentScreenRecording; // @synthesize enableAttachmentScreenRecording=_enableAttachmentScreenRecording;
@property(nonatomic) _Bool enableAttachmentVoiceNote; // @synthesize enableAttachmentVoiceNote=_enableAttachmentVoiceNote;
@property(nonatomic) _Bool enableAttachmentGalleryImage; // @synthesize enableAttachmentGalleryImage=_enableAttachmentGalleryImage;
@property(nonatomic) _Bool enableAttachmentExtraScreenShot; // @synthesize enableAttachmentExtraScreenShot=_enableAttachmentExtraScreenShot;
@property(retain, nonatomic) NSAttributedString *disclaimerText; // @synthesize disclaimerText=_disclaimerText;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) unsigned int floatingButtonEdge; // @synthesize floatingButtonEdge=_floatingButtonEdge;
@property(nonatomic) double floatingButtonOffsetFromTop; // @synthesize floatingButtonOffsetFromTop=_floatingButtonOffsetFromTop;
@property(nonatomic) double iPadThreshold; // @synthesize iPadThreshold=_iPadThreshold;
@property(nonatomic) double iPhoneThreshold; // @synthesize iPhoneThreshold=_iPhoneThreshold;
@property(nonatomic) long long invocationEvent; // @synthesize invocationEvent=_invocationEvent;
@property(nonatomic) long long invocationMode; // @synthesize invocationMode=_invocationMode;
@property(nonatomic) _Bool showPrompt; // @synthesize showPrompt=_showPrompt;
@property(nonatomic) _Bool willTakeScreenshot; // @synthesize willTakeScreenshot=_willTakeScreenshot;
@property(retain, nonatomic) NSString *identifiedName; // @synthesize identifiedName=_identifiedName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool shouldResetUserDataAtStart; // @synthesize shouldResetUserDataAtStart=_shouldResetUserDataAtStart;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) _Bool hasRecentActivity; // @synthesize hasRecentActivity=_hasRecentActivity;
@property(retain, nonatomic) NSString *identifiedEmail; // @synthesize identifiedEmail=_identifiedEmail;
- (void).cxx_destruct;
- (unsigned long long)maximumNumberOfAttachmentsAllowed;
@property(readonly, nonatomic) _Bool disableAttachments;
- (void)setDisclaimerTextAsAttributedString:(id)arg1;
- (_Bool)isEmailRequiredForActionType:(long long)arg1;
- (void)setEmailRequired:(_Bool)arg1 forAction:(long long)arg2;
- (_Bool)shouldShowFeatureRequestInPrompt;
- (_Bool)shouldShowFeedbackInPrompt;
- (_Bool)shouldShowBugInPrompt;
- (_Bool)shouldShowChatsListInPrompt;
- (_Bool)shouldShowChatInPrompt;
@property(retain, nonatomic) NSArray *issueTags; // @synthesize issueTags=_issueTags;
- (_Bool)deviceTokenRequested;
@property(copy, nonatomic) NSString *featuresHash; // @synthesize featuresHash=_featuresHash;
@property(nonatomic) long long featuresRequestTTL; // @synthesize featuresRequestTTL=_featuresRequestTTL;
@property(nonatomic) long long unreadMessagesCount; // @synthesize unreadMessagesCount=_unreadMessagesCount;
@property(retain, nonatomic) NSString *lastRegisteredPNToken; // @synthesize lastRegisteredPNToken=_lastRegisteredPNToken;
@property(retain, nonatomic) NSString *lastRetrievedAPNSToken; // @synthesize lastRetrievedAPNSToken=_lastRetrievedAPNSToken;
- (long long)daysSinceLastUserCommunication;
@property(retain, nonatomic) NSDate *lastContactedAt;
@property(readonly, nonatomic) _Bool deviceWasRegisteredInLegacySDK;
@property(retain, nonatomic) NSOrderedSet *appVersionsHistory; // @synthesize appVersionsHistory=_appVersionsHistory;
- (void)setSignupDate:(id)arg1;
@property(readonly, nonatomic) NSDate *signupDate; // @synthesize signupDate=_signupDate;
@property(retain, nonatomic) NSString *appToken;
@property(retain, nonatomic) NSString *savedUUID;
@property(nonatomic) _Bool serversSaved;
@property(readonly, nonatomic) NSString *reportingName;
@property(readonly, nonatomic) NSString *sessionEmail;
@property(readonly, nonatomic) NSString *reportingEmail;
- (void)destroy;
- (id)init;

@end

