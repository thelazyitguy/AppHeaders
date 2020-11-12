//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class STPTheme, UIBarButtonItem;

@interface STPCoreViewController : UIViewController
{
    STPTheme *_theme;
    UIBarButtonItem *_cancelItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *cancelItem; // @synthesize cancelItem=_cancelItem;
@property(retain, nonatomic) STPTheme *theme; // @synthesize theme=_theme;
- (_Bool)useSystemBackButton;
- (void)handleCancelTapped:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateAppearance;
- (void)viewDidLoad;
- (void)createAndSetupViews;
- (void)commonInitWithTheme:(id)arg1;
- (id)initWithTheme:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

