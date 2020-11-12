//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JAddOnsFormAction, JAddOnsSubmitFormResponse, JAddOnsUpdateDraftAction, NSArray, NSString;
@protocol JBTComposeEmailResponse, JSLSuggestionsUpdater;

@protocol GBTAddonsActionHandlerDelegate <NSObject>
- (void)addonsActionHandlerFormSubmissionFailed;
- (void)addonsActionHandlerDidReceiveSubmitFormResponse:(JAddOnsSubmitFormResponse *)arg1 persistFormValues:(_Bool)arg2 forAddOnWithId:(NSString *)arg3;
- (void)addonsActionHandlerComposeEmailResponseFailed;
- (void)addonsActionHandlerDidReceiveComposeEmailResponse:(id <JBTComposeEmailResponse>)arg1;
- (void)addonsActionHandlerDidStartUniversalAction;
- (void)addonsActionHandlerDidStartFormSubmissionForAction:(JAddOnsFormAction *)arg1;
- (void)addonsActionHandlerDidStartComposeEmailRequest;

@optional
- (void)addonsActionHandlerStateChanged;
- (void)addonsActionHandlerDidReceiveUpdateDraftAction:(JAddOnsUpdateDraftAction *)arg1;
- (void)addonsActionHandlerOnRenderOverridableViewWithComponentId:(NSString *)arg1 nativeParams:(NSArray *)arg2;
- (void)addonsActionHandlerDidOpenSafeUrlWithOriginalLink:(NSString *)arg1 safeLink:(NSString *)arg2 reloadOnClose:(_Bool)arg3 showLoadingIndicator:(_Bool)arg4;
- (void (^)(JAddOnsWidget_AutoComplete *))addonsActionHandlerGetFetchAutoCompleteCallbackWithQuery:(NSString *)arg1 updater:(id <JSLSuggestionsUpdater>)arg2;
- (void)addonsActionHandlerBackButtonClicked;
- (void)addonsActionHandlerCloseButtonClicked;
- (void)addonsActionHandlerDidExpandCardHeaderWithCardIndex:(unsigned long long)arg1;
- (void)addonsActionHandlerDidToggleFullscreen;
@end
