//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NFUIButton, NFUICloseButton, UILabel;

@interface _TtC4Argo41CollectingPhoneNumbersErrorViewController : UIViewController
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: contentLabel
    // Error parsing type: , name: ctaButton
    // Error parsing type: , name: closeButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)closeButtonDidTap:(id)arg1;
- (void)backHomeButtonDidTap:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NFUICloseButton *closeButton; // @synthesize closeButton;
@property(nonatomic) __weak NFUIButton *ctaButton; // @synthesize ctaButton;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;

@end
