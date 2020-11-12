//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <LinkKit/PLKCustomizable-Protocol.h>
#import <LinkKit/PLKExitHandler-Protocol.h>
#import <LinkKit/PLKFlowCoordinated-Protocol.h>
#import <LinkKit/UITextFieldDelegate-Protocol.h>

@class NSString, PLKFlowContext, PLKStepBar, PLKTextField, UIBarButtonItem, UILabel, UINotificationFeedbackGenerator, UIView;
@protocol PLKFlowCoordinator;

@interface PLKMicrodepositsNamePaneViewController : UIViewController <UITextFieldDelegate, PLKCustomizable, PLKFlowCoordinated, PLKExitHandler>
{
    id <PLKFlowCoordinator> _flowCoordinator;
    PLKFlowContext *_flowContext;
    UILabel *_info;
    UILabel *_message;
    UIBarButtonItem *_continueButton;
    PLKTextField *_nameTextField;
    PLKStepBar *_stepBar;
    UINotificationFeedbackGenerator *_feedbackGenerator;
    UIView *_inputAccessoryStepBar;
    id _plk_showKeyboardObserver;
    id _plk_hideKeyboardObserver;
    id _plk_willChangeKeyboardObserver;
    id _plk_didChangeKeyboardObserver;
}

- (void).cxx_destruct;
@property(retain) id plk_didChangeKeyboardObserver; // @synthesize plk_didChangeKeyboardObserver=_plk_didChangeKeyboardObserver;
@property(retain) id plk_willChangeKeyboardObserver; // @synthesize plk_willChangeKeyboardObserver=_plk_willChangeKeyboardObserver;
@property(retain) id plk_hideKeyboardObserver; // @synthesize plk_hideKeyboardObserver=_plk_hideKeyboardObserver;
@property(retain) id plk_showKeyboardObserver; // @synthesize plk_showKeyboardObserver=_plk_showKeyboardObserver;
@property __weak UIView *inputAccessoryStepBar; // @synthesize inputAccessoryStepBar=_inputAccessoryStepBar;
@property(retain, nonatomic) UINotificationFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) PLKStepBar *stepBar; // @synthesize stepBar=_stepBar;
@property(retain, nonatomic) PLKTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) UIBarButtonItem *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) __weak UILabel *message; // @synthesize message=_message;
@property(retain, nonatomic) UILabel *info; // @synthesize info=_info;
@property(retain, nonatomic) PLKFlowContext *flowContext; // @synthesize flowContext=_flowContext;
@property(nonatomic) __weak id <PLKFlowCoordinator> flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
- (void)didExitLinkFlow;
- (void)willShowExitPane;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)shakeEffect:(id)arg1;
- (void)customizeWithConfiguration:(id)arg1;
- (void)didTapContinue:(id)arg1;
- (_Bool)submitName;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
