//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIView, _TtC4Hulu14GradientButton, _TtC7HuluAPI18HuluTextStyleLabel;

@interface _TtC4Hulu30DownloadsFeatureViewController : UIViewController
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: seeWhatsDownloadableButton
    // Error parsing type: , name: cardView
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: onCloseButtonTapped
    // Error parsing type: , name: onSeeWhatsDownloadableTapped
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapOnCardView:(id)arg1;
- (void)didTapOnBackgroundView:(id)arg1;
- (void)seeDownloadableButtonDidTouchUpInside:(id)arg1;
- (void)closeButtonDidTouchUpInside:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) long long overrideUserInterfaceStyle;
@property(nonatomic, retain) UIButton *closeButton; // @synthesize closeButton;
@property(nonatomic, retain) UIView *cardView; // @synthesize cardView;
@property(nonatomic, retain) _TtC4Hulu14GradientButton *seeWhatsDownloadableButton; // @synthesize seeWhatsDownloadableButton;
@property(nonatomic, retain) UILabel *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic, retain) _TtC7HuluAPI18HuluTextStyleLabel *titleLabel; // @synthesize titleLabel;

@end

