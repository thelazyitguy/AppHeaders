//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NFUIButton, NFUILabel, NSString, UILabel, UIView;

@interface NFUIFirstRateDialogViewController : UIViewController
{
    CDUnknownBlockType _onCompletion;
    UIView *_backgroundView;
    UIView *_contentView;
    NFUILabel *_titleLabel;
    UILabel *_thumbsUpIconLabel;
    NFUILabel *_thumbsUpTitle;
    NFUILabel *_thumbsUpSubtitle;
    UILabel *_thumbsDownIconLabel;
    NFUILabel *_thumbsDownTitle;
    NFUILabel *_thumbsDownSubtitle;
    NFUIButton *_okButton;
    UILabel *_selectedThumbLabel;
    UIView *_selectedThumbContainerView;
    UIView *_labelsView;
    NSString *_iconString;
    NSString *_profileName;
}

+ (id)firstRateDialogWithIconString:(id)arg1 andProfileName:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *profileName; // @synthesize profileName=_profileName;
@property(copy, nonatomic) NSString *iconString; // @synthesize iconString=_iconString;
@property(nonatomic) __weak UIView *labelsView; // @synthesize labelsView=_labelsView;
@property(nonatomic) __weak UIView *selectedThumbContainerView; // @synthesize selectedThumbContainerView=_selectedThumbContainerView;
@property(nonatomic) __weak UILabel *selectedThumbLabel; // @synthesize selectedThumbLabel=_selectedThumbLabel;
@property(nonatomic) __weak NFUIButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak NFUILabel *thumbsDownSubtitle; // @synthesize thumbsDownSubtitle=_thumbsDownSubtitle;
@property(nonatomic) __weak NFUILabel *thumbsDownTitle; // @synthesize thumbsDownTitle=_thumbsDownTitle;
@property(nonatomic) __weak UILabel *thumbsDownIconLabel; // @synthesize thumbsDownIconLabel=_thumbsDownIconLabel;
@property(nonatomic) __weak NFUILabel *thumbsUpSubtitle; // @synthesize thumbsUpSubtitle=_thumbsUpSubtitle;
@property(nonatomic) __weak NFUILabel *thumbsUpTitle; // @synthesize thumbsUpTitle=_thumbsUpTitle;
@property(nonatomic) __weak UILabel *thumbsUpIconLabel; // @synthesize thumbsUpIconLabel=_thumbsUpIconLabel;
@property(nonatomic) __weak NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType onCompletion; // @synthesize onCompletion=_onCompletion;
- (long long)overrideUserInterfaceStyle;
- (void)didReceiveMemoryWarning;
- (void)dismiss;
- (void)dismissButtonTapped:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)configureAccessibility;
- (void)drawThumbRadiusDecoration;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end

