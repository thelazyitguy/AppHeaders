//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppSettingsViewController.h"

@class UIButton;

@interface NFUILocDebugViewController : AppSettingsViewController
{
    _Bool _isNonMember;
    UIButton *_switchButton;
}

+ (id)newMenuViewControllerWithProvider:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *switchButton; // @synthesize switchButton=_switchButton;
@property _Bool isNonMember; // @synthesize isNonMember=_isNonMember;
- (void)didSelectNewLocale:(id)arg1;
- (void)swtichToLocale:(id)arg1 isMember:(_Bool)arg2;
- (void)swtichLocalization:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

