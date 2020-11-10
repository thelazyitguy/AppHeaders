//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTSurveyPromosheetViewModel-Protocol.h>

@class NSArray, NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTISurveyOrientation;

@interface YTISingleOptionSurveyRenderer : GPBMessage <YTSurveyPromosheetViewModel>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) _Bool vmIsVertical;
@property(readonly, nonatomic) NSArray *vmOptionsArray;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *cancelButton; // @dynamic cancelButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTICommand *dismissalEndpoint; // @dynamic dismissalEndpoint;
@property(retain, nonatomic) YTIFormattedString *dismissalText; // @dynamic dismissalText;
@property(nonatomic) int displayDelaySec; // @dynamic displayDelaySec;
@property(nonatomic) unsigned int displayDurationSeconds; // @dynamic displayDurationSeconds;
@property(nonatomic) int displayTime; // @dynamic displayTime;
@property(copy, nonatomic) NSString *followUpSurveyURL; // @dynamic followUpSurveyURL;
@property(nonatomic) _Bool hasCancelButton; // @dynamic hasCancelButton;
@property(nonatomic) _Bool hasDismissalEndpoint; // @dynamic hasDismissalEndpoint;
@property(nonatomic) _Bool hasDismissalText; // @dynamic hasDismissalText;
@property(nonatomic) _Bool hasDisplayDelaySec; // @dynamic hasDisplayDelaySec;
@property(nonatomic) _Bool hasDisplayDurationSeconds; // @dynamic hasDisplayDurationSeconds;
@property(nonatomic) _Bool hasDisplayTime; // @dynamic hasDisplayTime;
@property(nonatomic) _Bool hasFollowUpSurveyURL; // @dynamic hasFollowUpSurveyURL;
@property(nonatomic) _Bool hasOkButton; // @dynamic hasOkButton;
@property(nonatomic) _Bool hasQuestion; // @dynamic hasQuestion;
@property(nonatomic) _Bool hasShowGfeedbackPrompt; // @dynamic hasShowGfeedbackPrompt;
@property(nonatomic) _Bool hasSuppressionEndpoint; // @dynamic hasSuppressionEndpoint;
@property(nonatomic) _Bool hasSurveyId; // @dynamic hasSurveyId;
@property(nonatomic) _Bool hasSurveyOrientation; // @dynamic hasSurveyOrientation;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) NSMutableArray *impressionRenderersArray; // @dynamic impressionRenderersArray;
@property(readonly, nonatomic) unsigned long long impressionRenderersArray_Count; // @dynamic impressionRenderersArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *okButton; // @dynamic okButton;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(retain, nonatomic) YTIFormattedString *question; // @dynamic question;
@property(nonatomic) _Bool showGfeedbackPrompt; // @dynamic showGfeedbackPrompt;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTICommand *suppressionEndpoint; // @dynamic suppressionEndpoint;
@property(nonatomic) unsigned long long surveyId; // @dynamic surveyId;
@property(retain, nonatomic) YTISurveyOrientation *surveyOrientation; // @dynamic surveyOrientation;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) NSMutableArray *watchPageDisplayTriggersArray; // @dynamic watchPageDisplayTriggersArray;
@property(readonly, nonatomic) unsigned long long watchPageDisplayTriggersArray_Count; // @dynamic watchPageDisplayTriggersArray_Count;

@end

