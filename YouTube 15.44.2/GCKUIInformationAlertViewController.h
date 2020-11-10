//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GCKUIResources, GCKUIStyleAttributes;
@protocol GCKUIInformationAlertViewModelable;

@interface GCKUIInformationAlertViewController : UIViewController
{
    id <GCKUIInformationAlertViewModelable> _viewModel;
    GCKUIStyleAttributes *_styleAttributes;
    GCKUIResources *_resources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCKUIResources *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) GCKUIStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) id <GCKUIInformationAlertViewModelable> viewModel; // @synthesize viewModel=_viewModel;
- (void)cancelButtonTapped:(id)arg1;
- (void)secondaryActionTapped:(id)arg1;
- (void)primaryActionTapped:(id)arg1;
- (id)createCancelButton;
- (id)createSecondaryButton;
- (id)createPrimaryButton;
- (id)createSubtitleLabel;
- (id)createTitleLabel;
- (id)createContainerView;
- (id)gck_trailingAnchor;
- (id)gck_leadingAnchor;
- (id)gck_topAnchor;
- (id)gck_bottomAnchor;
- (void)createUserInterface;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

@end

