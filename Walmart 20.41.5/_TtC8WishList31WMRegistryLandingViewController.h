//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIButton, UILabel, UIView;

@interface _TtC8WishList31WMRegistryLandingViewController : UIViewController
{
    // Error parsing type: , name: babyButton
    // Error parsing type: , name: weddingButton
    // Error parsing type: , name: findButton
    // Error parsing type: , name: babyButtonView
    // Error parsing type: , name: babyButtonActionLabel
    // Error parsing type: , name: weddingButtonView
    // Error parsing type: , name: weddingButtonActionLabel
    // Error parsing type: , name: findButtonView
    // Error parsing type: , name: weddingTopLayoutConstraint
    // Error parsing type: , name: hasBabyRegistry
    // Error parsing type: , name: hasWeddingRegistry
    // Error parsing type: , name: isLoggedIn
    // Error parsing type: , name: listManager
    // Error parsing type: , name: weddingRegistryType
    // Error parsing type: , name: babyRegistryType
    // Error parsing type: , name: listTypes
    // Error parsing type: , name: listDict
    // Error parsing type: , name: hud
    // Error parsing type: , name: buttonInProgress
    // Error parsing type: , name: cameFromAddToList
    // Error parsing type: , name: addToListItem
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)prepareForUnwindToLanding:(id)arg1;
- (void)babyButtonAction:(id)arg1;
- (void)weddingButtonAction:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *weddingTopLayoutConstraint; // @synthesize weddingTopLayoutConstraint;
@property(nonatomic) __weak UIView *findButtonView; // @synthesize findButtonView;
@property(nonatomic) __weak UILabel *weddingButtonActionLabel; // @synthesize weddingButtonActionLabel;
@property(nonatomic) __weak UIView *weddingButtonView; // @synthesize weddingButtonView;
@property(nonatomic) __weak UILabel *babyButtonActionLabel; // @synthesize babyButtonActionLabel;
@property(nonatomic) __weak UIView *babyButtonView; // @synthesize babyButtonView;
@property(nonatomic) __weak UIButton *findButton; // @synthesize findButton;
@property(nonatomic) __weak UIButton *weddingButton; // @synthesize weddingButton;
@property(nonatomic) __weak UIButton *babyButton; // @synthesize babyButton;

@end

