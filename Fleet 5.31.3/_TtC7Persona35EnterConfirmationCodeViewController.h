//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UILabel, UITextField, _TtC7Persona13PersonaButton;

@interface _TtC7Persona35EnterConfirmationCodeViewController : UIViewController
{
    // Error parsing type: , name: lblTitle
    // Error parsing type: , name: lblDescription
    // Error parsing type: , name: txtCodeOne
    // Error parsing type: , name: txtCodeTwo
    // Error parsing type: , name: txtCodeThree
    // Error parsing type: , name: txtCodeFour
    // Error parsing type: , name: txtHiddenInput
    // Error parsing type: , name: btnContinue
    // Error parsing type: , name: viewModel
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)handleButtonTapped:(id)arg1;
- (void)handleEditingChanged:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic) __weak _TtC7Persona13PersonaButton *btnContinue; // @synthesize btnContinue;
@property(nonatomic) __weak UITextField *txtHiddenInput; // @synthesize txtHiddenInput;
@property(nonatomic) __weak UITextField *txtCodeFour; // @synthesize txtCodeFour;
@property(nonatomic) __weak UITextField *txtCodeThree; // @synthesize txtCodeThree;
@property(nonatomic) __weak UITextField *txtCodeTwo; // @synthesize txtCodeTwo;
@property(nonatomic) __weak UITextField *txtCodeOne; // @synthesize txtCodeOne;
@property(nonatomic) __weak UILabel *lblDescription; // @synthesize lblDescription;
@property(nonatomic) __weak UILabel *lblTitle; // @synthesize lblTitle;

@end

