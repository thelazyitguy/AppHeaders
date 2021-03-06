//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonBaseOptional, ComGoogleCommonHtmlTypesSafeStyleSheet, IOSByteArray, JBTAdSurvey_AdSurveyType, JBTAd_AdBadgeStyle, JBTAd_ExternalClickedSource, JBTAd_FolderType, JBTAd_NonRichTeaserCtaButtonPosition, JBTAd_Reason, JBTAd_TeaserClickedSource, JBTAd_TeaserType, JBTNativeActionEnums_EventSource, JBTNativeActionEnums_EventType, JBTTeaserCtaConfig_CtaActionType, NSString;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, JBTAdBrowserOptions, JBTAdSurveyChoice, JBTCallback, JBTSpan;

@protocol JBTAd <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)clickedToCall;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)submitFormWithComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg1;
- (ComGoogleCommonBaseOptional *)getTeaserCtaConfig;
- (JBTAd_NonRichTeaserCtaButtonPosition *)getNonRichTeaserCtaButtonPosition;
- (ComGoogleCommonBaseOptional *)getNonRichTeaserCtaText;
- (ComGoogleCommonBaseOptional *)getDelayedAdBodyInfo;
- (ComGoogleCommonBaseOptional *)getFormfillInfo;
- (ComGoogleCommonBaseOptional *)getRichBodyInfo;
- (ComGoogleCommonBaseOptional *)getRichTeaserInfo;
- (JBTAd_TeaserType *)getTeaserType;
- (void)reportSurveyShownWithJBTAdSurvey_AdSurveyType:(JBTAdSurvey_AdSurveyType *)arg1;
- (void)submitSurveyResultWithoutChoiceWithJBTAdSurvey_AdSurveyType:(JBTAdSurvey_AdSurveyType *)arg1;
- (JBTAdSurvey_AdSurveyType *)submitSurveyResultWithJBTAdSurvey_AdSurveyType:(JBTAdSurvey_AdSurveyType *)arg1 withJBTAdSurveyChoice:(id <JBTAdSurveyChoice>)arg2;
- (_Bool)isDuffyTeaserSurveySubmitted;
- (ComGoogleCommonBaseOptional *)getSurveyWithJBTAdSurvey_AdSurveyType:(JBTAdSurvey_AdSurveyType *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)appInstallButtonClicked;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getTeaserCTANativeActionsWithJBTTeaserCtaConfig_CtaActionType:(JBTTeaserCtaConfig_CtaActionType *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getNativeActionsWithJBTNativeActionEnums_EventType:(JBTNativeActionEnums_EventType *)arg1 withJBTNativeActionEnums_EventSource:(JBTNativeActionEnums_EventSource *)arg2 withComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getNativeActionsWithJBTNativeActionEnums_EventSource:(JBTNativeActionEnums_EventSource *)arg1 withComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)reportAdClickedWithJBTNativeActionEnums_EventSource:(JBTNativeActionEnums_EventSource *)arg1 withComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)urlClickedWithNSString:(NSString *)arg1 withJBTAd_ExternalClickedSource:(JBTAd_ExternalClickedSource *)arg2;
- (void)urlClickedWithNSString:(NSString *)arg1 withJBTCallback:(id <JBTCallback>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)teaserCtaButtonClickedWithJBTTeaserCtaConfig_CtaActionType:(JBTTeaserCtaConfig_CtaActionType *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)markOpenedWithJBTAd_TeaserClickedSource:(JBTAd_TeaserClickedSource *)arg1;
- (void)markAsClosedWithJBTCallback:(id <JBTCallback>)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)markOpened;
- (void)markAsOpenedWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)forward;
- (void)unstar;
- (void)starFromDetailView;
- (void)starFromThreadList;
- (void)dismissWithBoolean:(_Bool)arg1 withJBTCallback:(id <JBTCallback>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
- (JBTAd_AdBadgeStyle *)getAdBadgeStyle;
- (ComGoogleCommonBaseOptional *)getDesktopRedesignVariant;
- (ComGoogleCommonBaseOptional *)getBadgeColor;
- (ComGoogleCommonBaseOptional *)getAppInstallInfo;
- (NSString *)getLoggingId;
- (_Bool)enableDismissButtonForOneClickAd;
- (_Bool)shouldFixAdDismiss;
- (_Bool)isOneClickAdFlow;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getClickUrlForOneClick;
- (NSString *)getAdsPreferenceManagerUrl;
- (NSString *)getStylesheetRestrictorClass;
- (ComGoogleCommonHtmlTypesSafeStyleSheet *)getStylesheet;
- (_Bool)shouldDisableBodyDismissButton;
- (_Bool)shouldReportCctEventsForTwoClickFlow;
- (_Bool)shouldRemoveBorderInTeaser;
- (_Bool)showStarAndForward;
- (_Bool)isFormSubmitted;
- (_Bool)isStarred;
- (_Bool)isOpened;
- (JBTAd_FolderType *)getFolderType;
- (JBTAd_Reason *)getReason;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getParameterizedPlayStoreUrl;
- (id <JBTAdBrowserOptions>)getAdBrowserOptions;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getAdBrowserParametersWithNSString:(NSString *)arg1;
- (ComGoogleCommonBaseOptional *)getLandingPageUrlToPrefetch;
- (void)getParameterizedClickUrlWithNSString:(NSString *)arg1 withJBTCallback:(id <JBTCallback>)arg2;
- (void)getCiParameterWithJBTCallback:(id <JBTCallback>)arg1;
- (NSString *)getRedirectUrl;
- (NSString *)getVisibleUrl;
- (NSString *)getLogoImageUrl;
- (NSString *)getLogoBase64;
- (IOSByteArray *)getLogoBytes;
- (ComGoogleCommonBaseOptional *)getBodySafeHtml;
- (NSString *)getSanitizedHtmlBody;
- (NSString *)getSubtitle;
- (NSString *)getTitle;
- (NSString *)getAdvertiserName;
@end

