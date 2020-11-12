//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ComposeViewHeaderDataSource-Protocol.h"
#import "ComposeViewHeaderDelegate-Protocol.h"
#import "DraftAttachmentsManagerDelegate-Protocol.h"
#import "GBTSmartMailInteractionSupport-Protocol.h"
#import "GBTWKWebViewComposeControllerDelegate-Protocol.h"
#import "JBTMediaInsertionListener-Protocol.h"
#import "LockerCmlLockerFrameComposeActionHandler-Protocol.h"
#import "RecipientAutocompleteViewControllerDelegate-Protocol.h"

@class ComposeViewFooter, ComposeViewHeader, DraftAttachmentsManager, GBTRecipientEmailCardView, GBTWKWebViewComposeController, NSArray, NSString;
@protocol ComposeViewDelegate, GBTClient, HtmlEditor, JBTConversationMessageDraft, JBTMessageRegion;

@interface ComposeView : UIView <ComposeViewHeaderDelegate, DraftAttachmentsManagerDelegate, LockerCmlLockerFrameComposeActionHandler, GBTSmartMailInteractionSupport, ComposeViewHeaderDataSource, GBTWKWebViewComposeControllerDelegate, JBTMediaInsertionListener, RecipientAutocompleteViewControllerDelegate>
{
    _Bool _autocompleteShown;
    id <GBTClient> _client;
    _Bool _contentsInitializedFromDraft;
    UIView *_fieldShowingAutocomplete;
    _Bool _bodyContainsUserEdits;
    id <JBTMessageRegion> _previousTripMessageRegion;
    ComposeViewFooter *_composeViewFooter;
    GBTRecipientEmailCardView *_recipientEmailCard;
    _Bool _recipientEmailCardShown;
    UIView *_recipientEmailCardTarget;
    GBTWKWebViewComposeController *_editorController;
    UIView *_headerAnimationSnapshotView;
    NSArray *_keyCommands;
    _Bool _lastAutoCompleteShownValue;
    _Bool _containsSmartComposeMessage;
    _Bool _mediaPaletteVisible;
    DraftAttachmentsManager *_attachmentsManager;
    id <ComposeViewDelegate> _delegate;
    id <JBTConversationMessageDraft> _draft;
    ComposeViewHeader *_header;
    double _accessibilityVerticalOffset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double accessibilityVerticalOffset; // @synthesize accessibilityVerticalOffset=_accessibilityVerticalOffset;
@property(nonatomic) _Bool mediaPaletteVisible; // @synthesize mediaPaletteVisible=_mediaPaletteVisible;
@property(nonatomic) _Bool containsSmartComposeMessage; // @synthesize containsSmartComposeMessage=_containsSmartComposeMessage;
@property(readonly, nonatomic) ComposeViewHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) id <JBTConversationMessageDraft> draft; // @synthesize draft=_draft;
@property(nonatomic) __weak id <ComposeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DraftAttachmentsManager *attachmentsManager; // @synthesize attachmentsManager=_attachmentsManager;
- (void)wkWebViewComposerControllerDidAddNewDropSession:(id)arg1;
- (void)wkWebViewComposeControllerEditorReady;
- (void)wkWebViewComposeControllerDidChangeContent;
- (void)tabKeyPressed;
- (id)getEditorSnapshotForHeaderAnimation;
- (unsigned long long)numberOfQuotedRegionsInDraft;
- (void)updateEmailCardFrame;
- (void)updateKeyboardAppearanceForTheme:(id)arg1;
- (void)updateAutocompleteScrollOffset;
- (void)updateAutocompleteShown:(_Bool)arg1;
- (void)updateSendButton;
- (void)updateAttachmentsManager;
- (void)setRecipientEmailCardShown:(_Bool)arg1 animated:(_Bool)arg2;
- (void)notifyDelegateOfContentsChanged:(_Bool)arg1;
- (void)createSubviewsWithShowImages:(_Bool)arg1;
- (id)createKeyCommands;
- (void)deteteWord;
- (void)deleteRow;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) UIView *fieldShowingAutocomplete;
@property(readonly, nonatomic) _Bool autocompleteShown;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (id)keyCommands;
- (_Bool)isAccessibilityElement;
- (void)view:(id)arg1 didSelectAttachmentCard:(id)arg2;
- (void)recipientAutocompleteViewControllerDidUpdate:(id)arg1;
- (void)recipientAutocompleteViewController:(id)arg1 didSelectToken:(id)arg2;
- (void)editLockerControls;
- (void)onInbodyMediaMessageRegionWithJBTMessageRegion:(id)arg1 withBoolean:(_Bool)arg2;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onDraftSavedLocalChangeCommittedWithJBTCommandSuccess:(id)arg1;
- (void)attachmentsManagerDidChangeAttachmentsViewVisibility:(id)arg1;
- (void)composeViewHeader:(id)arg1 changeExpandedStateAnimationCompleted:(_Bool)arg2;
- (void)composeViewHeader:(id)arg1 willChangeExpandedState:(_Bool)arg2 animated:(_Bool)arg3;
- (void)composeViewHeaderDidPressReturnInSubject:(id)arg1;
- (void)composeViewHeader:(id)arg1 didLongPressContact:(id)arg2 withView:(id)arg3;
- (void)composeViewHeaderDidToggleSummaryShown:(id)arg1;
- (void)composeViewHeader:(id)arg1 didUpdateText:(id)arg2 onInputView:(id)arg3;
- (void)composeViewHeaderHasInvalidInput:(id)arg1;
- (void)composeViewHeaderDidTapResponseSelector:(id)arg1;
- (void)composeViewHeader:(id)arg1 didUpdateSelectedFromAddress:(id)arg2 previousAddress:(id)arg3;
- (void)composeViewHeader:(id)arg1 willUpdateSelectedFromAddress:(id)arg2;
- (void)composeViewHeaderDidUpdateAvailableFromAddresses:(id)arg1;
- (void)composeViewHeaderDidUpdateData:(id)arg1;
- (void)composeViewHeader:(id)arg1 didChangeExpandedState:(_Bool)arg2;
@property(readonly, nonatomic) _Bool htmlEditorHasFocus;
@property(readonly, nonatomic) id <HtmlEditor> htmlEditor;
@property(nonatomic) struct CGPoint scrollOffset;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool hasValidEmail;
@property(readonly, nonatomic) _Bool bodyContainsUserEdits;
- (void)endSmartComposeSessionWithReason:(unsigned long long)arg1;
- (void)clearSmartComposeSuggestionCache;
- (void)updateLockerControls;
- (id)headerParentController;
- (void)updateBodyText;
- (void)setBodyContainsUserEdits:(_Bool)arg1;
- (void)updateRecipientsWithResponseType:(id)arg1 userInitiated:(_Bool)arg2;
- (void)updateRecipientsFromDraft;
- (void)prepareForSendOrCancel;
- (void)persistContents;
- (void)focusSubject;
- (void)focusRecipients;
- (void)focusBody;
- (void)didRotate;
- (void)completeToWithPrefix:(id)arg1;
- (id)initWithDraft:(id)arg1 frame:(struct CGRect)arg2 header:(id)arg3 client:(id)arg4 showImages:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
