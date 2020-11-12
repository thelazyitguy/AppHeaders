//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNZLogger.h"

@interface SNZVoiceAssistantClickStreamLogger : SNZLogger
{
}

+ (id)sharedInstance;
- (void)logTypeSearch;
- (void)logSelectDisambiguationWithSelectedIndex:(unsigned long long)arg1;
- (void)logUserLeaveFromError;
- (void)logUserLeaveFromDisambiguation;
- (void)logUserLeaveFromFirstRun;
- (void)logUserLeaveFromLearnMore;
- (void)logUserLeaveFromProcessing;
- (void)logUserLeaveFromListening;
- (void)logErrorPageOpened;
- (void)logDisambiguationPageOpened;
- (void)logFirstRunPageOpened;
- (void)logLearnMorePageOpened;
- (void)logProcessingPageOpened;
- (void)logListeningPageOpened;
- (void)logListeningToProcessing;
- (void)logShowBubbleTipWithTextSuggestion:(id)arg1;
- (void)logShowBubbleTipAlexa;
- (void)logShowBubbleTipList;
- (void)logShowBubbleTipCart;
- (void)logShowBubbleTipBestSelling;
- (void)logShowBubbleTipBuy;
- (void)logShowBubbleTipTrackOrder;
- (void)logClickShowAdvancedEducationalTooltip;
- (void)logClickCloseAdvancedEducationalTooltip;
- (void)logStartVoiceFromAdvancedEducationalTooltip;
- (void)logClickOnBubbleTipWithTextSuggestion:(id)arg1;
- (void)logClickOnBubbleTipAlexa;
- (void)logClickOnBubbleTipWishList;
- (void)logClickOnBubbleTipCart;
- (void)logClickOnBubbleTipBestSelling;
- (void)logClickOnBubbleTipBuy;
- (void)logClickOnBubbleTipTrackOrder;
- (void)logGotoHelpFromError;
- (void)logGotoHelpFromDisambiguation;
- (void)logGotoHelpFromProcessing;
- (void)logGotoHelpFromListening;
- (void)logManualEndPointing;
- (void)logClosePageFromErrorScreen;
- (void)logClosePageFromDisambiguation;
- (void)logClosePageFromLearnMore;
- (void)logClosePageFromProcessing;
- (void)logClosePageFromListening;
- (void)logStartVoiceFromLearnMore;
- (void)logStartVoiceFromFirstRun;
- (void)logStartVoiceFromError;
- (void)logStartVoiceFromDisambiguation;
- (void)logStartVoiceFromTooltip;
- (void)logStartVoiceFromOutsideSearchBarInFocusWithBlackBelt;
- (void)logStartVoiceFromOutsideSearchBarOnSearchResultsWithBlackBelt;
- (void)logStartVoiceFromOutsideHomeSearchBarWithBlackBelt;
- (void)logStartVoiceFromOutsideSearchBarInFocus;
- (void)logStartVoiceFromOutsideSearchBarOnSearchResults;
- (void)logStartVoiceFromOutsideHomeSearchBar;
- (void)logStartVoiceFromSearchSuggestions;
- (void)logStartVoiceFromSearchBarInFocus;
- (void)logStartVoiceFromSearchBarOnSearchResults;
- (void)logStartVoiceFromHomeSearchBar;
- (void)logClickstreamMetric:(id)arg1;

@end
