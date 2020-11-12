//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTDateTimeGridPickePopupViewDelegate-Protocol.h"
#import "GBTDateTimePickerDelegate-Protocol.h"
#import "GBTDateTimePickerModalViewControllerDelegate-Protocol.h"
#import "PopupViewControllerDelegate-Protocol.h"

@class NSString, UIViewController, UIWindow;
@protocol GBTScheduledSendControllerDelegate, JBTConversationMessageDraft, PanelViewControllerInterface;

@interface GBTScheduledSendController : NSObject <PopupViewControllerDelegate, GBTDateTimeGridPickePopupViewDelegate, GBTDateTimePickerDelegate, GBTDateTimePickerModalViewControllerDelegate>
{
    _Bool _shouldShowTimeZone;
    _Bool _isPickerDismissed;
    NSString *_dateTimeGridPickerHeaderTitle;
    NSString *_dateTimeGridPickerAccessibilityIdentifier;
    id <GBTScheduledSendControllerDelegate> _delegate;
    id <JBTConversationMessageDraft> _draft;
    UIWindow *_keyWindow;
    UIViewController<PanelViewControllerInterface> *_panelVC;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController<PanelViewControllerInterface> *panelVC; // @synthesize panelVC=_panelVC;
@property(retain, nonatomic) UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(nonatomic) _Bool isPickerDismissed; // @synthesize isPickerDismissed=_isPickerDismissed;
@property(nonatomic) __weak id <JBTConversationMessageDraft> draft; // @synthesize draft=_draft;
@property(nonatomic) __weak id <GBTScheduledSendControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool shouldShowTimeZone; // @synthesize shouldShowTimeZone=_shouldShowTimeZone;
- (void)dismissScheduledSendGridPicker;
- (void)dateTimePickerModalViewControllerDidCancel:(id)arg1;
- (void)dateTimePickerModalViewController:(id)arg1 didSaveDate:(id)arg2;
- (void)dateTimePickerDidCancel;
- (void)dateTimePickerDidSaveDate:(id)arg1;
- (void)dateTimeGridPickerPopupView:(id)arg1 didSelectSuggestedOption:(id)arg2;
- (void)dateTimeGridPickerPopupView:(id)arg1 didSelectCustomOption:(id)arg2;
- (id)dateTimeGridPickerOptions;
@property(readonly, nonatomic) NSString *dateTimeGridPickerHeaderTitle; // @synthesize dateTimeGridPickerHeaderTitle=_dateTimeGridPickerHeaderTitle;
@property(readonly, nonatomic) NSString *dateTimeGridPickerAccessibilityIdentifier; // @synthesize dateTimeGridPickerAccessibilityIdentifier=_dateTimeGridPickerAccessibilityIdentifier;
- (void)popupViewControllerDidFinish:(id)arg1;
- (void)popupViewControllerDidCancel:(id)arg1;
- (void)presentScheduledSendGridPickerWithTriggeringView:(id)arg1;
- (id)initWithDraft:(id)arg1 window:(id)arg2 panelVC:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
