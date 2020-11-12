//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCaribouApiProtoAddonsTemplatesChatExtensions_UpdateMessageDraft, JAddOnsComposeAction_ComposedEmailType, JAddOnsFormAction, JAddOnsFormAction_LoadIndicator, JAddOnsOpenDrivePicker, JAddOnsOpenLink, JAddOnsPushCard, NSString;
@protocol JSLSuggestionsUpdater, JavaUtilList;

@protocol AddOnsCmlAddonsActionHandler <JavaObject>
- (void)fetchEncryptedAutoCompletionWithJavaUtilList:(id <JavaUtilList>)arg1 withBoolean:(_Bool)arg2 withNSString:(NSString *)arg3 withNSString:(NSString *)arg4 withJSLSuggestionsUpdater:(id <JSLSuggestionsUpdater>)arg5;
- (void)fetchAutoCompleteWithFormInputsWithJAddOnsFormAction:(JAddOnsFormAction *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2 withBoolean:(_Bool)arg3 withNSString:(NSString *)arg4 withJSLSuggestionsUpdater:(id <JSLSuggestionsUpdater>)arg5;
- (void)onRenderOverridableViewWithNSString:(NSString *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2;
- (void)updateMessageDraftWithComGoogleCaribouApiProtoAddonsTemplatesChatExtensions_UpdateMessageDraft:(ComGoogleCaribouApiProtoAddonsTemplatesChatExtensions_UpdateMessageDraft *)arg1;
- (void)openDrivePickerWithJAddOnsOpenDrivePicker:(JAddOnsOpenDrivePicker *)arg1;
- (void)pushCardWithJAddOnsPushCard:(JAddOnsPushCard *)arg1;
- (void)openLinkWithJAddOnsOpenLink:(JAddOnsOpenLink *)arg1;
- (void)openSafeUrlWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withBoolean:(_Bool)arg3 withBoolean:(_Bool)arg4;
- (void)openUrlWithNSString:(NSString *)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3;
- (void)onCardScrollWithNSString:(NSString *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2;
- (void)refreshCardWithNSString:(NSString *)arg1;
- (void)submitEncryptedUniversalActionWithNSString:(NSString *)arg1;
- (void)submitUniversalActionWithNSString:(NSString *)arg1;
- (void)submitEncryptedOpenLinkActionWithJavaUtilList:(id <JavaUtilList>)arg1 withBoolean:(_Bool)arg2 withNSString:(NSString *)arg3 withJAddOnsFormAction_LoadIndicator:(JAddOnsFormAction_LoadIndicator *)arg4 withBoolean:(_Bool)arg5;
- (void)submitOpenLinkActionWithFormInputsWithJAddOnsFormAction:(JAddOnsFormAction *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2 withBoolean:(_Bool)arg3;
- (void)submitEncryptedFormActionWithJavaUtilList:(id <JavaUtilList>)arg1 withBoolean:(_Bool)arg2 withNSString:(NSString *)arg3 withJAddOnsFormAction_LoadIndicator:(JAddOnsFormAction_LoadIndicator *)arg4 withBoolean:(_Bool)arg5;
- (void)submitFormActionWithFormInputsWithJAddOnsFormAction:(JAddOnsFormAction *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2 withBoolean:(_Bool)arg3;
- (void)submitEncryptedComposeActionWithJavaUtilList:(id <JavaUtilList>)arg1 withBoolean:(_Bool)arg2 withNSString:(NSString *)arg3 withJAddOnsFormAction_LoadIndicator:(JAddOnsFormAction_LoadIndicator *)arg4 withBoolean:(_Bool)arg5;
- (void)submitComposeActionWithFormInputsWithJAddOnsFormAction:(JAddOnsFormAction *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2 withBoolean:(_Bool)arg3 withJAddOnsComposeAction_ComposedEmailType:(JAddOnsComposeAction_ComposedEmailType *)arg4;
- (void)backButtonClicked;
- (void)closeButtonClicked;
- (void)expandCardHeaderWithInt:(int)arg1;
- (void)toggleFullScreen;
@end
