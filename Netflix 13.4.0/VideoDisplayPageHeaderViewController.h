//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NFUIIconButton, NSArray, UILabel;
@protocol SeasonPickerViewControllerDelegateProtocol;

@interface VideoDisplayPageHeaderViewController : UIViewController
{
    UILabel *_titleLabel;
    NFUIIconButton *_seasonButton;
    UILabel *_chevron;
    id <SeasonPickerViewControllerDelegateProtocol> _delegate;
    NSArray *_verticalConstraints;
    NSArray *_horizontalConstraints;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property(copy, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(nonatomic) __weak id <SeasonPickerViewControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UILabel *chevron; // @synthesize chevron=_chevron;
@property(nonatomic) __weak NFUIIconButton *seasonButton; // @synthesize seasonButton=_seasonButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)seasonButtonPressed:(id)arg1;
- (void)hideShowElements:(id)arg1;
- (void)removeAllAnimations;
- (void)hideBoth;
- (void)showSeasonHideTitle;
- (void)showTitleHideSeason;
- (void)configureWithData:(id)arg1;
- (void)updateViewConstraints;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end

