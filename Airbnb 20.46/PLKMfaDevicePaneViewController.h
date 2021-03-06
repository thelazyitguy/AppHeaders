//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <LinkKit/PLKCustomizable-Protocol.h>
#import <LinkKit/PLKFlowCoordinated-Protocol.h>
#import <LinkKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, PLKFlowContext, PLKMfaDevicePaneTableViewController, PLKStepBar, UIBarButtonItem, UIControl, UILabel, UISelectionFeedbackGenerator, UIView;
@protocol PLKFlowCoordinator;

@interface PLKMfaDevicePaneViewController : UIViewController <UITableViewDelegate, PLKCustomizable, PLKFlowCoordinated>
{
    id <PLKFlowCoordinator> _flowCoordinator;
    PLKFlowContext *_flowContext;
    NSArray *_devices;
    UILabel *_info;
    UIView *_containerCropView;
    NSLayoutConstraint *_containerCropViewBottomConstraint;
    UIControl *_policyControl;
    UILabel *_policyLabel;
    PLKStepBar *_stepBar;
    UIBarButtonItem *_submitButton;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    PLKMfaDevicePaneTableViewController *_tableViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PLKMfaDevicePaneTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UIBarButtonItem *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) PLKStepBar *stepBar; // @synthesize stepBar=_stepBar;
@property(retain, nonatomic) UILabel *policyLabel; // @synthesize policyLabel=_policyLabel;
@property(retain, nonatomic) UIControl *policyControl; // @synthesize policyControl=_policyControl;
@property(retain, nonatomic) NSLayoutConstraint *containerCropViewBottomConstraint; // @synthesize containerCropViewBottomConstraint=_containerCropViewBottomConstraint;
@property(retain, nonatomic) UIView *containerCropView; // @synthesize containerCropView=_containerCropView;
@property(retain, nonatomic) UILabel *info; // @synthesize info=_info;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) PLKFlowContext *flowContext; // @synthesize flowContext=_flowContext;
@property(nonatomic) __weak id <PLKFlowCoordinator> flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)customizeWithConfiguration:(id)arg1;
- (_Bool)maybeShowBofaTermsAndConditionsWithConfiguration:(id)arg1;
- (id)addAttributes:(id)arg1 toSubstring:(id)arg2 inString:(id)arg3;
- (void)didTapPolicy:(id)arg1;
- (void)didTapSubmit:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

