//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, _TtC8LastPass13RoundedButton;

@interface _TtC8LastPass39EnableNotificationsPrimerViewController : UIViewController
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subTitleLabel
    // Error parsing type: , name: keepUpToDateLabel
    // Error parsing type: , name: enableSharingLabel
    // Error parsing type: , name: enableRecoveryLabel
    // Error parsing type: , name: enableNotificationsButton
    // Error parsing type: , name: laterButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)laterButtonTapped;
- (void)enableNotificationTapped;
- (void)viewDidLoad;
@property(nonatomic) __weak UIButton *laterButton; // @synthesize laterButton;
@property(nonatomic) __weak _TtC8LastPass13RoundedButton *enableNotificationsButton; // @synthesize enableNotificationsButton;
@property(nonatomic) __weak UILabel *enableRecoveryLabel; // @synthesize enableRecoveryLabel;
@property(nonatomic) __weak UILabel *enableSharingLabel; // @synthesize enableSharingLabel;
@property(nonatomic) __weak UILabel *keepUpToDateLabel; // @synthesize keepUpToDateLabel;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;

@end
